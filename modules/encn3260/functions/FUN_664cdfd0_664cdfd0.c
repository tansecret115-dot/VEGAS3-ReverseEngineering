/* Module: encn3260.dll
   Function: FUN_664cdfd0
   Address: 664cdfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cdfd0(int *param_1)

{
  int *piVar1;
  
  FUN_664ce090(param_1);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    thunk_FUN_664bdbe0(piVar1);
    operator_delete(piVar1);
    param_1[2] = 0;
  }
  return;
}


