/* Module: vidcap30.exe
   Function: FUN_0046bb20
   Address: 0046bb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046bb20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar2 = 0;
  iVar1 = FUN_0057af30(param_1 + 0x188,0x12);
  if (iVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return uVar2;
}


