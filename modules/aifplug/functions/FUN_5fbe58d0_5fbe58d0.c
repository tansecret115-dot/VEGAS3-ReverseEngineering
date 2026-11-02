/* Module: aifplug.dll
   Function: FUN_5fbe58d0
   Address: 5fbe58d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbe58d0(int *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,undefined *param_5
                )

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar3 = GetCurrentThreadId(), DVar3 != param_1[0xd])) {
    return -1;
  }
  iVar6 = *param_1;
  uVar10 = param_3 & ((int)param_3 < 0) - 1;
  if ((int)param_4 < 0) {
    param_4 = (undefined4 *)(iVar6 - uVar10);
  }
  else if ((int)(iVar6 - uVar10) <= (int)param_4) {
    param_4 = (undefined4 *)(iVar6 - uVar10);
  }
  if (iVar6 < (int)uVar10) {
    iVar11 = -1;
  }
  else if ((int)param_4 < 1) {
    iVar11 = 0;
  }
  else {
    iVar6 = (uVar10 - 1) + (int)param_4;
    if ((uVar1 >> 2 & 1) == 0) {
      param_4 = (undefined4 *)(param_1[2] + iVar6 * 4);
      puVar8 = (undefined4 *)(param_1[2] + uVar10 * 4);
      iVar11 = -1;
      uVar10 = (iVar6 - uVar10) + 1;
      if (puVar8 <= param_4) {
        do {
          uVar4 = (int)uVar10 / 2;
          if (uVar4 == 0) {
            if (uVar10 != 0) {
              iVar6 = (*(code *)param_5)(param_1[0xc],param_2,*puVar8);
              iVar11 = (int)puVar8 - param_1[2] >> 2;
              goto joined_r0x5fbe5ade;
            }
            break;
          }
          uVar5 = uVar4;
          if ((uVar10 & 1) == 0) {
            uVar5 = uVar4 - 1;
          }
          puVar9 = puVar8 + uVar5;
          iVar11 = (int)puVar9 - param_1[2] >> 2;
          iVar6 = (*(code *)param_5)(param_1[0xc],param_2,*puVar9);
          if (iVar6 == 0) break;
          if (iVar6 < 0) {
            param_4 = puVar9 + -1;
            if ((uVar10 & 1) == 0) {
              uVar4 = uVar4 - 1;
            }
          }
          else {
            puVar8 = puVar9 + 1;
            iVar11 = iVar11 + 1;
          }
          uVar10 = uVar4;
        } while (puVar8 <= param_4);
      }
    }
    else {
      iVar7 = param_1[1];
      iVar2 = param_1[2];
      puVar8 = (undefined4 *)(iVar7 * uVar10 + iVar2);
      param_4 = (undefined4 *)(iVar7 * iVar6 + iVar2);
      iVar11 = -1;
      uVar10 = (iVar6 - uVar10) + 1;
      if (puVar8 <= param_4) {
        do {
          uVar4 = (int)uVar10 / 2;
          if (uVar4 == 0) {
            if (uVar10 != 0) {
              iVar6 = (*(code *)param_5)(param_1[0xc],param_2,puVar8);
              iVar11 = ((int)puVar8 - iVar2) / param_1[1];
joined_r0x5fbe5ade:
              if (0 < iVar6) {
                iVar11 = iVar11 + 1;
              }
            }
            break;
          }
          uVar5 = uVar4;
          if ((uVar10 & 1) == 0) {
            uVar5 = uVar4 - 1;
          }
          puVar9 = (undefined4 *)(iVar7 * uVar5 + (int)puVar8);
          iVar11 = ((int)puVar9 - iVar2) / iVar7;
          iVar6 = (*(code *)param_5)(param_1[0xc],param_2,puVar9);
          if (iVar6 == 0) break;
          iVar7 = param_1[1];
          if (iVar6 < 0) {
            param_4 = (undefined4 *)((int)puVar9 - iVar7);
            if ((uVar10 & 1) == 0) {
              uVar4 = uVar4 - 1;
            }
          }
          else {
            puVar8 = (undefined4 *)(iVar7 + (int)puVar9);
            iVar11 = iVar11 + 1;
          }
          uVar10 = uVar4;
        } while (puVar8 <= param_4);
      }
    }
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return iVar11;
}


