/* Module: vegas30.exe
   Function: FUN_00449300
   Address: 00449300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00449300(HDC param_1,LPRECT param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  undefined4 local_18;
  undefined4 local_14;
  tagRECT local_10;
  
  local_18 = *param_4;
  local_14 = param_4[1];
  if ((param_5[2] != *param_5 && -1 < param_5[2] - *param_5) &&
     (param_5[3] != param_5[1] && -1 < param_5[3] - param_5[1])) {
    FUN_0044e9f0(param_1,param_5,&local_18,&DAT_0064b188);
    if ((param_2->right != param_2->left && -1 < param_2->right - param_2->left) &&
       (param_2->bottom != param_2->top && -1 < param_2->bottom - param_2->top)) {
      DrawEdge(param_1,param_2,6,0x80f);
    }
    if ((param_3[2] != *param_3 && -1 < param_3[2] - *param_3) &&
       (param_3[3] != param_3[1] && -1 < param_3[3] - param_3[1])) {
      local_10.bottom = param_3[3];
      local_10.top = param_3[1] + -4;
      local_10.left = param_2->left + 7;
      local_10.right = param_2->right + -7;
      DrawEdge(param_1,&local_10,6,2);
    }
  }
  return;
}


