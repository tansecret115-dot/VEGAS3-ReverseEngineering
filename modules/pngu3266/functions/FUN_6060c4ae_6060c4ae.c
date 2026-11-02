/* Module: pngu3266.dll
   Function: FUN_6060c4ae
   Address: 6060c4ae
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6060c4ae(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_QueryInterface_6062b6c0;
  *(undefined ***)param_1 = &PTR_FUN_6062b6b8;
  CPNColor::~CPNColor((CPNColor *)(param_1 + 0x4f));
  CPNColor::~CPNColor((CPNColor *)(param_1 + 0x30));
  CPNTimer::~CPNTimer(param_1);
  return;
}


