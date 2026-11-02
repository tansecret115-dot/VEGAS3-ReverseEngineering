/* Module: vegas30.exe
   Function: FUN_00454f40
   Address: 00454f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454f40(int param_1)

{
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffffff7b;
  FUN_00404660(0,0);
  return;
}


