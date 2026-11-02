/* Module: sfpagepeel.dll
   Function: FUN_0041c1e0
   Address: 0041c1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c1e0(int param_1,int param_2)

{
  FUN_0041c230((int)(((longlong)(param_2 - *(int *)(param_1 + 0x54)) *
                     (longlong)*(int *)(param_1 + 0x58)) /
                    (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))));
  return;
}


