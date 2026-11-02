/* Module: vidcap30.exe
   Function: FUN_004a00e0
   Address: 004a00e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004a00e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005998c8;
  if ((HIMAGELIST)param_1[4] != (HIMAGELIST)0x0) {
    ImageList_Destroy((HIMAGELIST)param_1[4]);
  }
  if (param_1[3] != 0) {
    _SfList_Destroy_4(param_1[3]);
  }
  return;
}


