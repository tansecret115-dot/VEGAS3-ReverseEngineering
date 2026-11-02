/* Module: sctplug.dll
   Function: FUN_00401ac0
   Address: 00401ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401ac0(int param_1)

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
  iVar1 = FUN_00401e10(param_1);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return iVar1;
}


