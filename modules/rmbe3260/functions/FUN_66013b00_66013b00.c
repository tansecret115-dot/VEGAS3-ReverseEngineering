/* Module: rmbe3260.dll
   Function: FUN_66013b00
   Address: 66013b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66013b00(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66064ed0;
  FUN_6605cda0(param_1 + 5);
  FUN_6605cda0(param_1 + 9);
  FUN_6605c7f0(param_1 + 0xd,10);
  FUN_66010b40(param_1 + 0x14);
  param_1[0x22] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *param_1 = &PTR_FUN_66064ea0;
  param_1[4] = &PTR_LAB_66064e88;
  return param_1;
}


