/* Module: pngu3266.dll
   Function: FUN_60602357
   Address: 60602357
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60602357(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_60629598;
  *(undefined ***)param_1 = &PTR_FUN_60629590;
  CPNTimer::~CPNTimer(param_1);
  return;
}


