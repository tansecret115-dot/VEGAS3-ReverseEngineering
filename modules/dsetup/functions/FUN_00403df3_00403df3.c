/* Module: dsetup.dll
   Function: FUN_00403df3
   Address: 00403df3
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403df3(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_0040b048 == 3) {
    iVar1 = 0;
    if (0 < DAT_0040b038) {
      puVar2 = (undefined4 *)((int)DAT_0040b03c + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_0040b044,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_0040b038);
    }
    HeapFree(DAT_0040b044,0,DAT_0040b03c);
  }
  else if (DAT_0040b048 == 2) {
    ppuVar3 = &PTR_LOOP_00408330;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_00408330);
  }
  HeapDestroy(DAT_0040b044);
  return;
}


