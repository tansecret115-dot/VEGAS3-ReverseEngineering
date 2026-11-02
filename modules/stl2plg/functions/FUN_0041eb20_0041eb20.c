/* Module: stl2plg.dll
   Function: FUN_0041eb20
   Address: 0041eb20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041eb20(undefined4 *param_1)

{
  int iVar1;
  LPCVOID pMem;
  LPVOID lpAddress;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &PTR_LAB_0046b8b4;
  param_1[1] = &PTR_LAB_0046b8a8;
  if ((int *)param_1[4] != (int *)0x0) {
    iVar3 = *(int *)param_1[4];
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      iVar1 = *(int *)(param_1[4] + 8);
      iVar4 = *(int *)(param_1[4] + 4) * iVar3;
      pMem = *(LPCVOID *)(iVar4 + 0x10 + iVar1);
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(*(LPCVOID *)(iVar4 + iVar1 + 0x10));
        GlobalFree(pvVar2);
      }
    }
    FUN_00417730((int *)param_1[4]);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    FUN_00417730((int *)param_1[5]);
    param_1[5] = 0;
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    iVar3 = *(int *)param_1[0x11];
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      lpAddress = *(LPVOID *)
                   (*(int *)(param_1[0x11] + 4) * iVar3 + *(int *)(param_1[0x11] + 8) + 0x10);
      if (lpAddress != (LPVOID)0x0) {
        VirtualFree(lpAddress,0,0x8000);
      }
    }
    FUN_00417730((int *)param_1[0x11]);
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    FUN_00417730((int *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    FUN_00417730((int *)param_1[0x10]);
    param_1[0x10] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  return;
}


