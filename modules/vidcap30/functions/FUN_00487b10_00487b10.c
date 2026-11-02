/* Module: vidcap30.exe
   Function: FUN_00487b10
   Address: 00487b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00487b10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0059509c;
  if (param_1[1] != 0) {
    FUN_00487b00(param_1 + 1);
    _SfList_Destroy_4(param_1[1]);
  }
  return;
}


