/* Module: sfmarket2.dll
   Function: FUN_0048f750
   Address: 0048f750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048f750(int param_1,int param_2,int param_3,int *param_4)

{
  FUN_00485020(param_3,0,(int)param_4,0,*(int *)(param_1 + 0x109),*(uint *)(param_1 + 0x55));
  FUN_0048f6f0(param_4,*(int *)(param_1 + 0x109),*(int *)(param_1 + 0x55),
               *(int *)(param_2 + 0x1c) << 3);
  return;
}


