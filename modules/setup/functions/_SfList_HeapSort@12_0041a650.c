/* Module: Setup.exe
   Function: _SfList_HeapSort@12
   Address: 0041a650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_HeapSort_12(int *param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
                    /* 0x1a650  237  _SfList_HeapSort@12 */
  iVar9 = param_2;
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != param_1[0xd])) {
    return 0x80004005;
  }
  iVar5 = *param_1;
  param_1[0xc] = param_2;
  if ((param_3 != (undefined *)0x0) && (1 < iVar5)) {
    if ((uVar1 >> 2 & 1) == 0) {
      puVar6 = (undefined4 *)param_1[2];
      iVar9 = iVar5 / 2 + 1;
      while (2 < iVar9) {
        iVar9 = iVar9 + -1;
        FUN_0041a7d0((int)param_1,iVar9,iVar5,param_2,param_3);
      }
      iVar9 = iVar5 + 1;
      if (2 < iVar9) {
        puVar7 = puVar6 + iVar5;
        do {
          iVar9 = iVar9 + -1;
          puVar7 = puVar7 + -1;
          FUN_0041a7d0((int)param_1,1,iVar9,param_2,param_3);
          uVar3 = *puVar6;
          *puVar6 = *puVar7;
          *puVar7 = uVar3;
        } while (2 < iVar9);
      }
    }
    else {
      iVar8 = iVar5 / 2 + 1;
      while (2 < iVar8) {
        iVar8 = iVar8 + -1;
        FUN_0041a7d0((int)param_1,iVar8,iVar5,param_2,param_3);
      }
      iVar8 = iVar5 + 1;
      while (2 < iVar8) {
        iVar8 = iVar8 + -1;
        iVar5 = iVar5 + -1;
        FUN_0041a7d0((int)param_1,1,iVar8,iVar9,param_3);
        iVar2 = param_1[1];
        puVar6 = (undefined4 *)param_1[2];
        param_2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
        if (0 < param_2) {
          do {
            uVar3 = *puVar6;
            *puVar6 = *(undefined4 *)(iVar5 * iVar2 + (int)puVar6);
            *(undefined4 *)(iVar5 * iVar2 + (int)puVar6) = uVar3;
            puVar6 = puVar6 + 1;
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
      }
    }
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return 0;
}


