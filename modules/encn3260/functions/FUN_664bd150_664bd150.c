/* Module: encn3260.dll
   Function: FUN_664bd150
   Address: 664bd150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664bd150(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return *(undefined4 *)(param_1 + 0x10);
}


