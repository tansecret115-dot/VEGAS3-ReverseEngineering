/* Module: rmme3260.dll
   Function: FUN_66202780
   Address: 66202780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66202780(undefined4 *param_1)

{
  int *piVar1;
  
  param_1[1] = &PTR_LAB_6626a578;
  param_1[2] = &PTR_LAB_6626a4a0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_6626a538;
  param_1[1] = &PTR_LAB_6626a518;
  param_1[2] = &PTR_LAB_6626a500;
  piVar1 = FUN_66209270();
  param_1[5] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(piVar1[0x36] + 0x20))(piVar1 + 0x36);
  }
  return param_1;
}


