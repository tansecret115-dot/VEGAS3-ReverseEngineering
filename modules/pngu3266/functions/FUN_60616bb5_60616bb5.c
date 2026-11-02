/* Module: pngu3266.dll
   Function: FUN_60616bb5
   Address: 60616bb5
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60616bb5(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_6062bce0;
  *(undefined ***)param_1 = &PTR_FUN_6062bcd8;
  CPNTimer::~CPNTimer(param_1);
  return;
}


