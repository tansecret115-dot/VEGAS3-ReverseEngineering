/* Module: mp3plug.dll
   Function: FUN_5f681150
   Address: 5f681150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f681150(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HGLOBAL pvVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)0x0;
  if (DAT_5f74d2f8 != (undefined4 *)0x0) {
    FUN_5f724d50((int)DAT_5f74d2f8);
    FUN_5f724b50((int)DAT_5f74d2f8);
    puVar3 = DAT_5f74d2f8;
    if (DAT_5f74d2f8 != (undefined4 *)0x0) {
      FUN_5f71e4d0(DAT_5f74d2f8);
      pvVar4 = GlobalHandle(puVar3);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar3);
      GlobalFree(pvVar4);
    }
    DAT_5f74d2f8 = (undefined4 *)0x0;
  }
  if (DAT_5f74d2fc != (undefined4 *)0x0) {
    FUN_5f724d50((int)DAT_5f74d2fc);
    FUN_5f724b50((int)DAT_5f74d2fc);
    puVar3 = DAT_5f74d2fc;
    if (DAT_5f74d2fc != (undefined4 *)0x0) {
      FUN_5f71e4d0(DAT_5f74d2fc);
      pvVar4 = GlobalHandle(puVar3);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar3);
      GlobalFree(pvVar4);
    }
    DAT_5f74d2fc = (undefined4 *)0x0;
  }
  if (DAT_5f74d2f4 != (int *)0x0) {
    FUN_5f69e520(DAT_5f74d2f4);
  }
  FUN_5f69fe00();
  if (DAT_5f74d270 != (int *)0x0) {
    iVar1 = *DAT_5f74d270;
    piVar5 = DAT_5f74d270;
    while (iVar1 != 0) {
      piVar2 = (int *)piVar5[4];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar5[4] = 0;
      (*(code *)piVar5[8])(0);
      if (DAT_5f74d260 == 100) {
        piVar5 = piVar5 + 7;
      }
      else {
        piVar5 = piVar5 + 9;
      }
      iVar1 = *piVar5;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_5f74d27c);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_5f74d294);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_5f74d2ac);
  puVar3 = DAT_5f74d2e0;
  while (puVar3 != (undefined4 *)0x0) {
    (*(code *)*puVar3)(puVar3[1]);
    puVar7 = (undefined4 *)puVar3[2];
    pvVar4 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(puVar3);
    GlobalFree(pvVar4);
    puVar3 = puVar7;
  }
  if ((DAT_5f74d278 != puVar7) && (DAT_5f74d2cc != '\0')) {
    if (DAT_5f74d2d8 != puVar7) {
      uVar6 = 0;
      do {
        HeapDestroy((HANDLE)DAT_5f74d2d8[uVar6]);
        uVar6 = uVar6 + 1;
      } while (uVar6 <= DAT_5f74d2d4);
    }
    HeapDestroy(DAT_5f74d278);
    DAT_5f74d2e8 = (undefined4 *)0x0;
    return 1;
  }
  DAT_5f74d2e8 = puVar7;
  return 1;
}


