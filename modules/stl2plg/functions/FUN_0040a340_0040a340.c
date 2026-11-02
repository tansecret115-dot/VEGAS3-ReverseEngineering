/* Module: stl2plg.dll
   Function: FUN_0040a340
   Address: 0040a340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a340(int *param_1)

{
  int *piVar1;
  LPCVOID pMem;
  undefined4 *pMem_00;
  HGLOBAL pvVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_00465c2c;
  FUN_0040a610(param_1);
  iVar3 = 0;
  if (param_1[0x97] != 0) {
    FUN_0040ac90((int)param_1,&local_4);
    local_8 = 0;
    if (0 < local_4) {
      do {
        piVar1 = *(int **)(param_1[0x97] + 0x30 + iVar3);
        if (piVar1 != (int *)0x0) {
          if (*(int *)(param_1[0x97] + iVar3) == 2) {
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
        pMem = *(LPCVOID *)(param_1[0x97] + 0x18 + iVar3);
        if (pMem != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(pMem);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(param_1[0x97] + 0x18 + iVar3));
          GlobalFree(pvVar2);
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x38;
      } while (local_8 < local_4);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x97]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x97]);
    GlobalFree(pvVar2);
  }
  pMem_00 = (undefined4 *)param_1[0x98];
  if (pMem_00 != (undefined4 *)0x0) {
    FUN_0040c4b0(pMem_00);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalFree(pvVar2);
  }
  if (param_1[0xda] != 0) {
    (**(code **)(*(int *)param_1[0xd9] + 0x18))
              ((int *)param_1[0xd9],0xffffffff,0xffffffff,0,0,param_1[10],param_1[0xda]);
    param_1[0xda] = 0;
  }
  piVar1 = (int *)param_1[0xd9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


