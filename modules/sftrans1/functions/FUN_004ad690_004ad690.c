/* Module: sftrans1.dll
   Function: FUN_004ad690
   Address: 004ad690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004ad690(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1d8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  return 0;
}


