/* Module: vegas30k.dll
   Function: FUN_01156960
   Address: 01156960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01156960(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  int iVar16;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar15 = *(uint *)(param_1 + 0x60);
  if ((uVar15 & 1) == 0) {
    FUN_01155f80(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((uVar15 & 4) != 0) {
      FUN_01155fb0(param_1,"Invalid cHRM after IDAT");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((uVar15 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_01155fb0(param_1,"Duplicate cHRM chunk");
        FUN_011561f0(param_1,param_3);
        return;
      }
    }
    else {
      FUN_01155fb0(param_1,"Missing PLTE before cHRM");
    }
  }
  if (param_3 != 0x20) {
    FUN_01155fb0(param_1,"Incorrect cHRM chunk length");
    FUN_011561f0(param_1,param_3);
    return;
  }
  FUN_011561c0();
  uVar15 = FUN_01156170();
  local_10 = (ulonglong)uVar15;
  fVar7 = (float)local_10 * _DAT_011e7de8;
  FUN_011561c0();
  uVar15 = FUN_01156170();
  local_10 = (ulonglong)uVar15;
  fVar8 = (float)local_10 * _DAT_011e7de8;
  if (((fVar7 < _DAT_011dd160) || (dVar1 = (double)fVar7, (float)_DAT_011e8030 < fVar7)) ||
     ((fVar8 < _DAT_011dd160 ||
      ((dVar2 = (double)fVar8, (float)_DAT_011e8030 < fVar8 ||
       ((float)_DAT_011dad58 < fVar8 + fVar7)))))) {
    FUN_01155fb0(param_1,"Invalid cHRM white point");
    FUN_011561f0(param_1,0x18);
  }
  else {
    FUN_011561c0();
    uVar15 = FUN_01156170();
    local_18 = (ulonglong)uVar15;
    fVar9 = (float)local_18 * _DAT_011e7de8;
    FUN_011561c0();
    uVar15 = FUN_01156170();
    local_18 = (ulonglong)uVar15;
    fVar10 = (float)local_18 * _DAT_011e7de8;
    if ((((fVar9 < _DAT_011dd160) || (dVar3 = (double)fVar9, (float)_DAT_011e8030 < fVar9)) ||
        (fVar10 < _DAT_011dd160)) ||
       ((dVar4 = (double)fVar10, (float)_DAT_011e8030 < fVar10 ||
        ((float)_DAT_011dad58 < fVar10 + fVar9)))) {
      FUN_01155fb0(param_1,"Invalid cHRM red point");
      FUN_011561f0(param_1,0x10);
      return;
    }
    FUN_011561c0();
    uVar15 = FUN_01156170();
    local_28 = (ulonglong)uVar15;
    fVar11 = (float)local_28 * _DAT_011e7de8;
    FUN_011561c0();
    uVar15 = FUN_01156170();
    local_28 = (ulonglong)uVar15;
    fVar12 = (float)local_28 * _DAT_011e7de8;
    if (((fVar11 < _DAT_011dd160) || (dVar5 = (double)fVar11, (float)_DAT_011e8030 < fVar11)) ||
       ((fVar12 < _DAT_011dd160 ||
        ((dVar6 = (double)fVar12, (float)_DAT_011e8030 < fVar12 ||
         ((float)_DAT_011dad58 < fVar12 + fVar11)))))) {
      FUN_01155fb0(param_1,"Invalid cHRM green point");
      FUN_011561f0(param_1,8);
      return;
    }
    FUN_011561c0();
    uVar15 = FUN_01156170();
    fVar13 = (float)uVar15 * _DAT_011e7de8;
    FUN_011561c0();
    uVar15 = FUN_01156170();
    fVar14 = (float)uVar15 * _DAT_011e7de8;
    if ((((fVar13 < _DAT_011dd160) || (_DAT_011e802c < fVar13)) || (fVar14 < _DAT_011dd160)) ||
       ((_DAT_011e802c < fVar14 || (_DAT_011dad68 < fVar14 + fVar13)))) {
      FUN_01155fb0(param_1,"Invalid cHRM blue point");
      FUN_011561f0(param_1,0);
      return;
    }
    iVar16 = FUN_011561f0(param_1,0);
    if (iVar16 == 0) {
      local_20 = SUB84(dVar4,0);
      uStack_1c = (undefined4)((ulonglong)dVar4 >> 0x20);
      local_18._0_4_ = SUB84(dVar3,0);
      local_18._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_10._0_4_ = SUB84(dVar2,0);
      local_10._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      local_38 = SUB84(dVar1,0);
      uStack_34 = (undefined4)((ulonglong)dVar1 >> 0x20);
      local_30 = SUB84(dVar6,0);
      uStack_2c = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_28._0_4_ = SUB84(dVar5,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
        FUN_01127f80(param_1,param_2,dVar1,dVar2,dVar3,dVar4,dVar5,dVar6,(double)fVar13,
                     (double)fVar14);
        return;
      }
      if (((((float)_DAT_011dbdc0 < ABS(fVar7 - _DAT_011e8028)) ||
           ((float)_DAT_011dbdc0 < ABS(fVar8 - _DAT_011e8024))) ||
          (((float)_DAT_011dbdc0 < ABS(fVar9 - _DAT_011e8020) ||
           ((((float)_DAT_011dbdc0 < ABS(fVar10 - _DAT_011e801c) ||
             ((float)_DAT_011dbdc0 < ABS(fVar11 - _DAT_011e8018))) ||
            ((float)_DAT_011dbdc0 < ABS(fVar12 - _DAT_011e8014))))))) ||
         (((float)_DAT_011dbdc0 < ABS(fVar13 - _DAT_011e8010) ||
          ((float)_DAT_011dbdc0 < ABS(fVar14 - _DAT_011e800c))))) {
        FUN_01155fb0(param_1,"Ignoring incorrect cHRM value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"wx=%f, wy=%f, rx=%f, ry=%f\n",local_38,uStack_34,
                (undefined4)local_10,local_10._4_4_,(undefined4)local_18,local_18._4_4_,local_20,
                uStack_1c);
        fprintf((FILE *)(_iob_exref + 0x40),"gx=%f, gy=%f, bx=%f, by=%f\n",(undefined4)local_28,
                local_28._4_4_,local_30,uStack_2c,(double)fVar13,(double)fVar14);
        return;
      }
    }
  }
  return;
}


