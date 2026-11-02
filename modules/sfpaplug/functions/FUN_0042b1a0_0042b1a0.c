/* Module: sfpaplug.dll
   Function: FUN_0042b1a0
   Address: 0042b1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b1a0(int *param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != param_1[0xd])) {
    return 0x80004005;
  }
  param_1[0xc] = param_2;
  iVar5 = *param_1;
  if ((param_3 != (undefined *)0x0) && (1 < iVar5)) {
    if ((uVar1 >> 2 & 1) == 0) {
      puVar8 = (undefined4 *)param_1[2];
      for (puVar9 = puVar8 + iVar5 + -1; puVar7 = puVar8, puVar6 = puVar8, puVar8 < puVar9;
          puVar9 = puVar9 + -1) {
        while (puVar6 = puVar6 + 1, puVar6 <= puVar9) {
          iVar5 = (*(code *)param_3)(param_2,*puVar6,*puVar7);
          if (0 < iVar5) {
            puVar7 = puVar6;
          }
        }
        if (puVar7 != puVar9) {
          uVar3 = *puVar9;
          *puVar9 = *puVar7;
          *puVar7 = uVar3;
        }
      }
    }
    else {
      iVar2 = param_1[1];
      puVar9 = (undefined4 *)param_1[2];
      for (puVar8 = (undefined4 *)((iVar5 + -1) * iVar2 + (int)puVar9); puVar9 < puVar8;
          puVar8 = (undefined4 *)((int)puVar8 - iVar2)) {
        puVar6 = puVar9;
        for (puVar7 = (undefined4 *)(iVar2 + (int)puVar9); puVar7 <= puVar8;
            puVar7 = (undefined4 *)((int)puVar7 + param_1[1])) {
          iVar5 = (*(code *)param_3)(param_2,puVar7,puVar6);
          if (0 < iVar5) {
            puVar6 = puVar7;
          }
        }
        if ((puVar6 != puVar8) &&
           (iVar5 = (int)(param_1[1] + (param_1[1] >> 0x1f & 3U)) >> 2, 0 < iVar5)) {
          puVar7 = puVar8;
          do {
            uVar3 = *puVar7;
            *puVar7 = *(undefined4 *)(((int)puVar6 - (int)puVar8) + (int)puVar7);
            *(undefined4 *)(((int)puVar6 - (int)puVar8) + (int)puVar7) = uVar3;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar2 = param_1[1];
      }
    }
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return 0;
}


