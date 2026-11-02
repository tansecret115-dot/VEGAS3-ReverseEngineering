/* Module: vegas30.exe
   Function: FUN_005b42d0
   Address: 005b42d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005b42d0(int param_1)

{
  if (*(int *)(param_1 + 0x3f0) != 0) {
    FUN_00422f00();
    FUN_005bad50(*(undefined4 *)(param_1 + 0x3f0));
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x3fc) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x400) = 0xfffffffe;
  }
  return 0;
}


