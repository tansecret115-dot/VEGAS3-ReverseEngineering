/* Module: vegas30.exe
   Function: FUN_005f68c0
   Address: 005f68c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f68c0(int param_1)

{
  FUN_005f6fd0();
  if (*(int *)(param_1 + 0x94) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return;
}


