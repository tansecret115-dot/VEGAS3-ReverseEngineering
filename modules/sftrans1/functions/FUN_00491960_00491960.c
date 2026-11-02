/* Module: sftrans1.dll
   Function: FUN_00491960
   Address: 00491960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00491960(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00563a68;
  if ((HIMAGELIST)param_1[0xe] != (HIMAGELIST)0x0) {
    ImageList_Destroy((HIMAGELIST)param_1[0xe]);
  }
  *param_1 = &PTR_LAB_005632f0;
  if (param_1[1] != 0) {
    FUN_00486040();
  }
  return;
}


