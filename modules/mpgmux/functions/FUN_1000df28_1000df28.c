/* Module: mpgmux.dll
   Function: FUN_1000df28
   Address: 1000df28
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_1000df28(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1001c674 == DAT_1001c664) {
    pvVar2 = HeapReAlloc(DAT_1001c680,0,DAT_1001c678,(DAT_1001c664 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1001c664 = DAT_1001c664 + 0x10;
    DAT_1001c678 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1001c678 + DAT_1001c674 * 0x14);
  pvVar2 = HeapAlloc(DAT_1001c680,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1001c674 = DAT_1001c674 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1001c680,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


