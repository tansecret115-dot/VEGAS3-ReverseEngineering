/* Module: rmto3260.dll
   Function: FUN_662f33d0
   Address: 662f33d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f33d0(int *param_1)

{
  _mkdir((char *)param_1[1]);
  (**(code **)(*param_1 + 0xc))();
  return;
}


