/* Module: sftrans1.dll
   Function: FUN_0046ac00
   Address: 0046ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0046ac00(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x5b0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x5b0) = 0;
  }
  return 0;
}


