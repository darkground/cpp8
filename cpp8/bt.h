#include <string>

struct BTNode
{
    int value;
    BTNode* left;
    BTNode* right;
};

BTNode* searchBT(int key, BTNode* root);
BTNode* createBT(int value);
BTNode* getMinBT(BTNode* root);
BTNode* getMaxBT(BTNode* root);
BTNode* deleteBT(int key, BTNode* root);
void insertBT(int key, BTNode* root);
void destroyBT(BTNode* root);
void printBT(BTNode* node, std::ostream& os, const std::string& rpf = "", const std::string& mpf = "", const std::string& lpf = "");
void addBT(int value, BTNode*& root);
int sizeBT(BTNode* root, int size_count = 0);
void strwBT(BTNode* root);
void revwBT(BTNode* root);
void symwBT(BTNode* root);