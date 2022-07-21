
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };


class Solution {
public:
    void createCopyOfEachNode(Node *node, unordered_map<Node*, Node*>&mp, set<Node*> &vis) {
        if(vis.find(node) != vis.end()) return;
        vis.insert(node);
        Node *copy = new Node(node->val);
        mp[node] = copy;
        for(auto it : node->neighbors) createCopyOfEachNode(it, mp, vis);
    }
    
    void markNeighbors(Node *node, unordered_map<Node*, Node*>&mp, set<Node*> &vis) {
        if(vis.find(node) != vis.end()) return;
        vis.insert(node);
        
        for(auto it : node->neighbors) {
            Node *deepCopyPar = mp[node];
            Node *deepCopyChild = mp[it];
            deepCopyPar->neighbors.push_back(deepCopyChild);
            markNeighbors(it, mp, vis);
        }
    }
    
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<Node*, Node*> mp;
        set<Node*> vis;
        createCopyOfEachNode(node, mp, vis);
        vis.clear();
        markNeighbors(node, mp, vis);
        return mp[node];
    }
};
