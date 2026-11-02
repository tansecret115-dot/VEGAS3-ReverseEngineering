/* Module: vegas30.exe
   Function: FUN_00525300
   Address: 00525300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00525300(int param_1,LPCVOID param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 != (LPCVOID)0x0) {
    param_2 = *(LPCVOID *)(*(int *)((int)param_2 + 8) + param_3 * 4);
    iVar1 = *(int *)((int)param_2 + 0xc);
    if ((iVar1 != 0) && (param_3 = FUN_00508b80(iVar1), 0 < param_3)) {
      do {
        uVar2 = FUN_00508c00(iVar1,iVar5);
        param_2 = (LPCVOID)0x0;
        iVar3 = FUN_00524f30(param_1,&param_2,uVar2);
        if (iVar3 != 0) {
          if (param_2 == (LPCVOID)0x0) {
            return 0x8007000e;
          }
          iVar3 = 0;
          if ((LPCSTR)((int)param_2 + 0x14) != (LPCSTR)0x0) {
            iVar3 = lstrlenA((LPCSTR)((int)param_2 + 0x14));
            iVar3 = iVar3 + 1;
          }
          _SfList_AllocAndInsertItem_20(param_5,param_2,iVar3 + 0x17,0,0);
          pvVar4 = GlobalHandle(param_2);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(param_2);
          GlobalFree(pvVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    _SfList_Sort_12(param_5,0,&LAB_00525220);
    return 0;
  }
  param_2 = (LPCVOID)0x0;
  iVar5 = FUN_00524f30(param_1,&param_2,*(undefined4 *)(param_1 + 0x10c));
  if (iVar5 != 0) {
    if (param_2 == (LPCVOID)0x0) {
      return 0x8007000e;
    }
    if ((LPCSTR)((int)param_2 + 0x14) == (LPCSTR)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = lstrlenA((LPCSTR)((int)param_2 + 0x14));
      iVar5 = iVar5 + 1;
    }
    _SfList_AllocAndInsertItem_20(param_5,param_2,iVar5 + 0x17,0,0);
    pvVar4 = GlobalHandle(param_2);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(param_2);
    GlobalFree(pvVar4);
  }
  return 0;
}


