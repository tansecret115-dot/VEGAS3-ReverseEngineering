/* Module: vegas30.exe
   Function: FUN_00548e50
   Address: 00548e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00548e50(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    _SfList_DeleteList_16(*(int *)(param_1 + 0x50),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


