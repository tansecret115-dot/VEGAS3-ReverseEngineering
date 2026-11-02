/* Module: vegas30.exe
   Function: FUN_0043d4b0
   Address: 0043d4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0043d4b0(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0043d330(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),param_1);
    fclose(*(FILE **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}


