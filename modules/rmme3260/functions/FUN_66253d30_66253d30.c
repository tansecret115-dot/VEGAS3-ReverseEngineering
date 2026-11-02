/* Module: rmme3260.dll
   Function: FUN_66253d30
   Address: 66253d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66253d30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626ca90;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_66253980((undefined4 *)param_1[1]);
    param_1[1] = 0;
  }
  operator_delete((void *)param_1[4]);
  return;
}


