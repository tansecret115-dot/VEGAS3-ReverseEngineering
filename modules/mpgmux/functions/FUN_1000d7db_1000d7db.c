/* Module: mpgmux.dll
   Function: FUN_1000d7db
   Address: 1000d7db
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000d7db(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1001c684 == 3) {
    iVar1 = 0;
    if (0 < DAT_1001c674) {
      puVar2 = (undefined4 *)((int)DAT_1001c678 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1001c680,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1001c674);
    }
    HeapFree(DAT_1001c680,0,DAT_1001c678);
  }
  else if (DAT_1001c684 == 2) {
    ppuVar3 = &PTR_LOOP_10017ae0;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10017ae0);
  }
  HeapDestroy(DAT_1001c680);
  return;
}


