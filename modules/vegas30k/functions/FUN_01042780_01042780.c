/* Module: vegas30k.dll
   Function: FUN_01042780
   Address: 01042780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01042780(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011dd64c;
  if (param_1[1] != 0) {
    FUN_01042770(param_1 + 1);
    _SfList_Destroy_4(param_1[1]);
  }
  return;
}


