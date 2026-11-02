/* Module: rmbe3260.dll
   Function: FUN_6603d780
   Address: 6603d780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6603d780(undefined4 *param_1)

{
  FUN_6605b650(param_1 + 1);
  FUN_6605b650(param_1 + 4);
  FUN_6605b650(param_1 + 7);
  FUN_6605b650(param_1 + 10);
  *param_1 = &PTR_FUN_66067fb0;
  FUN_6603d810((int)param_1);
  return param_1;
}


