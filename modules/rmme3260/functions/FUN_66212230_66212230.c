/* Module: rmme3260.dll
   Function: FUN_66212230
   Address: 66212230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66212230(undefined4 *param_1)

{
  FUN_66217eb0(param_1 + 2);
  *param_1 = &PTR_FUN_6626b6c0;
  param_1[1] = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  return param_1;
}


