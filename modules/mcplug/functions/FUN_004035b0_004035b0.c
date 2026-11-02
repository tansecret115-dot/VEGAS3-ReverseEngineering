/* Module: mcplug.dll
   Function: FUN_004035b0
   Address: 004035b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004035b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004032a0(param_1);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}


