/* Module: pngu3266.dll
   Function: FUN_60602270
   Address: 60602270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60602270(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_60629578;
  *(undefined ***)param_1 = &PTR_FUN_60629570;
  *(undefined4 *)(param_1 + 0x28) = 0;
  CPNTimer::~CPNTimer(param_1);
  return;
}


