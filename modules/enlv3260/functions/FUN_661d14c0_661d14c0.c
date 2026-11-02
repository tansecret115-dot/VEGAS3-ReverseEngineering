/* Module: enlv3260.dll
   Function: FUN_661d14c0
   Address: 661d14c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d14c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((HANDLE)*puVar1 != (HANDLE)0x0) {
    param_1 = -1;
    ReleaseSemaphore((HANDLE)*puVar1,1,&param_1);
  }
  return 0;
}


