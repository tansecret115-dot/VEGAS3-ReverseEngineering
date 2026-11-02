/* Module: vidcap30.exe
   Function: FUN_0043dc50
   Address: 0043dc50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043dc50(int param_1,RECT *param_2)

{
  RECT local_10;
  
  local_10.left = param_2->left + 4;
  local_10.top = param_2->top + 4;
  local_10.right = param_2->right + -4;
  local_10.bottom = param_2->bottom;
  IntersectRect((LPRECT)(param_1 + 0x14cc),&local_10,param_2);
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x47,0,(LPRECT)(param_1 + 0x14cc));
  return;
}


