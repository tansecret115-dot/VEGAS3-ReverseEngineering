/* Module: vegas30.exe
   Function: FUN_0058deb0
   Address: 0058deb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058deb0(int param_1)

{
  int iVar1;
  
  InterlockedIncrement((LONG *)(param_1 + 8));
  iVar1 = *(LONG *)(param_1 + 8);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}


