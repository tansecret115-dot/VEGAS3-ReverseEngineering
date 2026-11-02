/* Module: mp3plug.dll
   Function: FUN_5f7032b0
   Address: 5f7032b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __fastcall FUN_5f7032b0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  int in_stack_00000014;
  int *in_stack_00000018;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_5c;
  int local_58;
  
  local_58 = 0;
  local_5c = 0;
  fVar10 = FUN_5f702f20(param_1,0);
  iVar6 = 0;
  fVar2 = (float)fVar10;
  iVar9 = *(int *)(in_stack_00000014 + 4);
  if (0 < iVar9) {
    fVar1 = (_DAT_5f760114 * (float)in_ST0) / (float)in_EAX;
    iVar5 = 0;
    do {
      iVar8 = *(int *)(in_stack_00000014 + 0xc + iVar6 * 4) +
              *(int *)(in_stack_00000014 + 100 + iVar6 * 4);
      fVar10 = (float10)fpatan((float10)_DAT_5f76011c * (float10)iVar8 * (float10)fVar1,(float10)1);
      fVar11 = (float10)fpatan((float10)_DAT_5f760120 *
                               (float10)(double)((float10)iVar8 * (float10)fVar1),(float10)1);
      fVar12 = (float10)fpatan((float10)_DAT_5f760134 * (float10)iVar5 * (float10)fVar1,(float10)1);
      fVar13 = (float10)fpatan((float10)_DAT_5f760138 *
                               (float10)(double)((float10)iVar5 * (float10)fVar1),(float10)1);
      fVar10 = (float10)(double)((float10)_DAT_5f760130 * (float10)(double)fVar10 *
                                 (float10)(double)fVar10 + fVar11 * (float10)_DAT_5f760128) -
               ((float10)_DAT_5f760148 * (float10)(double)fVar12 * (float10)(double)fVar12 +
               fVar13 * (float10)_DAT_5f760140);
      fVar3 = (float)fVar10;
      if (fVar10 < (float10)_DAT_5f76014c) {
        local_c0 = 1;
        iVar7 = iVar6;
        do {
          fVar10 = (float10)(*(int *)(in_stack_00000014 + 0x10 + iVar7 * 4) + iVar8) *
                   (float10)fVar1;
          fVar11 = (float10)fpatan((float10)_DAT_5f760180 * fVar10,(float10)1);
          fVar10 = (float10)fpatan((float10)_DAT_5f760184 * (float10)(double)fVar10,(float10)1);
          fVar12 = (float10)fpatan((float10)_DAT_5f760194 * (float10)iVar5 * (float10)fVar1,
                                   (float10)1);
          fVar13 = (float10)fpatan((float10)_DAT_5f760198 *
                                   (float10)(double)((float10)iVar5 * (float10)fVar1),(float10)1);
          iVar6 = iVar7;
          if ((float10)_DAT_5f7601ac <=
              (float10)(double)((float10)_DAT_5f760190 * (float10)(double)fVar11 *
                                (float10)(double)fVar11 + fVar10 * (float10)_DAT_5f760188) -
              ((float10)_DAT_5f7601a8 * (float10)(double)fVar12 * (float10)(double)fVar12 +
              fVar13 * (float10)_DAT_5f7601a0)) break;
          iVar6 = iVar7 + 1;
          iVar8 = *(int *)(in_stack_00000014 + 0xc + iVar6 * 4) +
                  *(int *)(in_stack_00000014 + 0x68 + iVar7 * 4);
          iVar7 = iVar6;
        } while (iVar8 < in_EAX);
        local_bc = iVar8 - iVar5;
      }
      else {
        iVar5 = iVar8 - iVar5;
        local_c0 = 1;
        local_bc = iVar5;
        if (_DAT_5f760154 < fVar3 * _DAT_5f760150) {
          local_c0 = 1;
          do {
            local_c0 = local_c0 + 1;
            if ((float)(iVar5 % local_c0) != _DAT_5f760158) {
              do {
                local_c0 = local_c0 + 1;
              } while ((float)(iVar5 % local_c0) != _DAT_5f76015c);
            }
            local_bc = iVar5 / local_c0;
          } while ((local_bc != 1) && (_DAT_5f76017c < fVar3 / (float)local_c0));
        }
      }
      local_b8 = 0;
      if (0 < local_c0) {
        do {
          iVar9 = local_bc + local_58;
          fVar10 = (float10)fpatan((float10)_DAT_5f760160 * (float10)iVar9 * (float10)fVar1,
                                   (float10)1);
          fVar11 = (float10)fpatan((float10)_DAT_5f760164 *
                                   (float10)(double)((float10)iVar9 * (float10)fVar1),(float10)1);
          fVar10 = (float10)_DAT_5f760170 * (float10)(double)fVar10 * (float10)(double)fVar10 +
                   fVar11 * (float10)_DAT_5f760168;
          in_stack_00000018[local_5c + 0x78] = local_58;
          in_stack_00000018[local_5c + 5] = local_bc;
          if (local_bc == 1) {
            fVar3 = _DAT_5f7600cc;
            if (fVar2 < _DAT_5f7600cc) {
              fVar3 = fVar2;
            }
            *(float *)(in_stack_00000018[0xeb] + local_5c * 4) = fVar3;
          }
          else {
            fVar12 = ((float10)fVar2 + fVar10) * (float10)_DAT_5f760174;
            fVar11 = (float10)_DAT_5f7600cc;
            if (fVar12 < fVar11) {
              fVar11 = fVar12;
            }
            *(float *)(in_stack_00000018[0xeb] + local_5c * 4) = (float)fVar11;
          }
          local_5c = local_5c + 1;
          fVar2 = (float)fVar10;
          local_b8 = local_b8 + 1;
          local_58 = iVar9;
        } while (local_b8 < local_c0);
        iVar9 = *(int *)(in_stack_00000014 + 4);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar8;
    } while (iVar6 < iVar9);
  }
  *in_stack_00000018 = local_5c;
  if (0x73 < local_5c) {
    ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,(char *)0x160,
                           (undefined *)0x0,s_MAX_CB_too_small_5f760330);
    return ppuVar4;
  }
  in_stack_00000018[local_5c + 0x78] = in_EAX;
  in_stack_00000018[2] = in_EAX;
  iVar9 = 0;
  in_stack_00000018[1] = 0;
  in_stack_00000018[3] = 0;
  if (0 < *in_stack_00000018) {
    do {
      if (param_2 <= in_stack_00000018[3] + in_stack_00000018[iVar9 + 5]) break;
      iVar6 = in_stack_00000018[iVar9 + 5];
      in_stack_00000018[1] = in_stack_00000018[1] + 1;
      iVar9 = iVar9 + 1;
      in_stack_00000018[3] = iVar6 + in_stack_00000018[3];
    } while (iVar9 < *in_stack_00000018);
  }
  iVar9 = 0;
  in_stack_00000018[4] = 0;
  if (0 < *in_stack_00000018) {
    do {
      iVar6 = iVar9 + 5;
      if (param_1 <= in_stack_00000018[4] + in_stack_00000018[iVar6]) {
        return (undefined **)0x0;
      }
      iVar9 = iVar9 + 1;
      in_stack_00000018[4] = in_stack_00000018[4] + in_stack_00000018[iVar6];
    } while (iVar9 < *in_stack_00000018);
  }
  return (undefined **)0x0;
}


