/* Module: pngu3266.dll
   Function: FUN_6061754a
   Address: 6061754a
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061754a(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_6062bd00;
  *(undefined ***)param_1 = &PTR_FUN_6062bcf8;
  CPNTimer::~CPNTimer(param_1);
  return;
}


