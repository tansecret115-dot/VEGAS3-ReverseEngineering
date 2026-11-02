/* Module: vegas30.exe
   Function: FUN_005c6ad0
   Address: 005c6ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c6ad0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x54) == 0) {
    return 0;
  }
  iVar1 = FUN_005c68e0(param_2);
  if (1 < iVar1) {
    return 0;
  }
  if ((0 < iVar1) && (*(int *)(param_2 + 0x50) == 0)) {
    return 0;
  }
  FUN_005b83b0(param_1,1);
  _SfList_Destroy_4(*(undefined4 *)(param_2 + 0x54));
  *(undefined4 *)(param_2 + 0x54) = 0;
  FUN_005b84d0(param_1,1);
  return 0;
}


