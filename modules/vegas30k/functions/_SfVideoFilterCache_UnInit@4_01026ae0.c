/* Module: vegas30k.dll
   Function: _SfVideoFilterCache_UnInit@4
   Address: 01026ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVideoFilterCache_UnInit_4(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x26ae0  1254  _SfVideoFilterCache_UnInit@4 */
  _SfVideoFilterCache_UnInitView_4(param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[0x18] != (int *)0x0) {
    iVar3 = *(int *)param_1[0x18];
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = *(int *)(param_1[0x18] + 4) * iVar4 + *(int *)(param_1[0x18] + 8);
        if ((iVar5 != 0) && (*(LPCVOID *)(iVar5 + 0x14) != (LPCVOID)0x0)) {
          pvVar2 = GlobalHandle(*(LPCVOID *)(iVar5 + 0x14));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(iVar5 + 0x14));
          GlobalFree(pvVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    _SfList_Destroy_4(param_1[0x18]);
  }
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


