/* Module: rmme3260.dll
   Function: FUN_66253390
   Address: 66253390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66253390(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626ca20;
  param_1[1] = &PTR_LAB_6626c9e0;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    FUN_66253980((undefined4 *)param_1[3]);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  FUN_66252ed0(param_1 + 10);
  FUN_66252c50(param_1 + 6);
  return;
}


