/* Module: vidcap30.exe
   Function: FUN_004ac2e0
   Address: 004ac2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ac2e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004ac330(param_2);
  return *(int *)(param_1 + 0x54) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))) /
              (longlong)*(int *)(param_1 + 0x58));
}


