/* Module: rmbe3260.dll
   Function: FUN_6600fda0
   Address: 6600fda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600fda0(CPNTimer *param_1)

{
  *(undefined ***)(param_1 + -4) = &PTR_LAB_660649f8;
  *(undefined ***)param_1 = &PTR_FUN_660649f0;
  FUN_6600ff50((int)(param_1 + -4));
  FUN_6605b770((int *)(param_1 + 0x3e));
  CPNTimer::~CPNTimer(param_1);
  return;
}


