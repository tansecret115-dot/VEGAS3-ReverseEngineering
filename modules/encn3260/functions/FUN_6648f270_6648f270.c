/* Module: encn3260.dll
   Function: FUN_6648f270
   Address: 6648f270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648f270(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
              (*(int **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return 0;
}


