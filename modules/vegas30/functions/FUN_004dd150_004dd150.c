/* Module: vegas30.exe
   Function: FUN_004dd150
   Address: 004dd150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dd150(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0xd50) != 0)) {
    FUN_0055bac0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0xd50),1);
  }
  return;
}


