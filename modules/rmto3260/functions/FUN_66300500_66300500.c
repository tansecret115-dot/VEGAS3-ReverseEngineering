/* Module: rmto3260.dll
   Function: FUN_66300500
   Address: 66300500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_66300500(ushort param_1,ushort param_2,short param_3,undefined2 param_4,ushort param_5,
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
  _DAT_66311df0 = CONCAT22(DAT_66311df0_2,param_4);
  DAT_66311e10 = DAT_66311e10 + 1;
  uVar8 = (uint)param_2;
  DAT_66311dfc = CONCAT22(DAT_66311dfc._2_2_,param_2);
  DAT_66311df8 = CONCAT22(DAT_66311df8._2_2_,param_6);
  if (((((int)((ulonglong)uVar2 % (ulonglong)(longlong)(int)uVar8) == 0) && (param_2 <= param_1)) &&
      (uVar2 % 0x26 == 0)) && ((uVar8 % 0x26 == 0 && (param_6 % 0x26 == 0)))) {
    uVar3 = (ushort)((ulonglong)uVar2 / (ulonglong)(longlong)(int)uVar8);
    _DAT_66311d9c = CONCAT22(DAT_66311d9c_2,uVar3);
    if ((param_5 < uVar3) && (param_3 == 0)) {
      if (DAT_66311e04 == 0) {
        DAT_66311e04 = (int)malloc((uint)uVar3 << 1);
        uVar3 = DAT_66311d9c;
        if ((void *)DAT_66311e04 == (void *)0x0) {
          return 0xffffffff;
        }
      }
      uVar12 = 0;
      uVar7 = 0;
      uVar10 = 0;
      if (uVar3 != 0) {
        do {
          *(ushort *)(DAT_66311e04 + (uint)uVar10 * 2) = uVar7;
          uVar7 = uVar7 + param_5;
          if (DAT_66311d9c <= uVar7) {
            uVar7 = uVar12 + 1;
            uVar12 = uVar7;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < DAT_66311d9c);
      }
      if (DAT_66311df0 == 0) {
        sVar4 = 0;
      }
      else {
        uVar13 = _DAT_66311d9c & 0xffff;
        uVar8 = _DAT_66311df0 & 0xffff;
        if ((int)((ulonglong)uVar13 % (ulonglong)(longlong)(int)uVar8) == 0) {
          sVar4 = (short)((ulonglong)uVar13 / (ulonglong)(longlong)(int)uVar8);
        }
        else {
          sVar4 = (short)((ulonglong)uVar13 / (ulonglong)(longlong)(int)uVar8) + 1;
        }
      }
      DAT_66311d98 = CONCAT22(DAT_66311d98._2_2_,sVar4);
      if (DAT_66311df0 < 0x20) {
        sVar11 = (short)((DAT_66311dfc & 0xffff) / 0x26) * 0x40;
        DAT_66311df4 = CONCAT22(DAT_66311df4._2_2_,sVar11);
        *param_7 = sVar11 * sVar4 + param_1;
        pcVar14 = malloc_exref;
        if (DAT_66311e1c == 0) {
          DAT_66311e1c = (int)malloc((uVar2 * 2) / 0x26);
        }
        if (DAT_66311e20 == 0) {
          DAT_66311e20 = (int)malloc((uVar2 * 2) / 0x26);
        }
        if ((DAT_66311df0 != 0) && (DAT_66311e10 == 1)) {
          if (DAT_66311e08 == 0) {
            return 0xffffffff;
          }
          if (DAT_66311e0c == 0) {
            return 0xffffffff;
          }
          DAT_66311e14 = (int)malloc((uVar2 * 2) / 0x26);
          if (DAT_66311e1c == 0) {
            return 0xffffffff;
          }
          if ((void *)DAT_66311e14 == (void *)0x0) {
            return 0xffffffff;
          }
          DAT_66311e18 = (int)malloc((_DAT_66311d9c & 0xffff) << 2);
          if ((void *)DAT_66311e18 == (void *)0x0) {
            return 0xffffffff;
          }
          _param_4 = 0;
          uVar8 = _DAT_66311df0;
          if (DAT_66311d9c != 0) {
            do {
              uVar13 = _param_4 & 0xffff;
              iVar9 = uVar13 * 4;
              pvVar5 = malloc((uVar8 & 0xffff) * 2 - 2);
              *(void **)(DAT_66311e18 + iVar9) = pvVar5;
              uVar3 = 0;
              if (*(int *)(DAT_66311e18 + iVar9) == 0) {
                return 0xffffffff;
              }
              _param_3 = 0;
              uVar6 = _param_4 -
                      (int)((ulonglong)uVar13 % (ulonglong)(longlong)(int)(_DAT_66311df0 & 0xffff));
              uVar8 = _DAT_66311df0;
              if (DAT_66311df0 != 0) {
                do {
                  if ((uint)uVar3 + (uVar6 & 0xffff) != uVar13) {
                    *(ushort *)(*(int *)(DAT_66311e18 + iVar9) + (_param_3 & 0xffff) * 2) =
                         (short)uVar6 + uVar3;
                    _param_3 = _param_3 + 1;
                    uVar8 = _DAT_66311df0;
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 < DAT_66311df0);
              }
              _param_4 = _param_4 + 1;
              pcVar14 = malloc_exref;
            } while ((ushort)_param_4 < DAT_66311d9c);
          }
          _param_4 = 0;
          if (uVar2 / 0x26 != 0) {
            uVar13 = 0;
            do {
              uVar6 = (uVar13 * 0x26) / (DAT_66311dfc & 0xffff);
              iVar9 = uVar13 * 0x26 - uVar6 * (DAT_66311dfc & 0xffff);
              *(short *)(DAT_66311e14 + uVar13 * 2) =
                   (((short)(iVar9 / 0x26) + (short)(iVar9 >> 0x1f)) -
                   (short)((longlong)iVar9 * 0x6bca1af3 >> 0x3f)) * 0x40 +
                   (short)(uVar6 / (uVar8 & 0xffff)) * (short)DAT_66311df4 +
                   (short)DAT_66311dfc * (short)_DAT_66311d9c;
              _param_4 = _param_4 + 1;
              uVar13 = _param_4 & 0xffff;
              pcVar14 = malloc_exref;
              uVar8 = _DAT_66311df0;
            } while (uVar13 < uVar2 / 0x26);
          }
        }
        if (DAT_66311e08 == 0) {
          DAT_66311e08 = (*pcVar14)(DAT_66311df4 & 0xffff);
        }
        if (DAT_66311e0c == 0) {
          DAT_66311e0c = (*pcVar14)(DAT_66311df4 & 0xffff);
        }
        DAT_66311dec._0_2_ = 0;
        uVar1 = (ulonglong)*param_7 % (ulonglong)(longlong)(int)(DAT_66311df8 & 0xffff);
        if ((int)uVar1 != 0) {
          DAT_66311dec._0_2_ = (short)DAT_66311df8 - (short)uVar1;
          *param_7 = *param_7 + (short)DAT_66311dec;
        }
        DAT_66311e00 = 1;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


