/* Module: vegas30.exe
   Function: FUN_00594160
   Address: 00594160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00594160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  hMem = GlobalAlloc(0x40,0x28);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    DAT_0065aba0 = FUN_0058f810(param_2);
    if (DAT_0065aba0 != 0) {
      FUN_00593b90(param_3);
      if (*(int *)(DAT_0065a06c + 0x6c) == 0) {
        FUN_00598590(param_1,param_3);
      }
    }
    return 0;
  }
  DAT_0065aba0 = 0;
  return 0;
}


