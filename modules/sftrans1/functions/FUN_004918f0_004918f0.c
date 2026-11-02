/* Module: sftrans1.dll
   Function: FUN_004918f0
   Address: 004918f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004918f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < **(int **)(param_1 + 0x28)) {
    do {
      piVar1 = (int *)FUN_00485e60(iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < **(int **)(param_1 + 0x28));
  }
  return 1;
}


