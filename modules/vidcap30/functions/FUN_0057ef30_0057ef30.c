/* Module: vidcap30.exe
   Function: FUN_0057ef30
   Address: 0057ef30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057ef30(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_0057b1c0(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0;
  }
  iVar1 = FUN_0057b1e0(param_2);
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0x8007000e;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  return 0;
}


