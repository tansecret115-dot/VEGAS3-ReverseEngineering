/* Module: sftrans1.dll
   Function: FUN_004bd370
   Address: 004bd370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bd370(int param_1,int param_2)

{
  FUN_004bd3c0((int)(((longlong)(param_2 - *(int *)(param_1 + 0x54)) *
                     (longlong)*(int *)(param_1 + 0x58)) /
                    (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))));
  return;
}


