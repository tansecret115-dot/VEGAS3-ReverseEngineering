/* Module: aviplug.dll
   Function: FUN_5f941990
   Address: 5f941990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941990(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 7);
  if (LVar1 == 0) {
    SetEvent((HANDLE)param_1[8]);
    FUN_5f98fe00((int *)param_1[10],param_1);
  }
  return;
}


