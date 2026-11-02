/* Module: enlv3260.dll
   Function: FUN_661d13a0
   Address: 661d13a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d13a0(int param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x20);
  if ((HANDLE)*puVar1 == (HANDLE)0x0) {
    return -0x7ffbfff9;
  }
  param_1 = -1;
  BVar2 = ReleaseSemaphore((HANDLE)*puVar1,1,&param_1);
  return (-(uint)(BVar2 != 0) & 0x7fffbffb) + 0x80004005;
}


