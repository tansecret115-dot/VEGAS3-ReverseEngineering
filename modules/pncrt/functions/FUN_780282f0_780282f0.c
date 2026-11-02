/* Module: pncrt.dll
   Function: FUN_780282f0
   Address: 780282f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_780282f0(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  _lock(2);
  iVar3 = 0;
  if (0 < DAT_7803fa78) {
    do {
      iVar1 = *(int *)(DAT_78042850 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = malloc(0x38);
        *(void **)(DAT_78042850 + iVar3) = pvVar2;
        if (*(int *)(DAT_78042850 + iVar3) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_78042850 + iVar3) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_78042850 + iVar3) + 0x20));
          puVar4 = *(undefined4 **)(DAT_78042850 + iVar3);
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_780094e0(iVar3,iVar1);
        iVar1 = *(int *)(DAT_78042850 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_78042850 + iVar3 * 4);
          break;
        }
        FUN_78009550(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_7803fa78);
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[4] = 0xffffffff;
  }
  _unlock(2);
  return puVar4;
}


