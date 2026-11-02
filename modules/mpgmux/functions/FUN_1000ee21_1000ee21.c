/* Module: mpgmux.dll
   Function: FUN_1000ee21
   Address: 1000ee21
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_1000ee21(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_1000e78d(2);
  iVar3 = 0;
  if (0 < DAT_1001c660) {
    do {
      iVar1 = *(int *)(DAT_1001b644 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_1001b644) = pvVar2;
        if (*(int *)(iVar3 + DAT_1001b644) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1001b644) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1001b644) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_1001b644);
LAB_1000eec5:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_1000eada(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1001b644 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_1001b644 + iVar3 * 4);
          goto LAB_1000eec5;
        }
        FUN_1000eb2c(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1001c660);
  }
  FUN_1000e7ee(2);
  return puVar4;
}


