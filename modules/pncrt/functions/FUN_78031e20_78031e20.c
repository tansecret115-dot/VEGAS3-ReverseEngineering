/* Module: pncrt.dll
   Function: FUN_78031e20
   Address: 78031e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_78031e20(uint param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 unaff_EDI;
  uint uVar12;
  float10 fVar13;
  double dVar14;
  int *piVar15;
  int local_10;
  int local_c;
  undefined8 local_8;
  
  dVar3 = (double)CONCAT44(param_4,param_3);
  dVar2 = (double)CONCAT44(param_2,param_1);
  uVar10 = FUN_78035d10();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) &&
       (((param_4._2_2_ & 0x7ff8) != 0x7ff0 || (((param_4 & 0x7ffff) == 0 && (param_3 == 0)))))) {
      if (((param_2._2_2_ & 0x7ff8) != 0x7ff8) && ((param_4._2_2_ & 0x7ff8) != 0x7ff8)) {
        FUN_78035d10();
        return (float10)_DAT_78041a38;
      }
      fVar13 = FUN_78035130(param_5,param_1,param_2,param_3,param_4);
      return fVar13;
    }
    dVar2 = (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) +
            (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    fVar13 = FUN_78035270(8,param_5,param_1,param_2,param_3,param_4,SUB84(dVar2,0),
                          (int)((ulonglong)dVar2 >> 0x20),uVar10);
    return fVar13;
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < _DAT_78037db0) {
    dVar2 = -(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) < _DAT_78037db0) {
    dVar3 = -(double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
  }
  if (dVar3 <= dVar2) {
    uVar7 = SUB84(dVar2,0);
    dVar1 = dVar2;
  }
  else {
    uVar7 = SUB84(dVar3,0);
    dVar1 = dVar3;
  }
  uVar12 = (uint)((ulonglong)dVar1 >> 0x20);
  local_8 = (double)CONCAT44(uVar12,uVar7);
  if (local_8 != _DAT_78037db0) {
    dVar2 = dVar2 / local_8;
    piVar15 = &local_c;
    param_1 = SUB84(dVar2,0);
    dVar3 = dVar3 / local_8;
    dVar14 = sqrt(dVar3 * dVar3 + dVar2 * dVar2);
    fVar13 = FUN_78035be0(SUB84(dVar14,0),(uint)((ulonglong)dVar14 >> 0x20),piVar15);
    local_8 = (double)fVar13;
    fVar13 = FUN_78035be0(SUB84(dVar1,0),uVar12,&local_10);
    dVar1 = (double)(fVar13 * (float10)local_8);
    local_8._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar9 = local_8._4_4_;
    local_8._0_4_ = SUB84(dVar1,0);
    uVar8 = (uint)local_8;
    uVar6 = CONCAT44(unaff_EDI,local_8._4_4_);
    uVar7 = (uint)local_8;
    local_8 = dVar1;
    iVar11 = FUN_78035b60(uVar7,uVar6);
    local_c = iVar11 + local_10 + local_c;
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    uVar4 = SUB84(dVar3,0);
    uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (0x400 < local_c) {
      fVar13 = FUN_78035b20(uVar8,uVar9,(short)(local_c + -0x600));
      local_8 = (double)fVar13;
      fVar13 = FUN_78035270(0x11,param_5,param_1,uVar7,uVar4,uVar5,(uint)local_8,
                            (int)((ulonglong)local_8 >> 0x20),uVar10);
      return fVar13;
    }
    if (-0x3fe < local_c) {
      fVar13 = FUN_78035b20(uVar8,uVar9,(short)local_c);
      local_8 = (double)fVar13;
      if ((uVar10 & 0x20) == 0) {
        fVar13 = FUN_78035270(0x10,param_5,param_1,uVar7,uVar4,uVar5,(uint)local_8,
                              (int)((ulonglong)local_8 >> 0x20),uVar10);
        return fVar13;
      }
      FUN_78035d10();
      return (float10)local_8;
    }
    fVar13 = FUN_78035b20(uVar8,uVar9,(short)(local_c + 0x600));
    local_8 = (double)fVar13;
    fVar13 = FUN_78035270(0x12,param_5,param_1,uVar7,uVar4,uVar5,(uint)local_8,
                          (int)((ulonglong)local_8 >> 0x20),uVar10);
    return fVar13;
  }
  FUN_78035d10();
  return (float10)_DAT_78037db0;
}


