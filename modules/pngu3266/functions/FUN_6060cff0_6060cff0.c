/* Module: pngu3266.dll
   Function: FUN_6060cff0
   Address: 6060cff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6060cff0(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_6062b6f0;
  *(undefined ***)param_1 = &PTR_FUN_6062b6e8;
  CPNTimer::~CPNTimer(param_1);
  return;
}


