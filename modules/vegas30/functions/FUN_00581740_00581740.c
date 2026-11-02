/* Module: vegas30.exe
   Function: FUN_00581740
   Address: 00581740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00581740(int *param_1)

{
  int iVar1;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_1[0xb];
  if ((*(uint *)(iVar1 + 0x10) & 0x100) != 0) {
    param_1[0xb] = *(int *)(iVar1 + 0x28);
    return 0;
  }
  if (*param_1 != 1) {
    return 0;
  }
  local_10 = param_1[7];
  local_c = param_1[8];
  local_8 = param_1[9];
  local_4 = param_1[10];
  if ((*(uint *)(iVar1 + 0x10) & 0x800) != 0) {
    local_20.left = param_1[7];
    local_20.right = param_1[9];
    local_20.bottom = param_1[10];
    local_20.top = param_1[8] + (local_20.bottom - param_1[8] >> 1);
    DrawEdge((HDC)param_1[6],&local_20,6,2);
    return 1;
  }
  FUN_00581800((HDC)param_1[6],&local_10,param_1);
  return 1;
}


