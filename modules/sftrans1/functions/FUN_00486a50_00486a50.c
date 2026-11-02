/* Module: sftrans1.dll
   Function: FUN_00486a50
   Address: 00486a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00486a50(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  LPCVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  HGLOBAL pvVar7;
  undefined4 *puVar8;
  int iVar9;
  
  if ((((param_2 < 0) || (**(int **)(param_1 + 0xa4) <= param_2)) || (param_3 < 0)) ||
     (**(int **)(param_1 + 0xac) + 3 <= param_3)) {
    return 0;
  }
  puVar1 = *(undefined4 **)((*(int **)(param_1 + 0xa4))[2] + param_2 * 4);
  iVar3 = FUN_00486940(param_3);
  iVar4 = FUN_004869f0(param_3);
  if (puVar1[1] != 0) {
    iVar5 = FUN_00486940(*puVar1);
    iVar6 = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      do {
        if (*(int *)(iVar3 + 0xc) <= iVar6) break;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar4 + -4 + iVar6 * 4) = *(undefined4 *)(puVar1[1] + -4 + iVar6 * 4);
      } while (iVar6 < *(int *)(iVar5 + 0xc));
    }
    iVar6 = *(int *)(iVar5 + 0xc);
    iVar9 = *(int *)(iVar3 + 0xc);
    if (iVar6 < iVar9) {
      if (iVar6 < iVar9) {
        puVar8 = (undefined4 *)(iVar4 + iVar6 * 4);
        do {
          *puVar8 = 0;
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 < *(int *)(iVar3 + 0xc));
      }
    }
    else if (iVar9 < iVar6) {
      do {
        pvVar2 = *(LPCVOID *)(puVar1[1] + iVar9 * 4);
        if (pvVar2 != (LPCVOID)0x0) {
          pvVar7 = GlobalHandle(pvVar2);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pvVar2);
          GlobalFree(pvVar7);
          *(undefined4 *)(puVar1[1] + iVar9 * 4) = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(iVar5 + 0xc));
    }
    pvVar2 = (LPCVOID)puVar1[1];
    if (pvVar2 != (LPCVOID)0x0) {
      pvVar7 = GlobalHandle(pvVar2);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(pvVar2);
      GlobalFree(pvVar7);
      puVar1[1] = 0;
    }
  }
  puVar1[1] = iVar4;
  return 1;
}


