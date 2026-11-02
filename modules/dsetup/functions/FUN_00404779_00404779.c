/* Module: dsetup.dll
   Function: FUN_00404779
   Address: 00404779
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00404779(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_0040b038 == DAT_0040b028) {
    pvVar2 = HeapReAlloc(DAT_0040b044,0,DAT_0040b03c,(DAT_0040b028 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_0040b028 = DAT_0040b028 + 0x10;
    DAT_0040b03c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_0040b03c + DAT_0040b038 * 0x14);
  pvVar2 = HeapAlloc(DAT_0040b044,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_0040b038 = DAT_0040b038 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0040b044,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


