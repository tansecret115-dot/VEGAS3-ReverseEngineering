/* Module: sftrans1.dll
   Function: FUN_0047c780
   Address: 0047c780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047c780(int param_1)

{
  LPCVOID pvVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  
  if (*(HGDIOBJ *)(param_1 + 0x488) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x488));
    *(undefined4 *)(param_1 + 0x488) = 0;
  }
  if (*(HDC *)(param_1 + 0x458) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x458));
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x490);
  if (pvVar1 != (LPCVOID)0x0) {
    if (pvVar1 != (LPCVOID)0x0) {
      if (*(HGDIOBJ *)((int)pvVar1 + 0x34) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)((int)pvVar1 + 0x34));
      }
      if (*(HDC *)((int)pvVar1 + 0x38) != (HDC)0x0) {
        DeleteDC(*(HDC *)((int)pvVar1 + 0x38));
      }
      FUN_0047c4b0();
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar1);
      GlobalFree(pvVar3);
    }
    *(undefined4 *)(param_1 + 0x490) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x498);
  if (pvVar1 != (LPCVOID)0x0) {
    FUN_0053afe0();
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    *(undefined4 *)(param_1 + 0x498) = 0;
  }
  FUN_004783b0();
  FUN_004783b0();
  piVar2 = *(int **)(param_1 + 100);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 8) + uVar4 * 4);
      (**(code **)(*piVar2 + 8))(piVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
  }
  pvVar1 = *(LPCVOID *)(param_1 + 8);
  pvVar3 = GlobalHandle(pvVar1);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pvVar1);
  GlobalFree(pvVar3);
  if (param_1 != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
    return;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00000004);
  return;
}


