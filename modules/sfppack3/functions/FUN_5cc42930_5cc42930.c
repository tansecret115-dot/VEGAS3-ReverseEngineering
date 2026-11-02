/* Module: sfppack3.dll
   Function: FUN_5cc42930
   Address: 5cc42930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc42930(int param_1)

{
  if (*(int *)(param_1 + 0x30) < 1) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 100;
    return 0;
  }
  return 1;
}


