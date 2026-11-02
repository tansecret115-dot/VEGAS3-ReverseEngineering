/* Module: vegas30.exe
   Function: FUN_0052b220
   Address: 0052b220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052b220(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  HGLOBAL pvVar4;
  undefined4 *local_4;
  
  if (*param_2 == 0) {
    iVar3 = FUN_0052b130(*param_1);
    *param_2 = iVar3;
  }
  else {
    local_4 = *(undefined4 **)(*param_2 + 4);
    while (local_4 = (undefined4 *)((int)local_4 + -1), -1 < (int)local_4) {
      iVar3 = *(int *)(*(int *)(*(int *)(*param_2 + 8) + 8) + (int)local_4 * 4);
      if (*(LPCVOID *)(iVar3 + 0x118) != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x118));
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x118));
        GlobalFree(pvVar4);
        *(undefined4 *)(iVar3 + 0x118) = 0;
      }
      if (*(LPCVOID *)(iVar3 + 0x120) != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x120));
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x120));
        GlobalFree(pvVar4);
        *(undefined4 *)(iVar3 + 0x120) = 0;
      }
      _SfList_DeleteList_16(*(undefined4 *)(*param_2 + 8),local_4,1,1);
    }
  }
  if (*param_2 == 0) {
    return 1;
  }
  iVar3 = 0;
  *(undefined4 *)(*param_2 + 4) = param_1[1];
  if (0 < (int)param_1[1]) {
    do {
      _SfList_AllocItem_12(*(undefined4 *)(*param_2 + 8),0x124,&local_4);
      puVar2 = local_4;
      puVar1 = *(undefined4 **)(*(int *)(param_1[2] + 8) + iVar3 * 4);
      *local_4 = *puVar1;
      local_4[1] = puVar1[1];
      local_4[2] = puVar1[2];
      local_4[3] = puVar1[3];
      lstrcpynA((LPSTR)(local_4 + 4),(LPCSTR)(puVar1 + 4),0x104);
      *(undefined1 *)((int)puVar2 + 0x113) = 0;
      puVar2[0x45] = puVar1[0x45];
      puVar2[0x46] = puVar1[0x46];
      puVar2[0x47] = puVar1[0x47];
      puVar2[0x48] = puVar1[0x48];
      _SfList_InsertList_16(*(undefined4 *)(*param_2 + 8),0xffffffff,0,0xffffffff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[1]);
  }
  if (param_3 != 0) {
    iVar3 = param_1[1];
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      _SfList_DeleteList_16(param_1[2],iVar3,1,1);
    }
    _SfList_Destroy_4(param_1[2]);
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return 0;
}


