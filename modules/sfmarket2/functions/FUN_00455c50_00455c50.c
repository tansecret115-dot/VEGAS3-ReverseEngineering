/* Module: sfmarket2.dll
   Function: FUN_00455c50
   Address: 00455c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455c50(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}


