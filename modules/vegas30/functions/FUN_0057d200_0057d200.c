/* Module: vegas30.exe
   Function: FUN_0057d200
   Address: 0057d200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057d200(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0062748c;
  if (param_1[0x56] != 0) {
    _SfList_Destroy_4(param_1[0x56]);
    param_1[0x56] = 0;
  }
  FUN_0057c700();
  return;
}


