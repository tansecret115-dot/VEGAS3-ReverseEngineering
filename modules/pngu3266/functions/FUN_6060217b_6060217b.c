/* Module: pngu3266.dll
   Function: FUN_6060217b
   Address: 6060217b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6060217b(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_60629558;
  *(undefined ***)param_1 = &PTR_FUN_60629550;
  CPNTimer::~CPNTimer(param_1);
  return;
}


