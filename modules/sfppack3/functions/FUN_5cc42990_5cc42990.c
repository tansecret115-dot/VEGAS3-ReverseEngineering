/* Module: sfppack3.dll
   Function: FUN_5cc42990
   Address: 5cc42990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc42990(int param_1)

{
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    return 0;
  }
  if (4 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 4;
    return 0;
  }
  return 1;
}


