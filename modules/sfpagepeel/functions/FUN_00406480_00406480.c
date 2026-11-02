/* Module: sfpagepeel.dll
   Function: FUN_00406480
   Address: 00406480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406480(int param_1,undefined4 param_2,undefined4 param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0xc);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  puVar1[2] = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 **)(param_1 + 0x80) = puVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return 0;
}


