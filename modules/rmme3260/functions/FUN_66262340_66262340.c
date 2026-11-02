/* Module: rmme3260.dll
   Function: FUN_66262340
   Address: 66262340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66262340(int *param_1)

{
  int *piVar1;
  
  FUN_66262380(param_1);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    thunk_FUN_66252710(piVar1);
    operator_delete(piVar1);
    param_1[2] = 0;
  }
  return;
}


