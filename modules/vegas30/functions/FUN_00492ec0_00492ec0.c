/* Module: vegas30.exe
   Function: FUN_00492ec0
   Address: 00492ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492ec0(int param_1)

{
  HPEN pHVar1;
  
  *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 1;
  pHVar1 = CreatePen(2,1,0);
  *(HPEN *)(param_1 + 0x204) = pHVar1;
  FUN_00492c20(param_1);
  return;
}


