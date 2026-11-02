/* Module: sftrans1.dll
   Function: FUN_00434760
   Address: 00434760
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00434760(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  undefined4 *puVar4;
  HGLOBAL pvVar5;
  
  LVar3 = InterlockedDecrement(param_1 + 1);
  if ((LVar3 == 0) && (param_1 != (undefined4 *)0x0)) {
    param_1[1] = 1;
    *param_1 = &PTR_FUN_005567c8;
    iVar1 = param_1[0x3b];
    while (iVar1 != 0) {
      iVar1 = *(int *)(param_1[0x3b] + 4);
      (**(code **)(param_1[4] + 0x50))(param_1[0x3b]);
      param_1[0x3b] = iVar1;
    }
    FUN_00413f40();
    FUN_00412b80();
    InterlockedDecrement(&DAT_00577264);
    piVar2 = (int *)param_1[0x1c8];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (param_1 + 4 == (int *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = param_1 + 0x52;
    }
    *puVar4 = &PTR_LAB_0055679c;
    puVar4[1] = &PTR_LAB_00556788;
    puVar4[3] = &PTR_LAB_00556770;
    puVar4[4] = &PTR_LAB_0055674c;
    puVar4[2] = &PTR_LAB_00556724;
    DeleteCriticalSection((LPCRITICAL_SECTION)(puVar4 + 0xc5));
    FUN_004144d0(puVar4 + 2,0);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
    FUN_0045bef0();
    pvVar5 = GlobalHandle(param_1);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(param_1);
    GlobalFree(pvVar5);
  }
  return LVar3;
}


