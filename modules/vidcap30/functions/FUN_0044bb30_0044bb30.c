/* Module: vidcap30.exe
   Function: FUN_0044bb30
   Address: 0044bb30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044bb30(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  LPCVOID local_4;
  
  iVar5 = 0;
  iVar6 = 0;
  local_4 = (LPCVOID)0x0;
  if (param_2 == 0) {
    uVar2 = FUN_0044c610(*(undefined4 *)(param_1 + 0x80));
    param_3 = FUN_0044c620(uVar2);
    iVar5 = 0;
    if (0 < param_3) {
      do {
        if (iVar6 < 0) break;
        uVar3 = FUN_0044c5c0(uVar2,iVar5);
        iVar6 = FUN_0044bca0(param_1,0,&local_4,&param_2,uVar3);
        if (-1 < iVar6) {
          iVar6 = _SfList_AllocAndInsertItem_20(param_4,local_4,param_2,0,0);
          pvVar4 = GlobalHandle(local_4);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(local_4);
          GlobalFree(pvVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    *param_5 = 0;
  }
  else {
    local_4 = *(LPCVOID *)(*(int *)(param_2 + 8) + param_3 * 4);
    uVar2 = *(undefined4 *)((int)local_4 + 0xc);
    uVar3 = FUN_0044d6e0(uVar2);
    puVar1 = param_5;
    *param_5 = uVar3;
    param_3 = FUN_0044c620(uVar2);
    if (0 < param_3) {
      do {
        if (iVar6 < 0) break;
        uVar3 = FUN_0044c5c0(uVar2,iVar5);
        iVar6 = FUN_0044bca0(param_1,*puVar1,&local_4,&param_2,uVar3);
        if (-1 < iVar6) {
          _SfList_AllocAndInsertItem_20(param_4,local_4,param_2,0,0);
          pvVar4 = GlobalHandle(local_4);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(local_4);
          GlobalFree(pvVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
  }
  _SfList_Sort_12(param_4,0,&LAB_0044ee90);
  return 0;
}


