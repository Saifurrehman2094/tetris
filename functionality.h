/* PROGRAMMING FUNDAMENTAL'S PROJECT FOR FALL 2022 BS(CS)
 * You need to define the required function in the part instructed here below.
 * Avoid making any unnecessary changes, particularly the ones you don't understand.
 * The different pieces should be defined using an array - uncomment the following code once you are done creating the array.
 * TIP: Understand thoroughly before getting started with coding.
 * */
using namespace std;
//---Piece Starts to Fall When Game Starts---//
void fallingPiece(float& timer, float& delay,int& colorNum){
     for (int i=0;i<4;i++)
    if (timer>delay){
        for (int i=0;i<4;i++){
            point_2[i][0]=point_1[i][0];
            point_2[i][1]=point_1[i][1];
            point_1[i][1]+=1;                   //How much units downward
          //  point_1[i][0]+=delta_x;
        }
        if (!anamoly()){
         
        for(int i=0;i<4;i++)
       gameGrid[point_2[i][1]][point_2[i][0]]= colorNum;
        colorNum=1+rand()%7;
            int n=rand()%7;
            
            //--- Un-Comment this Part When You Make BLOCKS array---//
             
                for (int i=0;i<4;i++){
                    point_1[i][0] = BLOCKS[n][i] % 10;
                    point_1[i][1] = BLOCKS[n][i] / 10;
                    
                    
                }
            
        }
        
        timer=0;
           delay=0.3;
    }
 delay=0.3;   
}

/////////////////////////////////////////////
///*** START CODING YOUR FUNTIONS HERE ***///
void movement(int &delta_x,int &colorNum){

if (delta_x==1 || delta_x==-1)
//if (anamoly()){
     for (int i=0;i<4;i++){
          if(point_1[i][0]+delta_x<=10 || point_1[i][0]+delta_x>=-1){       
               for (int j=0;j<4;j++){
                if((point_2[j][0])==9){
                if(delta_x==1)
          delta_x=0;
        
          else
            delta_x=delta_x;
            }
            else if((point_2[j][0])==0){
                if(delta_x==-1)
          delta_x=0;
          }
          else
          delta_x=delta_x;
           if(point_2[i][0]+delta_x==10 || point_2[i][0]+delta_x==-1)
           break;  
          }   
          point_2[i][0]=point_1[i][0];
          point_2[i][1]=point_1[i][0];
               point_1[i][0]+=delta_x;
                
                 }    
                }
                if (!anamoly()){
                for (int i=0;i<4;i++)
                point_1[i][0]=point_2[i][0];
 }
 delta_x=0;
 }
 
 ///////////////////rotation////////////////////////
 void rotation(bool &rotate){
   if (rotate==true)
        {
            int centre,centre1;
            centre=point_1[1][0];  // centre of rotation
            centre1=point_1[1][1];  // centre of rotation
            for (int i = 0; i < 4; i++)
            {
                int x = point_1[i][1]-centre1; 
                int y = point_1[i][0]-centre; 
                point_1[i][0] = centre-x;
                point_1[i][1] = centre1+y; 
             
                rotate=0;
            }
            rotate=0;
            if (!anamoly()) 
            for (int i = 0; i < 4; i++) {
            point_1[i][1] = point_2[i][1];
            point_1[i][0] = point_2[i][0];
           rotate=0; 
        }
  rotate=0;
  }
  }
  
//////////line burst/////////////
void lineburst(int M,int N,int delta_x,int delay,int &num){
int g=M-1;
int times=0;
for (int i=M-1;i>0;i--){
   times=0;
   for (int j=0;j<N;j++){
   if (gameGrid[i][j])
   times+=1;
   gameGrid[g][j]=gameGrid[i][j];
   if (times==N)
   num+=10;
   }
   if (times<N)
   g-=1;
   }
   delta_x=0;
   delay=0.3;
   }
   
   
   
   
   
   
   
  






 
///*** YOUR FUNCTIONS END HERE ***///
/////////////////////////////////////
