/* Module: encn3260.dll
   Function: FUN_66482770
   Address: 66482770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66482770(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return *(undefined4 *)(param_1 + 0x1c);
}


