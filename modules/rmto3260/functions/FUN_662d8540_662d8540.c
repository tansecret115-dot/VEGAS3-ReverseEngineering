/* Module: rmto3260.dll
   Function: FUN_662d8540
   Address: 662d8540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662d8540(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_662dc120(puVar1);
    operator_delete(puVar1);
    *param_1 = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    FUN_662f6540((int *)param_1[1]);
    param_1[1] = 0;
  }
  FUN_662d8590((int)param_1);
  return;
}


