/* Module: stl2plg.dll
   Function: FUN_004036c0
   Address: 004036c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004036c0(HANDLE param_1,int *param_2,ushort *param_3,DWORD *param_4,uint *param_5,
                 undefined4 *param_6)

{
  LPCVOID pMem;
  ushort uVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  
  *param_6 = 0;
  uVar2 = FUN_004050b0(param_1);
  *param_5 = uVar2;
  if (uVar2 == 0) {
    *param_3 = 1;
    *param_4 = 0;
    return;
  }
  FUN_004050b0(param_1);
  uVar1 = FUN_00405070(param_1);
  *param_3 = uVar1;
  if ((short)uVar1 < 0) {
    *param_6 = 1;
    uVar1 = *param_3;
    if ((short)uVar1 < 0) {
      uVar1 = -uVar1;
    }
    *param_3 = uVar1;
  }
  iVar7 = (int)(short)*param_3;
  pvVar3 = GlobalAlloc(0x40,iVar7 * 0x14b + 4);
  piVar4 = GlobalLock(pvVar3);
  if (piVar4 == (int *)0x0) {
    param_5 = (uint *)0x0;
  }
  else {
    *piVar4 = iVar7;
    param_5 = (uint *)(piVar4 + 1);
    if (-1 < iVar7 + -1) {
      puVar5 = (undefined4 *)((int)piVar4 + 0x16);
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 0x14b);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  uVar1 = *param_3;
  iVar7 = *param_2;
  if (iVar7 != 0) {
    param_6 = *(undefined4 **)(iVar7 + -4);
    if (-1 < (int)param_6 + -1) {
      puVar5 = (undefined4 *)((int)param_6 * 0x14b + iVar7 + 0x12);
      do {
        pMem = *(LPCVOID *)((int)puVar5 + -0x14b);
        if (pMem != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
          *(undefined4 *)((int)puVar5 + -0x14b) = 0;
        }
        *(undefined4 *)((int)puVar5 + -0x147) = 0;
        param_6 = (undefined4 *)((int)param_6 + -1);
        puVar5 = (undefined4 *)((int)puVar5 + -0x14b);
      } while (param_6 != (undefined4 *)0x0);
    }
    pvVar3 = GlobalHandle((LPCVOID)(iVar7 + -4));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)(iVar7 + -4));
    GlobalFree(pvVar3);
  }
  iVar7 = 0;
  *param_2 = (int)param_5;
  param_2[1] = (int)(short)uVar1;
  if (0 < (short)*param_3) {
    iVar8 = 0;
    do {
      FUN_00403ae0(param_1,(uint *)(*param_2 + iVar8));
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x14b;
    } while (iVar7 < (short)*param_3);
  }
  DVar6 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  *param_4 = DVar6;
  return;
}


