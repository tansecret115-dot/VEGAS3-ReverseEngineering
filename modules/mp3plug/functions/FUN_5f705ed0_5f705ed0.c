/* Module: mp3plug.dll
   Function: FUN_5f705ed0
   Address: 5f705ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f705ed0(int *param_1,int param_2,int *param_3)

{
  double dVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float afStack_74 [8];
  int local_54;
  int local_40;
  double local_3c;
  double local_34;
  double local_2c;
  char local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  
  local_24 = '\0';
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_20 = param_1 + 3;
  local_1c = 2;
  piVar5 = param_1;
  do {
    uVar2 = FUN_5f705910(param_2,local_1c);
    local_2c = (double)CONCAT44(local_2c._4_4_,uVar2);
    FUN_5f7058a0((uint *)*param_1);
    uVar2 = FUN_5f705910(*param_1,0);
    local_3c = (double)CONCAT44(local_3c._4_4_,uVar2);
    piVar3 = (int *)param_1[1];
    local_18 = piVar5;
    if (0 < *piVar3) {
      iVar6 = 0;
      iVar4 = local_2c._0_4_;
      iVar7 = 0;
      do {
        fVar9 = FUN_5f6d87a0((float *)(iVar4 + iVar7 * 4),piVar3[iVar6 + 5] * 2);
        iVar7 = iVar7 + *(int *)(param_1[1] + 0x14 + iVar6 * 4) * 2;
        if ((float10)*(float *)(param_1[3] + iVar6 * 4) <= fVar9) {
          fVar9 = (float10)log2(fVar9);
          fVar9 = (float10)0.6931471805599453 * fVar9 * (float10)_DAT_5f760554;
        }
        else {
          fVar9 = (float10)*(float *)(param_1[2] + iVar6 * 4);
        }
        *(float *)(local_3c._0_4_ + iVar6 * 4) = (float)fVar9;
        piVar3 = (int *)param_1[1];
        iVar6 = iVar6 + 1;
      } while (iVar6 < *piVar3);
    }
    uVar8 = 4;
    do {
      local_34 = (double)_DAT_5f76055c;
      local_2c = (double)_DAT_5f760558;
      iVar4 = FUN_5f705910(*param_1,uVar8);
      iVar6 = 0;
      iVar7 = *(int *)param_1[1];
      if (0 < iVar7) {
        do {
          dVar1 = (double)((int *)param_1[1])[iVar6 + 5] *
                  ((double)*(float *)(local_3c._0_4_ + iVar6 * 4) -
                  (double)*(float *)(iVar4 + iVar6 * 4));
          iVar6 = iVar6 + 1;
          if (dVar1 <= (double)_DAT_5f760560) {
            local_34 = local_34 - dVar1;
          }
          else {
            local_2c = dVar1 + local_2c;
          }
        } while (iVar6 < iVar7);
      }
      afStack_74[uVar8 + 3] = (float)local_2c * _DAT_5f760550;
      afStack_74[uVar8 - 1] = (float)local_34 * _DAT_5f760550;
      uVar8 = uVar8 - 1;
    } while (0 < (int)uVar8);
    iVar4 = 0;
    iVar7 = param_1[10];
    if (0 < iVar7) {
      local_40 = iVar7;
      do {
        local_54 = iVar4;
        local_3c = (double)afStack_74[iVar4 + 4];
        if (((float)iVar4 * _DAT_5f760540 + (float)param_1[0xe] < afStack_74[iVar4 + 4]) ||
           ((param_1[0xc] != 0 && ((double)_DAT_5f76054c < (double)afStack_74[iVar4 + 4])))) {
          local_18[5] = 1;
          local_24 = '\x01';
          param_1[10] = 0;
          param_1[0xc] = 1;
          iVar7 = 0;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar7 = local_40;
      } while (iVar4 < iVar7);
    }
    if (iVar7 < 3) {
      param_1[10] = iVar7 + 1;
    }
    iVar4 = 0;
    iVar7 = param_1[0xb];
    if (0 < iVar7) {
      do {
        local_54 = iVar4;
        if ((float)iVar4 * _DAT_5f760544 + _DAT_5f760548 < afStack_74[iVar4]) {
          iVar7 = 0;
          local_18[5] = 4;
          local_24 = '\x01';
          param_1[0xb] = 0;
          break;
        }
        iVar6 = iVar4 + 1;
        if (iVar7 <= iVar6) break;
        local_54 = iVar6;
        if ((float)iVar6 * _DAT_5f760544 + _DAT_5f760548 < afStack_74[iVar6]) {
          iVar7 = 0;
          local_18[5] = 4;
          local_24 = '\x01';
          param_1[0xb] = 0;
          break;
        }
        iVar4 = iVar4 + 2;
      } while (iVar4 < iVar7);
    }
    if (iVar7 < 2) {
      param_1[0xb] = iVar7 + 1;
    }
    if (local_24 == '\0') {
      param_1[0xc] = 0;
    }
    piVar5 = local_18 + 1;
    local_1c = local_1c - 1;
    if ((int)local_20 <= (int)piVar5) {
      if ((param_1[0x10] != 0) && (param_1[0xd] != 0)) {
        param_1[4] = 1;
      }
      if (param_1[6] == 1) {
        param_1[0xd] = 1;
      }
      else {
        param_1[0xd] = 0;
      }
      iVar7 = 0;
      piVar5 = param_1;
      do {
        if (piVar5[4] == 1) {
          iVar7 = 1;
        }
        piVar5 = piVar5 + 1;
      } while ((int)piVar5 < (int)(param_1 + 3));
      if ((param_1[0xf] != 0) && (param_1[7] == 1)) {
        iVar7 = 1;
      }
      param_1[4] = param_1[7];
      if (DAT_5f75a9e0 == 0) {
        if (iVar7 == 0) {
          if (param_1[9] == 0) {
            iVar4 = param_1[8];
            if (iVar4 == 0) {
              *param_3 = 0;
            }
            else if (iVar4 == 2) {
              *param_3 = 3;
            }
            else if (iVar4 == 3) {
              *param_3 = 0;
            }
          }
          else if (param_1[8] == 1) {
            *param_3 = 2;
          }
          else if (param_1[8] == 2) {
            *param_3 = 2;
          }
        }
        else {
          iVar4 = param_1[8];
          if (iVar4 == 0) {
            *param_3 = 1;
          }
          else if (iVar4 == 1) {
            *param_3 = 2;
          }
          else if (iVar4 == 2) {
            *param_3 = 2;
          }
          else if (iVar4 == 3) {
            *param_3 = 1;
          }
        }
      }
      else if (DAT_5f75a9e0 == 1) {
        *param_3 = 0;
      }
      else if (DAT_5f75a9e0 == 2) {
        *param_3 = 2;
      }
      iVar4 = *param_3;
      param_1[9] = iVar7;
      param_1[8] = iVar4;
      return 1;
    }
  } while( true );
}


