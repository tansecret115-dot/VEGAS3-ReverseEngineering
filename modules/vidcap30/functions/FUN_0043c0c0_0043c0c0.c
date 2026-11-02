/* Module: vidcap30.exe
   Function: FUN_0043c0c0
   Address: 0043c0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c0c0(int param_1,HDC param_2,undefined4 param_3,LONG *param_4)

{
  tagRECT local_10;
  
  local_10.left = *param_4;
  local_10.top = param_4[1];
  local_10.right = param_4[2];
  local_10.bottom = param_4[3];
  DrawEdge(param_2,&local_10,2,0x80f);
  if ((*(byte *)(param_1 + 0x1ae8) & 2) == 0) {
    FUN_00412310(param_2,param_1 + 0xb0,6,1);
  }
  local_10.left = *(int *)(param_1 + 0x90);
  local_10.top = *(int *)(param_1 + 0x94);
  local_10.right = *(LONG *)(param_1 + 0x98);
  local_10.bottom = *(int *)(param_1 + 0x9c);
  if (8 < local_10.bottom - local_10.top) {
    FUN_00412310(param_2,&local_10,6,0x2002);
  }
  if (0 < *(int *)(param_1 + 0x1418)) {
    local_10.top = local_10.top + 4;
    local_10.bottom = local_10.bottom + -4;
    local_10.left = *(int *)(param_1 + 0x1418);
    FUN_00412310(param_2,&local_10,6,1);
  }
  FUN_0043c1d0(param_1,param_2,param_3,param_4);
  FUN_0043c310(param_1,param_2,param_3,param_4);
  FUN_0043c440(param_1,param_2,param_3,param_4);
  FUN_0043c450(param_1,param_2,param_3,param_4);
  return;
}


