/* Module: rmbe3260.dll
   Function: FUN_6600e6c0
   Address: 6600e6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6600e6c0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66064980;
  param_1[5] = &PTR_LAB_66064910;
  FUN_6605b7e0(param_1 + 0xe,s_application_x_pn_realpix_6606c3d8);
  FUN_6605b650(param_1 + 0x11);
  FUN_6605b650(param_1 + 0x14);
  FUN_6605b650(param_1 + 0x17);
  FUN_6605b650(param_1 + 0x1a);
  *param_1 = &PTR_FUN_660648e8;
  param_1[4] = &PTR_LAB_660648d8;
  param_1[5] = &PTR_LAB_66064868;
  param_1[6] = 1;
  param_1[8] = 0x140;
  param_1[9] = 0xf0;
  param_1[10] = 100000;
  param_1[0xb] = 12000;
  param_1[0xc] = 5000;
  param_1[0xd] = 0xffffffff;
  FUN_6605b970(param_1 + 0x11,&DAT_66075004);
  FUN_6605b970(param_1 + 0x14,&DAT_66075004);
  FUN_6605b970(param_1 + 0x17,&DAT_66075004);
  FUN_6605b970(param_1 + 0x1a,&DAT_66075004);
  param_1[7] = 0;
  return param_1;
}


