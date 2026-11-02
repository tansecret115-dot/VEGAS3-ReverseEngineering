/* Module: pngu3266.dll
   Function: FUN_6060f98b
   Address: 6060f98b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6060f98b(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_6062b728;
  *(undefined ***)param_1 = &PTR_FUN_6062b720;
  CPNTimer::~CPNTimer(param_1);
  return;
}


