/* Module: vegas30k.dll
   Function: FUN_01110a60
   Address: 01110a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01110a60(int param_1,int param_2)

{
  FUN_01110ab0((int)(((longlong)(param_2 - *(int *)(param_1 + 0x54)) *
                     (longlong)*(int *)(param_1 + 0x58)) /
                    (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))));
  return;
}


