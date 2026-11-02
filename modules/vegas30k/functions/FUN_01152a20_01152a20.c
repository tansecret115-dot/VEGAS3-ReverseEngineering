/* Module: vegas30k.dll
   Function: FUN_01152a20
   Address: 01152a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01152a20(HDC param_1,LPRECT param_2,int param_3)

{
  int h;
  int w;
  
  w = param_2->right - param_2->left;
  h = (param_2->bottom + param_3 * -2) - param_2->top;
  PatBlt(param_1,param_2->left,param_2->top,w,param_3,0x550009);
  PatBlt(param_1,param_2->left,param_2->bottom - param_3,w,param_3,0x550009);
  PatBlt(param_1,param_2->left,param_2->top + param_3,param_3,h,0x550009);
  PatBlt(param_1,param_2->right - param_3,param_2->top + param_3,param_3,h,0x550009);
  InflateRect(param_2,-param_3,-param_3);
  return;
}


