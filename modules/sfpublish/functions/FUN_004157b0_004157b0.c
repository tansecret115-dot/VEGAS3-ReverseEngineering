/* Module: sfpublish.dll
   Function: FUN_004157b0
   Address: 004157b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004157b0(undefined4 *param_1)

{
  if (param_1[0xc] != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    FreeLibrary((HMODULE)param_1[0xd]);
    return 0;
  }
  param_1[0xc] = 0;
  return 0;
}


