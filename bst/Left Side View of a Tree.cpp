/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

 void solveutil(Tree root,ArrayList list, int level){
     if(root== null){
         return ;
     }
     if(list.get(level)==null){
         list.add(root) ;
         solveutil(root.left , list,level+1);
         solveutil(root.right , list,level+1);
     }
 }
vector<int> solve(Tree* root) {
    ArrayList<Tree> list = new ArrayList<>() ;
    solveutil(root,list,0) ;
    for(Node cur:list){
        print(cur.data+" ") ;
    }
}