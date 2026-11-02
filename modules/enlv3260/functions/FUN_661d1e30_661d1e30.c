/* Module: enlv3260.dll
   Function: FUN_661d1e30
   Address: 661d1e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_661d1e30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_661d51a8;
  param_1[1] = &PTR_LAB_661d5188;
  param_1[2] = &PTR_LAB_661d5178;
  param_1[3] = &PTR_LAB_661d5168;
  param_1[4] = &PTR_LAB_661d5158;
  FUN_661d2b60(param_1 + 9);
  FUN_661d2b60(param_1 + 0xc);
  FUN_661d2b60(param_1 + 0xf);
  FUN_661d2b60(param_1 + 0x12);
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *param_1 = &PTR_FUN_661d5130;
  param_1[1] = &PTR_LAB_661d5110;
  param_1[2] = &PTR_LAB_661d5100;
  param_1[3] = &PTR_LAB_661d50f0;
  param_1[4] = &PTR_LAB_661d50e0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  FUN_661d2e40(param_1 + 9,&DAT_661d637c);
  FUN_661d2e40(param_1 + 0xc,&DAT_661d637c);
  FUN_661d2e40(param_1 + 0xf,&DAT_661d637c);
  FUN_661d2e40(param_1 + 0x12,&DAT_661d637c);
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  return param_1;
}


