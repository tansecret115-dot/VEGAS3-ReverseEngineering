/* Module: rv203260.dll
   Function: FUN_638a8f00
   Address: 638a8f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_638a8f00(int param_1)

{
  if (*(int *)(param_1 + 0xc6) == 0x59555632) {
    FUN_638a8870((void *)(param_1 + 0x32),&stack0x00000004);
    return;
  }
  FUN_638a8850((void *)(param_1 + 0x32),&stack0x00000004);
  return;
}


