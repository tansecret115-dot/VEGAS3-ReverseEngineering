/* Module: encn3260.dll
   Function: FUN_6648eca0
   Address: 6648eca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648eca0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x95);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x95) = 0;
  }
  FUN_6648e330(param_1);
  return;
}


