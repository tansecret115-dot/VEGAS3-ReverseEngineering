/* Module: vidcap30.exe
   Function: FUN_0046bac0
   Address: 0046bac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046bac0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar2 = 0;
  FUN_0057aea0(&DAT_005a35a8);
  FUN_0057af70(&DAT_005a2b58);
  iVar1 = FUN_0057af30(param_1 + 0x19c,0x20);
  if (iVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return uVar2;
}


