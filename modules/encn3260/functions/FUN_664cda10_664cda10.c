/* Module: encn3260.dll
   Function: FUN_664cda10
   Address: 664cda10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cda10(int param_1)

{
  int *piVar1;
  
  FUN_664cdc90(param_1);
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    thunk_FUN_664bdbe0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    thunk_FUN_664bdbe0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


