/* Module: sfppack3.dll
   Function: FUN_5cc33070
   Address: 5cc33070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc33070(int param_1)

{
  if (*(int *)(param_1 + 0x30) < 100) {
    *(undefined4 *)(param_1 + 0x30) = 100;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 5000;
    return 0;
  }
  return 1;
}


