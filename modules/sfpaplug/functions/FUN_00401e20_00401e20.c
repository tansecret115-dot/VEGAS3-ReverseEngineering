/* Module: sfpaplug.dll
   Function: FUN_00401e20
   Address: 00401e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401e20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return -0x7fff0001;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return -0x7fff0001;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  iVar1 = FUN_00402040(param_1);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return iVar1;
}


