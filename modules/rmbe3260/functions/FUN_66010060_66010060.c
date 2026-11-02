/* Module: rmbe3260.dll
   Function: FUN_66010060
   Address: 66010060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66010060(undefined4 *param_1)

{
  FUN_66015920(param_1);
  *param_1 = &PTR_FUN_66064a20;
  FUN_6605b970(param_1 + 3,s_application_x_pn_imagemap_6606c998);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}


