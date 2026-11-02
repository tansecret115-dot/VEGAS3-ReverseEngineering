/* Module: mpegin.dll
   Function: FUN_1000dbc0
   Address: 1000dbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000dbc0(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(**(int **)(param_1 + 0x12e54) + 0x10 + param_2 * 0x18); -1 < iVar1;
      iVar1 = *(int *)(**(int **)(param_1 + 0x12e54) + 0x10 + iVar1 * 0x18)) {
  }
  return;
}


