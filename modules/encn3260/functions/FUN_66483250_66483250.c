/* Module: encn3260.dll
   Function: FUN_66483250
   Address: 66483250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66483250(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (*(int *)(param_1 + 0x7e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x14))
              (*(int **)(param_1 + 0x34),*(int *)(param_1 + 0x7e));
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x82);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x82) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


