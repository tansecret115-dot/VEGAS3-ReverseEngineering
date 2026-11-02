/* Module: aifplug.dll
   Function: FUN_5fbd6ed0
   Address: 5fbd6ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd6ed0(int param_1)

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
  iVar1 = FUN_5fbd70f0(param_1);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return iVar1;
}


