/* Module: mcplugrw.dll
   Function: FUN_00407b80
   Address: 00407b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407b80(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1e0) = 1;
  *(undefined4 *)(param_2 + 0x20c) = 0;
  *(undefined4 *)(param_2 + 0x200) = 1;
  if (*(int *)(param_2 + 0x244) != 0) {
    *(undefined4 *)(param_2 + 0x210) = 1;
  }
  return;
}


