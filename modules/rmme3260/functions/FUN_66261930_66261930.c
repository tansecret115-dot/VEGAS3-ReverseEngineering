/* Module: rmme3260.dll
   Function: FUN_66261930
   Address: 66261930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66261930(int param_1)

{
  int *piVar1;
  
  FUN_66261cd0(param_1);
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    thunk_FUN_66252710(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    thunk_FUN_66252710(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


