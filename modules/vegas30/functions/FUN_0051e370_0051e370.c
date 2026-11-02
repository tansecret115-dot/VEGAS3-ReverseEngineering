/* Module: vegas30.exe
   Function: FUN_0051e370
   Address: 0051e370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0051e370(LPRECT param_1,RECT *param_2,int *param_3,int param_4,int param_5)

{
  RECT local_30;
  RECT local_20;
  tagRECT local_10;
  
  local_30.left = param_1->left;
  local_30.top = param_1->top;
  local_30.right = param_1->right;
  local_20.left = *param_3;
  local_30.bottom = param_1->bottom;
  local_20.top = param_3[1];
  local_20.right = param_3[2];
  local_20.bottom = param_3[3];
  if ((local_20.right - local_20.left < 0) || (local_20.bottom - local_20.top < 0)) {
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = 0;
    local_20.bottom = 0;
  }
  if ((local_30.right - local_30.left < 0) || (local_30.bottom - local_30.top < 0)) {
    local_30.left = 0;
    local_30.top = 0;
    local_30.right = 0;
    local_30.bottom = 0;
  }
  IntersectRect(&local_10,param_2,&local_20);
  IntersectRect(param_1,&local_30,&local_10);
  if ((param_4 <= param_1->right - param_1->left) && (param_5 <= param_1->bottom - param_1->top)) {
    return 1;
  }
  return 0;
}


