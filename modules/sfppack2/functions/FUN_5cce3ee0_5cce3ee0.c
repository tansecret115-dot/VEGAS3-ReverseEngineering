/* Module: sfppack2.dll
   Function: FUN_5cce3ee0
   Address: 5cce3ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cce3ee0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  log2((float10)param_1 * (float10)_DAT_5cd514f0);
  uVar1 = ftol();
  return uVar1;
}


