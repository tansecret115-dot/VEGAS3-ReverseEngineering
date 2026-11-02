/* Module: rmbe3260.dll
   Function: FUN_66026ea0
   Address: 66026ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66026ea0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 5;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66067490;
  *puVar1 = &PTR_LAB_66067448;
  param_1[6] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 6;
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_66067420;
  param_1[4] = &PTR_LAB_66067410;
  *puVar1 = &PTR_LAB_660673c8;
  FUN_66027210((int)puVar1);
  FUN_660271b0((int)puVar1,0);
  FUN_660271b0((int)puVar1,1);
  return param_1;
}


