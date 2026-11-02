/* Module: stl2plg.dll
   Function: FUN_00407d30
   Address: 00407d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00407d30(int *param_1)

{
  int *piVar1;
  LPCVOID pMem;
  undefined4 *pMem_00;
  HGLOBAL pvVar2;
  code *pcVar3;
  int iVar4;
  code *pcVar5;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_00465af0;
  FUN_00408050(param_1);
  iVar4 = 0;
  pcVar3 = GlobalFree_exref;
  pcVar5 = GlobalUnlock_exref;
  if (param_1[0x90] != 0) {
    FUN_00408680((int)param_1,&local_4);
    local_8 = 0;
    if (0 < local_4) {
      do {
        piVar1 = *(int **)(param_1[0x90] + 0x30 + iVar4);
        if (piVar1 != (int *)0x0) {
          if (*(int *)(param_1[0x90] + iVar4) == 2) {
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x58))(1);
            }
          }
          else {
            pvVar2 = GlobalHandle(piVar1);
            GlobalUnlock(pvVar2);
            pvVar2 = GlobalHandle(piVar1);
            GlobalFree(pvVar2);
          }
        }
        pMem = *(LPCVOID *)(param_1[0x90] + 0x18 + iVar4);
        if (pMem != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(pMem);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(param_1[0x90] + 0x18 + iVar4));
          GlobalFree(pvVar2);
        }
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 0x38;
      } while (local_8 < local_4);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x90]);
    pcVar5 = GlobalUnlock_exref;
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x90]);
    pcVar3 = GlobalFree_exref;
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[5]);
    (*pcVar5)(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[5]);
    (*pcVar3)(pvVar2);
  }
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    (*pcVar5)(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    (*pcVar3)(pvVar2);
  }
  if ((LPCVOID)param_1[7] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[7]);
    (*pcVar5)(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[7]);
    (*pcVar3)(pvVar2);
  }
  pMem_00 = (undefined4 *)param_1[0x91];
  if (pMem_00 != (undefined4 *)0x0) {
    FUN_00409660(pMem_00);
    pvVar2 = GlobalHandle(pMem_00);
    (*pcVar5)(pvVar2);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalFree(pvVar2);
  }
  if (param_1[7] != 0) {
    (**(code **)(*(int *)param_1[0xd2] + 0x18))
              ((int *)param_1[0xd2],0xffffffff,0xffffffff,0,0,*(undefined4 *)(param_1[5] + 0x14),
               param_1[7]);
    param_1[7] = 0;
  }
  piVar1 = (int *)param_1[0xd2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


