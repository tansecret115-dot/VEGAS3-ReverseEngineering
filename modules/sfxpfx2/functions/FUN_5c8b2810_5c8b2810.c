/* Module: sfxpfx2.dll
   Function: FUN_5c8b2810
   Address: 5c8b2810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8b2810(int param_1,int param_2)

{
  FUN_5c8b2860((int)(((longlong)(param_2 - *(int *)(param_1 + 0x28)) *
                     (longlong)*(int *)(param_1 + 0x2c)) /
                    (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))));
  return;
}


