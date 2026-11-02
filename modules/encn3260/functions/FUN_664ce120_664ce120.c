/* Module: encn3260.dll
   Function: FUN_664ce120
   Address: 664ce120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ce120(undefined4 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    FUN_664cf5a0((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


