/* Module: qt4plug.dll
   Function: FUN_5f51a230
   Address: 5f51a230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f51a230(int *param_1)

{
  int *pMem;
  int iVar1;
  undefined4 *pMem_00;
  HGLOBAL pvVar2;
  int local_c;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_5f59686c;
  FUN_5f51a7f0(param_1);
  if (param_1[0xd3] != 0) {
    FUN_5f51b040((int)param_1,&local_4);
    local_c = 0;
    if (0 < local_4) {
      local_8 = 0;
      do {
        pMem = (int *)((int *)(local_8 + param_1[0xd3]))[10];
        if (pMem != (int *)0x0) {
          iVar1 = *(int *)(local_8 + param_1[0xd3]);
          if (iVar1 == 1) {
            if (pMem != (int *)0x0) {
              FUN_5f51ba80(pMem);
LAB_5f51a2a1:
              pvVar2 = GlobalHandle(pMem);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(pMem);
              GlobalFree(pvVar2);
            }
          }
          else {
            if (iVar1 != 2) goto LAB_5f51a2a1;
            if (pMem != (int *)0x0) {
              (**(code **)(*pMem + 0x58))(1);
            }
          }
        }
        local_c = local_c + 1;
        local_8 = local_8 + 0x30;
      } while (local_c < local_4);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xd3]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xd3]);
    GlobalFree(pvVar2);
  }
  pMem_00 = (undefined4 *)param_1[0xd4];
  if (pMem_00 != (undefined4 *)0x0) {
    FUN_5f51ee60(pMem_00);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalFree(pvVar2);
  }
  return;
}


