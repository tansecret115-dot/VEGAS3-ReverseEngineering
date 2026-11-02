/* Module: mcplug.dll
   Function: FUN_00401150
   Address: 00401150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401150(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *pMem;
  HGLOBAL pvVar4;
  int *piVar5;
  uint uVar6;
  
  if (DAT_00487a6c != (int *)0x0) {
    FUN_00419740(DAT_00487a6c);
  }
  puVar3 = DAT_00487a70;
  if (DAT_00487a70 != (undefined4 *)0x0) {
    if (DAT_00487a70 != (undefined4 *)0x0) {
      FUN_00467800(DAT_00487a70);
      pvVar4 = GlobalHandle(puVar3);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar3);
      GlobalFree(pvVar4);
    }
    DAT_00487a70 = (undefined4 *)0x0;
  }
  puVar3 = DAT_00487a74;
  if (DAT_00487a74 != (undefined4 *)0x0) {
    FUN_00467800(DAT_00487a74);
    pvVar4 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(puVar3);
    GlobalFree(pvVar4);
    DAT_00487a74 = (undefined4 *)0x0;
  }
  FUN_0041b020();
  if (DAT_004879f0 != (int *)0x0) {
    iVar1 = *DAT_004879f0;
    piVar5 = DAT_004879f0;
    while (iVar1 != 0) {
      piVar2 = (int *)piVar5[4];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar5[4] = 0;
      (*(code *)piVar5[8])(0);
      if (DAT_004879e0 == 100) {
        piVar5 = piVar5 + 7;
      }
      else {
        piVar5 = piVar5 + 9;
      }
      iVar1 = *piVar5;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004879fc);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00487a14);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00487a2c);
  puVar3 = DAT_00487a60;
  while (pMem = puVar3, pMem != (undefined4 *)0x0) {
    (*(code *)*pMem)(pMem[1]);
    puVar3 = (undefined4 *)pMem[2];
    if (pMem != (undefined4 *)0x0) {
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
    }
  }
  if ((DAT_004879f8 != (HANDLE)0x0) && (DAT_00487a4c != '\0')) {
    if (DAT_00487a58 != 0) {
      uVar6 = 0;
      do {
        HeapDestroy(*(HANDLE *)(DAT_00487a58 + uVar6 * 4));
        uVar6 = uVar6 + 1;
      } while (uVar6 <= DAT_00487a54);
    }
    HeapDestroy(DAT_004879f8);
  }
  DAT_00487a68 = 0;
  return 1;
}


