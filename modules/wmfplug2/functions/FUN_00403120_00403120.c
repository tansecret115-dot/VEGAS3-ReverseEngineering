/* Module: wmfplug2.dll
   Function: FUN_00403120
   Address: 00403120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403120(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00402fc0(param_1);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}


