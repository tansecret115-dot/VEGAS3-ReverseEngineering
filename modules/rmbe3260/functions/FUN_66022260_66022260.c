/* Module: rmbe3260.dll
   Function: FUN_66022260
   Address: 66022260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66022260(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66066e98;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_6605cda0(param_1 + 0xf);
  FUN_6605cda0(param_1 + 0x13);
  FUN_6605cda0(param_1 + 0x17);
  FUN_6605cda0(param_1 + 0x1b);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_66066e60;
  param_1[4] = &PTR_LAB_66066e18;
  FUN_660130d0(param_1 + 0xc);
  puVar1 = operator_new(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_66010b40(puVar1);
    param_1[0xe] = puVar1;
    return param_1;
  }
  param_1[0xe] = 0;
  return param_1;
}


