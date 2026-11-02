/* Module: encn3260.dll
   Function: FUN_664d1160
   Address: 664d1160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664d1160(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x51);
  *param_1 = pvVar1;
  time((time_t *)0x0);
  FUN_664d1190((int)param_1);
  return param_1;
}


