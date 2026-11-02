/* Module: sftrans1.dll
   Function: FUN_00435730
   Address: 00435730
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00435730(undefined4 *param_1)

{
  int *piVar1;
  LONG LVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  
  LVar2 = InterlockedDecrement(param_1 + 1);
  if ((LVar2 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_00557204;
    param_1[1] = 1;
    FUN_0047c350();
    InterlockedDecrement(&DAT_00577264);
    piVar1 = (int *)param_1[0x246];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (param_1 == (undefined4 *)0xfffffff0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = param_1 + 0x52;
    }
    *puVar4 = &PTR_LAB_005571d8;
    puVar4[1] = &PTR_LAB_005571c4;
    puVar4[2] = &PTR_LAB_0055719c;
    puVar4[3] = &PTR_LAB_00557184;
    puVar4[4] = &PTR_LAB_00557160;
    DeleteCriticalSection((LPCRITICAL_SECTION)(puVar4 + 0x105));
    piVar1 = (int *)puVar4[0x15];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    puVar4[0x15] = 0;
    FUN_004783b0();
    FUN_004783b0();
    FUN_004783b0();
    FUN_004783b0();
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
    FUN_0045bef0();
    pvVar3 = GlobalHandle(param_1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(param_1);
    GlobalFree(pvVar3);
  }
  return LVar2;
}


