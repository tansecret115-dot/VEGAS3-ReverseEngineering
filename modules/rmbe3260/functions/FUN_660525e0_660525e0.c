/* Module: rmbe3260.dll
   Function: FUN_660525e0
   Address: 660525e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660525e0(int *param_1)

{
  _mkdir((char *)param_1[1]);
  (**(code **)(*param_1 + 0xc))();
  return;
}


