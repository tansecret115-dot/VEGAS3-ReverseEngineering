/* Module: rmbe3260.dll
   Function: FUN_660125a0
   Address: 660125a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_660125a0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66064c68;
  param_1[5] = &PTR_LAB_66064c48;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_6605b650(param_1 + 8);
  FUN_6605b650(param_1 + 0xb);
  FUN_6605b650(param_1 + 0xe);
  param_1[0x11] = 0x1ba0;
  FUN_6605b650(param_1 + 0x12);
  FUN_6605b650(param_1 + 0x15);
  FUN_6605b650(param_1 + 0x18);
  FUN_6605b650(param_1 + 0x1b);
  FUN_6605b650(param_1 + 0x1e);
  FUN_6605b650(param_1 + 0x21);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 1;
  FUN_6605b650(param_1 + 0x27);
  *param_1 = &PTR_FUN_66064c20;
  param_1[4] = &PTR_LAB_66064bb8;
  param_1[5] = &PTR_LAB_66064b98;
  FUN_6605b970(param_1 + 0x27,s_x_real_rdt_udp_6606c2ac);
  return param_1;
}


