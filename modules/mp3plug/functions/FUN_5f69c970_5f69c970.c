/* Module: mp3plug.dll
   Function: FUN_5f69c970
   Address: 5f69c970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f69c970(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0xdc);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_5f69c860(puVar1);
    return uVar2;
  }
  return 0;
}


