/* Module: wmfplug2.dll
   Function: FUN_00401c90
   Address: 00401c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00401c90(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *pMem;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[0x1a];
  *param_1 = &PTR_FUN_0047b81c;
  param_1[0x12] = &PTR_LAB_0047b7fc;
  param_1[0x13] = &PTR_LAB_0047b7e8;
  param_1[0x14] = &PTR_LAB_0047b7c4;
  param_1[0x15] = &PTR_LAB_0047b798;
  param_1[0x16] = &PTR_LAB_0047b77c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pMem = (undefined4 *)param_1[0x1b];
  if (pMem != (undefined4 *)0x0) {
    *pMem = &PTR_FUN_0047b93c;
    if ((HANDLE)pMem[1] != (HANDLE)0x0) {
      CloseHandle((HANDLE)pMem[1]);
    }
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    *param_1 = &PTR_LAB_0047b8fc;
    return;
  }
  *param_1 = &PTR_LAB_0047b8fc;
  return;
}


