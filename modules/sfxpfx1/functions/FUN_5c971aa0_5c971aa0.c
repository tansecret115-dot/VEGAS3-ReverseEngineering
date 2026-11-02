/* Module: sfxpfx1.dll
   Function: FUN_5c971aa0
   Address: 5c971aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c971aa0(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  
  piVar4 = param_1;
  uVar2 = param_1[10];
  if ((int)uVar2 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar2 & 0x40000000) == 0) && (DVar5 = GetCurrentThreadId(), DVar5 != param_1[0xd])) {
    return -1;
  }
  uVar11 = ((int)param_3 < 0) - 1 & (uint)param_3;
  iVar8 = *param_1;
  if (param_4 < 0) {
    param_4 = iVar8 - uVar11;
  }
  else if ((int)(iVar8 - uVar11) <= param_4) {
    param_4 = iVar8 - uVar11;
  }
  if (iVar8 < (int)uVar11) {
    param_1 = (int *)0xffffffff;
  }
  else if (param_4 < 1) {
    param_1 = (int *)0xffffffff;
  }
  else {
    iVar8 = (uVar11 - 1) + param_4;
    if ((uVar2 >> 2 & 1) == 0) {
      piVar1 = param_1 + 2;
      param_1 = (int *)0xffffffff;
      param_3 = (undefined4 *)(*piVar1 + iVar8 * 4);
      puVar14 = (undefined4 *)(*piVar1 + uVar11 * 4);
      uVar11 = (iVar8 - uVar11) + 1;
      if (puVar14 <= param_3) {
        do {
          uVar13 = (int)uVar11 / 2;
          if (uVar13 == 0) {
            if (uVar11 != 0) {
              iVar8 = (*(code *)param_5)(piVar4[0xc],param_2,*puVar14);
              if (iVar8 == 0) {
                param_1 = (int *)((int)puVar14 - piVar4[2] >> 2);
              }
              else {
                param_1 = (int *)0xffffffff;
              }
            }
            break;
          }
          uVar12 = uVar13;
          if ((uVar11 & 1) == 0) {
            uVar12 = uVar13 - 1;
          }
          iVar8 = (*(code *)param_5)(piVar4[0xc],param_2,puVar14[uVar12]);
          if (iVar8 == 0) {
            param_1 = (int *)((int)((int)puVar14 + (uVar12 * 4 - piVar4[2])) >> 2);
            break;
          }
          if (iVar8 < 0) {
            param_3 = puVar14 + (uVar12 - 1);
            if ((uVar11 & 1) == 0) {
              uVar13 = uVar13 - 1;
            }
          }
          else {
            puVar14 = puVar14 + uVar12 + 1;
          }
          uVar11 = uVar13;
        } while (puVar14 <= param_3);
      }
    }
    else {
      iVar9 = param_1[1];
      iVar3 = param_1[2];
      uVar13 = iVar9 * uVar11 + iVar3;
      uVar12 = iVar9 * iVar8 + iVar3;
      param_1 = (int *)0xffffffff;
      uVar11 = (iVar8 - uVar11) + 1;
      if (uVar13 <= uVar12) {
        do {
          uVar6 = (int)uVar11 / 2;
          if (uVar6 == 0) {
            if (uVar11 != 0) {
              iVar8 = (*(code *)param_5)(piVar4[0xc],param_2,uVar13);
              if (iVar8 == 0) {
                param_1 = (int *)((int)(uVar13 - iVar3) / piVar4[1]);
              }
              else {
                param_1 = (int *)0xffffffff;
              }
            }
            break;
          }
          uVar7 = uVar6;
          if ((uVar11 & 1) == 0) {
            uVar7 = uVar6 - 1;
          }
          iVar10 = iVar9 * uVar7 + uVar13;
          iVar8 = (*(code *)param_5)(piVar4[0xc],param_2,iVar10);
          if (iVar8 == 0) {
            param_1 = (int *)((iVar10 - iVar3) / piVar4[1]);
            break;
          }
          iVar9 = piVar4[1];
          if (iVar8 < 0) {
            uVar12 = iVar10 - iVar9;
            if ((uVar11 & 1) == 0) {
              uVar6 = uVar6 - 1;
            }
          }
          else {
            uVar13 = iVar9 + iVar10;
          }
          uVar11 = uVar6;
        } while (uVar13 <= uVar12);
      }
    }
  }
  if ((int)uVar2 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 3));
  }
  return (int)param_1;
}


