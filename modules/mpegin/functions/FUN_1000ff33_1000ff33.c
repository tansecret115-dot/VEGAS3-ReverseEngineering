/* Module: mpegin.dll
   Function: FUN_1000ff33
   Address: 1000ff33
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000ff33(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1001da94 == 3) {
    iVar1 = 0;
    if (0 < DAT_1001da84) {
      puVar2 = (undefined4 *)((int)DAT_1001da88 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1001da90,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1001da84);
    }
    HeapFree(DAT_1001da90,0,DAT_1001da88);
  }
  else if (DAT_1001da94 == 2) {
    ppuVar3 = &PTR_LOOP_10019318;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10019318);
  }
  HeapDestroy(DAT_1001da90);
  return;
}


