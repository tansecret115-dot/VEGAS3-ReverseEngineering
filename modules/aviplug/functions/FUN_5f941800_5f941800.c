/* Module: aviplug.dll
   Function: FUN_5f941800
   Address: 5f941800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941800(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 7);
  if (LVar1 == 0) {
    FUN_5f98fe00((int *)param_1[10],param_1);
  }
  return;
}


