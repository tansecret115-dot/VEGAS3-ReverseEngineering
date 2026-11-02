/* Module: sftrans1.dll
   Function: FUN_0053afe0
   Address: 0053afe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0053afe0(int param_1)

{
  LPCVOID pvVar1;
  undefined4 *pMem;
  HGLOBAL pvVar2;
  
  if (*(HDC *)(param_1 + 0xc) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HDC *)(param_1 + 0x10) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_004dd670(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0053b2f0(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x164) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x164))(1);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x168);
  if (pvVar1 != (LPCVOID)0x0) {
    if (pvVar1 != (LPCVOID)0x0) {
      FUN_00542be0();
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pvVar1);
      GlobalFree(pvVar2);
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  pMem = *(undefined4 **)(param_1 + 0x160);
  if (pMem != (undefined4 *)0x0) {
    free((void *)*pMem);
    *pMem = 0;
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x20);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


