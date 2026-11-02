/* Module: vegas30.exe
   Function: FUN_00579c10
   Address: 00579c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00579c10(void)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0x1f0);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    uVar2 = FUN_00579bc0();
    return uVar2;
  }
  return 0;
}


