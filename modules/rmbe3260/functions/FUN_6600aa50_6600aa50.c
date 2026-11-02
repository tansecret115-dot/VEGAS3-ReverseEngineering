/* Module: rmbe3260.dll
   Function: FUN_6600aa50
   Address: 6600aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6600aa50(undefined4 *param_1)

{
  FUN_660147b0(param_1);
  FUN_6605c7f0(param_1 + 0x14,10);
  FUN_6605b650(param_1 + 0x1c);
  FUN_6605c3e0(param_1 + 0x1f);
  *param_1 = &PTR_FUN_66064660;
  param_1[7] = 0;
  FUN_6605b970(param_1 + 3,s_application_x_pn_realpix_6606c3d8);
  FUN_66019900((byte *)param_1[3],param_1 + 8);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x1b] = 1;
  return param_1;
}


