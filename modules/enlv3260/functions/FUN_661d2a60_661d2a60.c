/* Module: enlv3260.dll
   Function: FUN_661d2a60
   Address: 661d2a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_661d2a60(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  FUN_661d2970(param_1);
  FUN_661d2950(param_1);
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = FUN_661d34b0((int *)(param_1 + 4));
  }
  FUN_661d2960(param_1);
  return iVar1;
}


