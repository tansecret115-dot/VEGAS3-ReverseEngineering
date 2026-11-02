/* Module: mcplug.dll
   Function: FUN_00403270
   Address: 00403270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403270(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004032a0(param_1);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
    param_2[1] = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}


