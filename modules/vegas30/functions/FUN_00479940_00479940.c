/* Module: vegas30.exe
   Function: FUN_00479940
   Address: 00479940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479940(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 0x20);
  if (iVar1 != 0) {
    _SfList_Destroy_4(iVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x20) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x20) = 0;
  return;
}


