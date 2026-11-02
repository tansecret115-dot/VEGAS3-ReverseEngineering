/* Module: vegas30.exe
   Function: FUN_0056f160
   Address: 0056f160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0056f160(int param_1)

{
  if (*(int *)(param_1 + 0x740) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x740));
    *(undefined4 *)(param_1 + 0x740) = 0;
  }
  return;
}


