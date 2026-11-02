/* Module: sftrans1.dll
   Function: FUN_00461690
   Address: 00461690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00461690(void)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0x20);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    uVar2 = FUN_00461650();
    return uVar2;
  }
  return 0;
}


