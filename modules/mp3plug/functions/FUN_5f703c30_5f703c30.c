/* Module: mp3plug.dll
   Function: FUN_5f703c30
   Address: 5f703c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f703c30(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint *in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  double dVar11;
  uint local_54;
  uint uStack_50;
  double local_2c;
  
  uVar8 = *(uint *)(*(int *)(param_2 + 0x1c) + 0xe4);
  if ((int)uVar8 < 0) {
    in_EAX[0xef] = uVar8 + 1 + *in_EAX;
  }
  else {
    in_EAX[0xef] = uVar8;
  }
  iVar7 = 0;
  uVar8 = *in_EAX;
  if (0 < (int)uVar8) {
    do {
      dVar11 = (double)*(float *)(in_EAX[0xeb] + iVar7 * 4);
      uStack_50 = (uint)((ulonglong)dVar11 >> 0x20);
      local_54 = SUB84(dVar11,0);
      uVar8 = uStack_50 >> 0x14 & 0x7ff;
      if (uVar8 < 0x3ff) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uStack_50 << 0xb | local_54 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar8 & 0x1f);
        if ((longlong)dVar11 < 0) {
          uVar8 = -uVar8;
        }
      }
      *(float *)(in_EAX[0xf0] + iVar7 * 4) =
           *(float *)(*(int *)(param_2 + 0x1c) + 0xe8 + uVar8 * 4) * _DAT_5f76025c;
      uVar8 = *in_EAX;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar8);
  }
  if (0 < (int)uVar8) {
    iVar7 = 0;
    do {
      local_2c = (double)_DAT_5f760260;
      if (0 < (int)uVar8) {
        pfVar3 = (float *)in_EAX[0xeb];
        iVar9 = *(int *)(param_2 + 0x1c);
        fVar1 = *(float *)(iVar9 + 0xdc);
        fVar2 = *(float *)(iVar9 + 0xd8);
        iVar4 = *(int *)(iVar9 + 0xd4);
        iVar9 = *(int *)(iVar9 + 0xd0);
        pfVar10 = pfVar3;
        do {
          fVar5 = fVar1;
          if ((_DAT_5f760264 <= pfVar3[iVar7] - *pfVar10) || (fVar5 = fVar2, iVar9 == 0)) {
            fVar5 = (pfVar3[iVar7] - *pfVar10) * fVar5;
            fVar6 = _DAT_5f7602b4;
            if (((iVar4 == 0) && (_DAT_5f760268 <= fVar5)) && (fVar5 <= _DAT_5f76026c)) {
              fVar6 = fVar5 - _DAT_5f760270;
              fVar6 = (fVar6 * fVar6 - _DAT_5f760274 * fVar6) * _DAT_5f760278;
            }
            fVar5 = fVar5 + _DAT_5f76027c;
            fVar5 = (_DAT_5f7601b4 * fVar5 + _DAT_5f760280) -
                    SQRT(fVar5 * fVar5 + (float)_DAT_5f760288) * _DAT_5f760290;
            if (_DAT_5f760294 < fVar5) {
              dVar11 = pow(_DAT_5f7602a8,(double)((fVar6 + fVar5) * _DAT_5f7602b0));
            }
            else {
              dVar11 = (double)_DAT_5f760298;
            }
          }
          else {
            dVar11 = (double)_DAT_5f7602b8;
          }
          local_2c = dVar11 + local_2c;
          pfVar10 = pfVar10 + 1;
        } while ((int)pfVar10 < (int)(pfVar3 + uVar8));
      }
      *(float *)(in_EAX[0xf1] + iVar7 * 4) =
           _DAT_5f7602a0 / (((float)(int)uVar8 * _DAT_5f760258 + _DAT_5f760254) * (float)local_2c);
      uVar8 = *in_EAX;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar8);
  }
  iVar7 = 0;
  if (0 < (int)uVar8) {
    do {
      *(float *)(in_EAX[0xf2] + iVar7 * 4) =
           *(float *)(in_EAX[0xeb] + iVar7 * 4) * *(float *)(*(int *)(param_2 + 0x1c) + 0x154) +
           *(float *)(*(int *)(param_2 + 0x1c) + 0x150);
      uVar8 = *in_EAX;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar8);
  }
  if (*(float *)(*(int *)(param_2 + 0x1c) + 0x154) <= _DAT_5f7602a4) {
    FUN_5f6d5e80((float *)(*(int *)(param_2 + 0x1c) + 0x14c),0,(float *)in_EAX[0xf2],1,
                 (float *)in_EAX[0xf2],1,uVar8);
  }
  else {
    FUN_5f6d6100((float *)(*(int *)(param_2 + 0x1c) + 0x14c),0,(float *)in_EAX[0xf2],1,
                 (float *)in_EAX[0xf2],1,uVar8);
  }
  iVar7 = *(int *)(param_2 + 0x1c);
  iVar9 = *(int *)(iVar7 + 0x160);
  if ((-1 < iVar9) && (iVar9 < *(int *)(iVar7 + 0x164))) {
    do {
      *(undefined4 *)(in_EAX[0xf2] + iVar9 * 4) = *(undefined4 *)(iVar7 + 0x168);
      iVar7 = *(int *)(param_2 + 0x1c);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(iVar7 + 0x164));
  }
  return;
}


