/* Module: sftrans1.dll
   Function: FUN_004dcc10
   Address: 004dcc10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004dcc10(int *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,code *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  
  uVar2 = param_1[10];
  if ((int)uVar2 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar2 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != param_1[0xd])) {
    return -1;
  }
  iVar7 = *param_1;
  param_3 = param_3 & ((int)param_3 < 0) - 1;
  if ((int)param_4 < 0) {
    param_4 = (undefined4 *)(iVar7 - param_3);
  }
  else if ((int)(iVar7 - param_3) <= (int)param_4) {
    param_4 = (undefined4 *)(iVar7 - param_3);
  }
  if (iVar7 < (int)param_3) {
    iVar13 = -1;
  }
  else if ((int)param_4 < 1) {
    iVar13 = 0;
  }
  else {
    iVar7 = (param_3 - 1) + (int)param_4;
    if ((uVar2 >> 2 & 1) == 0) {
      param_4 = (undefined4 *)(param_1[2] + iVar7 * 4);
      puVar11 = (undefined4 *)(param_1[2] + param_3 * 4);
      iVar13 = -1;
      uVar10 = (iVar7 - param_3) + 1;
      if (puVar11 <= param_4) {
        do {
          uVar8 = (int)uVar10 / 2;
          if (uVar8 == 0) {
            if (uVar10 != 0) {
              iVar7 = (*param_5)(param_1[0xc],param_2,*puVar11);
              iVar13 = (int)puVar11 - param_1[2] >> 2;
              goto joined_r0x004dce1e;
            }
            break;
          }
          uVar5 = uVar8;
          if ((uVar10 & 1) == 0) {
            uVar5 = uVar8 - 1;
          }
          puVar1 = puVar11 + uVar5;
          iVar13 = (int)puVar1 - param_1[2] >> 2;
          iVar7 = (*param_5)(param_1[0xc],param_2,*puVar1);
          if (iVar7 == 0) break;
          if (iVar7 < 0) {
            param_4 = puVar1 + -1;
            if ((uVar10 & 1) == 0) {
              uVar8 = uVar8 - 1;
            }
          }
          else {
            puVar11 = puVar1 + 1;
            iVar13 = iVar13 + 1;
          }
          uVar10 = uVar8;
        } while (puVar11 <= param_4);
      }
    }
    else {
      iVar9 = param_1[1];
      iVar3 = param_1[2];
      uVar10 = iVar9 * param_3 + iVar3;
      param_4 = (undefined4 *)(iVar9 * iVar7 + iVar3);
      iVar13 = -1;
      uVar8 = (iVar7 - param_3) + 1;
      if (uVar10 <= param_4) {
        do {
          uVar5 = (int)uVar8 / 2;
          if (uVar5 == 0) {
            if (uVar8 != 0) {
              iVar7 = (*param_5)(param_1[0xc],param_2,uVar10);
              iVar13 = (int)(uVar10 - iVar3) / param_1[1];
joined_r0x004dce1e:
              if (0 < iVar7) {
                iVar13 = iVar13 + 1;
              }
            }
            break;
          }
          uVar6 = uVar5;
          if ((uVar8 & 1) == 0) {
            uVar6 = uVar5 - 1;
          }
          iVar12 = iVar9 * uVar6 + uVar10;
          iVar13 = (iVar12 - iVar3) / iVar9;
          iVar7 = (*param_5)(param_1[0xc],param_2,iVar12);
          if (iVar7 == 0) break;
          iVar9 = param_1[1];
          if (iVar7 < 0) {
            param_4 = (undefined4 *)(iVar12 - iVar9);
            if ((uVar8 & 1) == 0) {
              uVar5 = uVar5 - 1;
            }
          }
          else {
            uVar10 = iVar9 + iVar12;
            iVar13 = iVar13 + 1;
          }
          uVar8 = uVar5;
        } while (uVar10 <= param_4);
      }
    }
  }
  if ((int)uVar2 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return iVar13;
}


