/* Module: mcplug.dll
   Function: FUN_004172e0
   Address: 004172e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004172e0(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0xdc);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_004171d0(puVar1);
    return uVar2;
  }
  return 0;
}


