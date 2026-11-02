/* Module: rmme3260.dll
   Function: FUN_66253f70
   Address: 66253f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66253f70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_6626b730;
  param_1[1] = &PTR_LAB_6626cb28;
  FUN_66252c30(param_1 + 2);
  param_1[2] = &PTR_FUN_6626cb20;
  FUN_66252eb0(param_1 + 6);
  param_1[6] = &PTR_FUN_6626cb1c;
  FUN_66252eb0(param_1 + 10);
  param_1[10] = &PTR_FUN_6626cb1c;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_6626cae0;
  param_1[1] = &PTR_LAB_6626cac0;
  return param_1;
}


