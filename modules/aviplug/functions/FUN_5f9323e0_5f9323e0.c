/* Module: aviplug.dll
   Function: FUN_5f9323e0
   Address: 5f9323e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f9323e0(undefined4 *param_1)

{
  int *piVar1;
  HANDLE hObject;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &PTR_LAB_5f9d7850;
  param_1[1] = &PTR_LAB_5f9d7828;
  param_1[2] = &PTR_LAB_5f9d7804;
  param_1[3] = &PTR_LAB_5f9d77f4;
  if (param_1[0x91] != 0) {
    iVar3 = 0;
    if (0 < (int)param_1[0x90]) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(param_1[0x91] + 0x28 + iVar4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x3c))(piVar1);
          *(undefined4 *)(param_1[0x91] + 0x28 + iVar4) = 0;
        }
        hObject = *(HANDLE *)(param_1[0x91] + 0x2c + iVar4);
        if ((hObject != (HANDLE)0x0) && (*(int *)(param_1[0x91] + iVar4 + 0x30) != 0)) {
          CloseHandle(hObject);
          *(undefined4 *)(param_1[0x91] + 0x2c + iVar4) = 0;
          *(undefined4 *)(param_1[0x91] + 0x30 + iVar4) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x38;
      } while (iVar3 < (int)param_1[0x90]);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x91]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x91]);
    GlobalFree(pvVar2);
    param_1[0x91] = 0;
  }
  if ((LPCVOID)param_1[0x8b] != (LPCVOID)0x0) {
    FUN_5f94f820((LPCVOID)param_1[0x8b]);
    param_1[0x8b] = 0;
  }
  if ((HANDLE)param_1[0x96] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x96]);
    param_1[0x96] = 0xffffffff;
  }
  if ((int *)param_1[0x92] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x92] + 0x20))(1);
  }
  if ((DWORD *)param_1[0x97] != (DWORD *)0x0) {
    FUN_5f9623f0((DWORD *)param_1[0x97]);
    param_1[0x97] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x98];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


