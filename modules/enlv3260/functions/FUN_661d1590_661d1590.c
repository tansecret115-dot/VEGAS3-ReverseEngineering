/* Module: enlv3260.dll
   Function: FUN_661d1590
   Address: 661d1590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_661d1590(void *this,int *param_1)

{
  HANDLE pvVar1;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *local_8;
  
  piVar2 = param_1;
  if (param_1[3] == 0) {
    return 0;
  }
  local_8 = this;
  if ((HANDLE)param_1[5] != (HANDLE)0x0) {
    local_8 = (void *)0xffffffff;
    ReleaseSemaphore((HANDLE)param_1[5],1,(LPLONG)&local_8);
  }
  Sleep(100);
  DVar3 = GetTickCount();
  DVar4 = GetTickCount();
  uVar7 = DVar3 + 10000;
  param_1 = (int *)0x0;
  if (DVar4 < uVar7) {
    do {
      if ((HANDLE)piVar2[3] == (HANDLE)0x0) break;
      GetExitCodeThread((HANDLE)piVar2[3],(LPDWORD)&param_1);
      if (param_1 != (int *)0x103) {
        CloseHandle((HANDLE)piVar2[3]);
        piVar2[3] = 0;
        break;
      }
      Sleep(10);
      DVar4 = GetTickCount();
    } while (DVar4 < uVar7);
    if (DVar4 < uVar7) goto LAB_661d1640;
  }
  if (piVar2[3] != 0) {
    piVar2[3] = 0;
  }
LAB_661d1640:
  if ((HANDLE)piVar2[5] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar2[5]);
    piVar2[5] = 0;
  }
  if ((HANDLE)piVar2[6] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar2[6]);
    piVar2[6] = 0;
  }
  if ((HANDLE)piVar2[9] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar2[9]);
    piVar2[9] = 0;
  }
  if ((HANDLE)piVar2[7] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar2[7]);
    piVar2[7] = 0;
  }
  if ((HANDLE)piVar2[8] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar2[8]);
    piVar2[8] = 0;
  }
  uVar7 = 0;
  iVar5 = FUN_661d1770(piVar2);
  if (iVar5 != 0) {
    do {
      if ((piVar2[0xb] != 0) &&
         (pvVar1 = *(HANDLE *)(piVar2[0xb] + uVar7 * 4), pvVar1 != (HANDLE)0x0)) {
        CloseHandle(pvVar1);
        *(undefined4 *)(piVar2[0xb] + uVar7 * 4) = 0;
      }
      if ((piVar2[0xc] != 0) &&
         (pvVar1 = *(HANDLE *)(piVar2[0xc] + uVar7 * 4), pvVar1 != (HANDLE)0x0)) {
        CloseHandle(pvVar1);
        *(undefined4 *)(piVar2[0xc] + uVar7 * 4) = 0;
      }
      if ((piVar2[10] != 0) && (pvVar1 = *(HANDLE *)(piVar2[10] + uVar7 * 4), pvVar1 != (HANDLE)0x0)
         ) {
        CloseHandle(pvVar1);
        *(undefined4 *)(piVar2[10] + uVar7 * 4) = 0;
      }
      uVar7 = uVar7 + 1;
      uVar6 = FUN_661d1770(piVar2);
    } while (uVar7 < uVar6);
  }
  if ((void *)piVar2[0xb] != (void *)0x0) {
    operator_delete((void *)piVar2[0xb]);
    piVar2[0xb] = 0;
  }
  if ((void *)piVar2[0xc] != (void *)0x0) {
    operator_delete((void *)piVar2[0xc]);
    piVar2[0xc] = 0;
  }
  if ((void *)piVar2[10] != (void *)0x0) {
    operator_delete((void *)piVar2[10]);
    piVar2[10] = 0;
  }
  if ((LPCRITICAL_SECTION)piVar2[0xd] != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)piVar2[0xd]);
    operator_delete((void *)piVar2[0xd]);
    piVar2[0xd] = 0;
  }
  return 0;
}


