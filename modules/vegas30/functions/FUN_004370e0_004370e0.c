/* Module: vegas30.exe
   Function: FUN_004370e0
   Address: 004370e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004370e0(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  hMem = GlobalAlloc(0x40,0xe14);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x385; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}


