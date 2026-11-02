/* Module: rmbe3260.dll
   Function: FUN_6604d2e0
   Address: 6604d2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_6604d2e0(ushort param_1,ushort param_2,short param_3,undefined2 param_4,ushort param_5,
            ushort param_6,ushort *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  void *pvVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  code *pcVar14;
  
  uVar2 = (uint)param_1;
  _DAT_66075390 = CONCAT22(DAT_66075390_2,param_4);
  DAT_660753b0 = DAT_660753b0 + 1;
  uVar8 = (uint)param_2;
  DAT_6607539c = CONCAT22(DAT_6607539c._2_2_,param_2);
  DAT_66075398 = CONCAT22(DAT_66075398._2_2_,param_6);
  if (((((int)((ulonglong)uVar2 % (ulonglong)(longlong)(int)uVar8) == 0) && (param_2 <= param_1)) &&
      (uVar2 % 0x26 == 0)) && ((uVar8 % 0x26 == 0 && (param_6 % 0x26 == 0)))) {
    uVar3 = (ushort)((ulonglong)uVar2 / (ulonglong)(longlong)(int)uVar8);
    _DAT_6607533c = CONCAT22(DAT_6607533c_2,uVar3);
    if ((param_5 < uVar3) && (param_3 == 0)) {
      if (DAT_660753a4 == 0) {
        DAT_660753a4 = (int)malloc((uint)uVar3 << 1);
        uVar3 = DAT_6607533c;
        if ((void *)DAT_660753a4 == (void *)0x0) {
          return 0xffffffff;
        }
      }
      uVar12 = 0;
      uVar7 = 0;
      uVar10 = 0;
      if (uVar3 != 0) {
        do {
          *(ushort *)(DAT_660753a4 + (uint)uVar10 * 2) = uVar7;
          uVar7 = uVar7 + param_5;
          if (DAT_6607533c <= uVar7) {
            uVar7 = uVar12 + 1;
            uVar12 = uVar7;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < DAT_6607533c);
      }
      if (DAT_66075390 == 0) {
        sVar4 = 0;
      }
      else {
        uVar13 = _DAT_6607533c & 0xffff;
        uVar8 = _DAT_66075390 & 0xffff;
        if ((int)((ulonglong)uVar13 % (ulonglong)(longlong)(int)uVar8) == 0) {
          sVar4 = (short)((ulonglong)uVar13 / (ulonglong)(longlong)(int)uVar8);
        }
        else {
          sVar4 = (short)((ulonglong)uVar13 / (ulonglong)(longlong)(int)uVar8) + 1;
        }
      }
      DAT_66075338 = CONCAT22(DAT_66075338._2_2_,sVar4);
      if (DAT_66075390 < 0x20) {
        sVar11 = (short)((DAT_6607539c & 0xffff) / 0x26) * 0x40;
        DAT_66075394 = CONCAT22(DAT_66075394._2_2_,sVar11);
        *param_7 = sVar11 * sVar4 + param_1;
        pcVar14 = malloc_exref;
        if (DAT_660753bc == 0) {
          DAT_660753bc = (int)malloc((uVar2 * 2) / 0x26);
        }
        if (DAT_660753c0 == 0) {
          DAT_660753c0 = (int)malloc((uVar2 * 2) / 0x26);
        }
        if ((DAT_66075390 != 0) && (DAT_660753b0 == 1)) {
          if (DAT_660753a8 == 0) {
            return 0xffffffff;
          }
          if (DAT_660753ac == 0) {
            return 0xffffffff;
          }
          DAT_660753b4 = (int)malloc((uVar2 * 2) / 0x26);
          if (DAT_660753bc == 0) {
            return 0xffffffff;
          }
          if ((void *)DAT_660753b4 == (void *)0x0) {
            return 0xffffffff;
          }
          DAT_660753b8 = (int)malloc((_DAT_6607533c & 0xffff) << 2);
          if ((void *)DAT_660753b8 == (void *)0x0) {
            return 0xffffffff;
          }
          _param_4 = 0;
          uVar8 = _DAT_66075390;
          if (DAT_6607533c != 0) {
            do {
              uVar13 = _param_4 & 0xffff;
              iVar9 = uVar13 * 4;
              pvVar5 = malloc((uVar8 & 0xffff) * 2 - 2);
              *(void **)(DAT_660753b8 + iVar9) = pvVar5;
              uVar3 = 0;
              if (*(int *)(DAT_660753b8 + iVar9) == 0) {
                return 0xffffffff;
              }
              _param_3 = 0;
              uVar6 = _param_4 -
                      (int)((ulonglong)uVar13 % (ulonglong)(longlong)(int)(_DAT_66075390 & 0xffff));
              uVar8 = _DAT_66075390;
              if (DAT_66075390 != 0) {
                do {
                  if ((uint)uVar3 + (uVar6 & 0xffff) != uVar13) {
                    *(ushort *)(*(int *)(DAT_660753b8 + iVar9) + (_param_3 & 0xffff) * 2) =
                         (short)uVar6 + uVar3;
                    _param_3 = _param_3 + 1;
                    uVar8 = _DAT_66075390;
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 < DAT_66075390);
              }
              _param_4 = _param_4 + 1;
              pcVar14 = malloc_exref;
            } while ((ushort)_param_4 < DAT_6607533c);
          }
          _param_4 = 0;
          if (uVar2 / 0x26 != 0) {
            uVar13 = 0;
            do {
              uVar6 = (uVar13 * 0x26) / (DAT_6607539c & 0xffff);
              iVar9 = uVar13 * 0x26 - uVar6 * (DAT_6607539c & 0xffff);
              *(short *)(DAT_660753b4 + uVar13 * 2) =
                   (((short)(iVar9 / 0x26) + (short)(iVar9 >> 0x1f)) -
                   (short)((longlong)iVar9 * 0x6bca1af3 >> 0x3f)) * 0x40 +
                   (short)(uVar6 / (uVar8 & 0xffff)) * (short)DAT_66075394 +
                   (short)DAT_6607539c * (short)_DAT_6607533c;
              _param_4 = _param_4 + 1;
              uVar13 = _param_4 & 0xffff;
              pcVar14 = malloc_exref;
              uVar8 = _DAT_66075390;
            } while (uVar13 < uVar2 / 0x26);
          }
        }
        if (DAT_660753a8 == 0) {
          DAT_660753a8 = (*pcVar14)(DAT_66075394 & 0xffff);
        }
        if (DAT_660753ac == 0) {
          DAT_660753ac = (*pcVar14)(DAT_66075394 & 0xffff);
        }
        DAT_6607538c._0_2_ = 0;
        uVar1 = (ulonglong)*param_7 % (ulonglong)(longlong)(int)(DAT_66075398 & 0xffff);
        if ((int)uVar1 != 0) {
          DAT_6607538c._0_2_ = (short)DAT_66075398 - (short)uVar1;
          *param_7 = *param_7 + (short)DAT_6607538c;
        }
        DAT_660753a0 = 1;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


