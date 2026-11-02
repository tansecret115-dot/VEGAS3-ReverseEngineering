/* Module: mp3plug.dll
   Function: FUN_5f703800
   Address: 5f703800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __fastcall FUN_5f703800(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int *in_EAX;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float10 in_ST0;
  double dVar10;
  float in_stack_00000014;
  float in_stack_00000018;
  int local_30;
  int *local_2c;
  uint uStack_18;
  
  dVar10 = (double)((ulonglong)uStack_18 << 0x20);
  iVar7 = 0;
  iVar5 = *in_EAX;
  local_2c = in_EAX;
  if (0 < iVar5) {
    do {
      iVar8 = 0;
      local_2c[0xf3] = 0;
      iVar5 = *in_EAX;
      bVar4 = true;
      if (0 < iVar5) {
        do {
          local_30 = iVar5;
          fVar1 = *(float *)(in_EAX[0xeb] + iVar7 * 4) - *(float *)(in_EAX[0xeb] + iVar8 * 4);
          fVar2 = in_stack_00000014;
          if (fVar1 < _DAT_5f7601b8) {
            fVar2 = _DAT_5f760250;
            if (param_2 == 0) {
              fVar2 = (float)in_ST0;
              goto LAB_5f703873;
            }
          }
          else {
LAB_5f703873:
            fVar1 = fVar1 * fVar2;
            fVar3 = _DAT_5f76024c;
            if (((param_1 == 0) && (_DAT_5f7601bc <= fVar1)) && (fVar1 <= _DAT_5f7601c0)) {
              fVar2 = fVar1 - _DAT_5f7601c4;
              fVar3 = (fVar2 * fVar2 - _DAT_5f7601c8 * fVar2) * _DAT_5f7601cc;
            }
            fVar1 = fVar1 + _DAT_5f7601d0;
            fVar1 = (_DAT_5f7601b4 * fVar1 + _DAT_5f7601d4) -
                    SQRT(fVar1 * fVar1 + (float)_DAT_5f7601d8) * _DAT_5f7601e0;
            fVar2 = _DAT_5f7601e8;
            if (_DAT_5f7601e4 < fVar1) {
              dVar10 = pow(_DAT_5f760240,(double)((fVar3 + fVar1) * _DAT_5f760248));
              fVar2 = (float)dVar10;
            }
          }
          dVar10 = (double)fVar2;
          if (bVar4) {
            if ((double)_DAT_5f7601b0 < dVar10) {
              bVar4 = false;
              local_2c[0xf4] = iVar8;
              goto LAB_5f70391b;
            }
          }
          else {
LAB_5f70391b:
            if (dVar10 < (double)_DAT_5f7601b0) {
              iVar5 = *in_EAX;
              break;
            }
            local_2c[0xf3] = local_2c[0xf3] + 1;
            local_30 = *in_EAX;
          }
          iVar8 = iVar8 + 1;
          iVar5 = local_30;
        } while (iVar8 < local_30);
      }
      uStack_18 = (uint)((ulonglong)dVar10 >> 0x20);
      iVar7 = iVar7 + 1;
      local_2c = local_2c + 3;
    } while (iVar7 < iVar5);
  }
  piVar9 = in_EAX;
  if (0 < iVar5) {
    do {
      iVar5 = FUN_5f6d9760(piVar9[0xf3] * 4);
      piVar9[0xf5] = iVar5;
      if (iVar5 == 0) {
        ppuVar6 = FUN_5f6d94e0(0x5f703b24,(char *)0x20e,(undefined *)0x0,s_out_of_memory_5f75c330);
        return ppuVar6;
      }
      iVar5 = 0;
      if (0 < piVar9[0xf3]) {
        do {
          if (uStack_18 == 0) {
            iVar7 = iVar5 + piVar9[0xf4];
LAB_5f7039d0:
            fVar2 = *(float *)(in_EAX[0xeb] + uStack_18 * 4) - *(float *)(in_EAX[0xeb] + iVar7 * 4);
            fVar1 = in_stack_00000018;
            if (fVar2 < _DAT_5f7601ec) {
              fVar1 = _DAT_5f760238;
              if (local_30 != 0) goto LAB_5f703a6c;
              fVar1 = (float)(double)((ulonglong)(double)in_ST0 >> 0x20);
            }
            fVar2 = fVar2 * fVar1;
            fVar3 = _DAT_5f760234;
            if (((param_1 == 0) && (_DAT_5f7601f0 <= fVar2)) && (fVar2 <= _DAT_5f7601f4)) {
              fVar1 = fVar2 - _DAT_5f7601f8;
              fVar3 = (fVar1 * fVar1 - _DAT_5f7601fc * fVar1) * _DAT_5f760200;
            }
            fVar2 = fVar2 + _DAT_5f760204;
            fVar2 = (_DAT_5f7601b4 * fVar2 + _DAT_5f760208) -
                    SQRT(fVar2 * fVar2 + (float)_DAT_5f760210) * _DAT_5f760218;
            fVar1 = _DAT_5f760220;
            if (_DAT_5f76021c < fVar2) {
              dVar10 = pow((double)CONCAT44((int)((ulonglong)_DAT_5f760228 >> 0x20),0x5f703a6c),
                           (double)((fVar3 + fVar2) * _DAT_5f760230));
              fVar1 = (float)dVar10;
            }
          }
          else {
            iVar7 = iVar5 + piVar9[0xf4];
            fVar1 = _DAT_5f76023c;
            if (0 < iVar7) goto LAB_5f7039d0;
          }
LAB_5f703a6c:
          *(float *)(piVar9[0xf5] + iVar5 * 4) = fVar1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar9[0xf3]);
      }
      uStack_18 = uStack_18 + 1;
      piVar9 = piVar9 + 3;
    } while ((int)uStack_18 < *in_EAX);
  }
  return (undefined **)0x0;
}


