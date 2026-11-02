/* Module: wavplug.dll
   Function: FUN_5f38bdc0
   Address: 5f38bdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38bdc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x214) + 1;
  *(int *)(param_1 + 0x214) = iVar1;
  return iVar1;
}


