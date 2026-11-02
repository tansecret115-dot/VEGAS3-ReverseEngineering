/* Module: vegas30k.dll
   Function: FUN_011d0a90
   Address: 011d0a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d0a90(int param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  uVar1 = ftol();
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  return 0;
}


