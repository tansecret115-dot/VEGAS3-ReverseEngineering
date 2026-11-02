/* Module: sfppack1.dll
   Function: FUN_5cdd4f30
   Address: 5cdd4f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdd4f30(int param_1)

{
  if (*(int *)(param_1 + 0x44) < 100) {
    *(undefined4 *)(param_1 + 0x44) = 100;
    return 0;
  }
  if (10000 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 10000;
    return 0;
  }
  return 1;
}


