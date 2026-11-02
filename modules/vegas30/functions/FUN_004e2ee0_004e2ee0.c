/* Module: vegas30.exe
   Function: FUN_004e2ee0
   Address: 004e2ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e2ee0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xd94) < 2) {
    return 0;
  }
  iVar1 = ((-(uint)(param_2 != 0) & 2) - 1) + *(int *)(param_1 + 0xd98);
  if (2 < iVar1) {
    *(undefined4 *)(param_1 + 0xd98) = 0;
    FUN_004df2c0(param_1);
    return 1;
  }
  if (iVar1 < 0) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0xd98) = iVar1;
  FUN_004df2c0(param_1);
  return 1;
}


