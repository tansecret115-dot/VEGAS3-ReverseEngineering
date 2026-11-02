/* Module: vegas30.exe
   Function: FUN_0057ee60
   Address: 0057ee60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_0057ee60(undefined4 *param_1)

{
  DWORD DVar1;
  
  FUN_005844c0();
  *param_1 = &PTR_FUN_00628efc;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  DVar1 = timeGetTime();
  param_1[0x16] = DVar1;
  return param_1;
}


