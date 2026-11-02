/* Module: mp3plug.dll
   Function: FUN_5f702f80
   Address: 5f702f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __fastcall FUN_5f702f80(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 in_ST0;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int in_stack_00000010;
  int *in_stack_00000018;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  fVar9 = FUN_5f702f20(param_1,0);
  fVar2 = (float)fVar9;
  fVar1 = (_DAT_5f7600d4 * (float)in_ST0) / (float)in_EAX;
  do {
    iVar6 = iVar6 + 1;
    fVar9 = (float10)iVar6 * (float10)fVar1;
    fVar11 = (float10)fpatan((float10)_DAT_5f7600dc * fVar9,(float10)1);
    fVar9 = (float10)fpatan((float10)_DAT_5f7600e0 * (float10)(double)fVar9,(float10)1);
    fVar9 = (float10)_DAT_5f7600f0 * (float10)(double)fVar11 * (float10)(double)fVar11 +
            fVar9 * (float10)_DAT_5f7600e8;
    fVar4 = (float)fVar9;
    if ((float10)_DAT_5f7600d0 < fVar9 - (float10)fVar2) {
      in_stack_00000018[iVar7 + 0x78] = iVar8;
      in_stack_00000018[iVar7 + 5] = iVar6 - iVar8;
      if (iVar6 - iVar8 == 1) {
        fVar3 = _DAT_5f7600cc;
        if (fVar2 < _DAT_5f7600cc) {
          fVar3 = fVar2;
        }
        *(float *)(in_stack_00000018[0xeb] + iVar7 * 4) = fVar3;
      }
      else {
        fVar10 = ((float10)fVar2 + fVar9) * (float10)_DAT_5f760110;
        fVar11 = (float10)_DAT_5f7600cc;
        if (fVar10 < fVar11) {
          fVar11 = fVar10;
        }
        *(float *)(in_stack_00000018[0xeb] + iVar7 * 4) = (float)fVar11;
      }
      iVar7 = iVar7 + 1;
      fVar2 = (float)fVar9;
      iVar8 = iVar6;
    }
  } while ((iVar6 < param_2) && (iVar7 < 0x73));
  if ((param_2 != iVar8 && -1 < param_2 - iVar8) && (iVar7 < 0x73)) {
    for (; iVar6 < in_EAX; iVar6 = iVar6 + 1) {
      fVar9 = (float10)iVar6 * (float10)fVar1;
      fVar11 = (float10)fpatan((float10)_DAT_5f7600f4 * fVar9,(float10)1);
      fVar9 = (float10)fpatan((float10)_DAT_5f7600f8 * (float10)(double)fVar9,(float10)1);
      fVar9 = (float10)_DAT_5f760108 * (float10)(double)fVar11 * (float10)(double)fVar11 +
              fVar9 * (float10)_DAT_5f760100;
      fVar4 = (float)fVar9;
      if ((float10)_DAT_5f7600d0 < fVar9 - (float10)fVar2) break;
    }
    in_stack_00000018[iVar7 + 0x78] = iVar8;
    in_stack_00000018[iVar7 + 5] = iVar6 - iVar8;
    if (iVar6 - iVar8 == 1) {
      fVar1 = _DAT_5f7600cc;
      if (fVar2 < _DAT_5f7600cc) {
        fVar1 = fVar2;
      }
      *(float *)(in_stack_00000018[0xeb] + iVar7 * 4) = fVar1;
    }
    else {
      fVar1 = (fVar4 + fVar2) * _DAT_5f76010c;
      fVar2 = _DAT_5f7600cc;
      if (fVar1 < _DAT_5f7600cc) {
        fVar2 = fVar1;
      }
      *(float *)(in_stack_00000018[0xeb] + iVar7 * 4) = fVar2;
    }
    iVar7 = iVar7 + 1;
  }
  *in_stack_00000018 = iVar7;
  if (0x73 < iVar7) {
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,(char *)0x91,(undefined *)0x0
                           ,s_MAX_CB_too_small_5f760330);
    return ppuVar5;
  }
  iVar8 = 0;
  in_stack_00000018[iVar7 + 0x78] = in_EAX;
  in_stack_00000018[2] = iVar6;
  in_stack_00000018[3] = 0;
  in_stack_00000018[1] = 0;
  if (0 < *in_stack_00000018) {
    do {
      if (param_1 <= in_stack_00000018[3] + in_stack_00000018[iVar8 + 5]) break;
      iVar6 = in_stack_00000018[iVar8 + 5];
      in_stack_00000018[1] = in_stack_00000018[1] + 1;
      iVar8 = iVar8 + 1;
      in_stack_00000018[3] = iVar6 + in_stack_00000018[3];
    } while (iVar8 < *in_stack_00000018);
  }
  iVar6 = 0;
  in_stack_00000018[4] = 0;
  if (0 < *in_stack_00000018) {
    do {
      iVar8 = iVar6 + 5;
      if (in_stack_00000010 <= in_stack_00000018[4] + in_stack_00000018[iVar8]) {
        return (undefined **)0x0;
      }
      iVar6 = iVar6 + 1;
      in_stack_00000018[4] = in_stack_00000018[4] + in_stack_00000018[iVar8];
    } while (iVar6 < *in_stack_00000018);
  }
  return (undefined **)0x0;
}


