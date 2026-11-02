/* Module: vegas30k.dll
   Function: FUN_01020de0
   Address: 01020de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01020de0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_011db960;
  if ((HIMAGELIST)param_1[4] != (HIMAGELIST)0x0) {
    ImageList_Destroy((HIMAGELIST)param_1[4]);
  }
  if (param_1[3] != 0) {
    _SfList_Destroy_4(param_1[3]);
  }
  return;
}


