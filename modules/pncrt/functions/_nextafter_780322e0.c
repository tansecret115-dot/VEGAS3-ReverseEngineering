/* Module: pncrt.dll
   Function: _nextafter
   Address: 780322e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _nextafter(double _X,double _Y)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 local_14;
  uint local_c;
  undefined2 uStack_8;
  ushort uStack_6;
  
                    /* 0x322e0  399  _nextafter */
  uVar5 = FUN_78035d10();
  uVar4 = _X._0_4_;
  uVar2 = CONCAT22(_X._6_2_,_X._4_2_);
  uVar3 = CONCAT22(_Y._6_2_,_Y._4_2_);
  if (((_X._6_2_ & 0x7ff0) == 0x7ff0) || ((_Y._6_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((_X._6_2_ & 0x7ff8) == 0x7ff0) && (((uVar2 & 0x7ffff) != 0 || (_X._0_4_ != 0)))) ||
       (((_Y._6_2_ & 0x7ff8) == 0x7ff0 &&
        (((uVar3 & 0x7ffff) != 0 || (CONCAT22(_Y._2_2_,_Y._0_2_) != 0)))))) {
      dVar1 = (double)CONCAT26(_Y._6_2_,CONCAT24(_Y._4_2_,CONCAT22(_Y._2_2_,_Y._0_2_))) +
              (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_));
      fVar7 = FUN_78035270(8,0x26,_X._0_4_,uVar2,CONCAT22(_Y._2_2_,_Y._0_2_),uVar3,SUB84(dVar1,0),
                           (int)((ulonglong)dVar1 >> 0x20),uVar5);
      return (double)fVar7;
    }
    if (((_X._6_2_ & 0x7ff8) == 0x7ff8) || ((_Y._6_2_ & 0x7ff8) == 0x7ff8)) {
      fVar7 = FUN_78035130(0x26,_X._0_4_,uVar2,CONCAT22(_Y._2_2_,_Y._0_2_),uVar3);
      return (double)fVar7;
    }
  }
  if ((double)CONCAT26(_Y._6_2_,CONCAT24(_Y._4_2_,CONCAT22(_Y._2_2_,_Y._0_2_))) ==
      (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_))) {
    FUN_78035d10();
    return (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_));
  }
  if ((double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)) == _DAT_78037dc0) {
    local_c = 1;
    if ((double)CONCAT26(_Y._6_2_,CONCAT24(_Y._4_2_,CONCAT22(_Y._2_2_,_Y._0_2_))) <=
        (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_))) {
      uVar6 = 0x80000000;
      uStack_8 = 0;
      uStack_6 = 0x8000;
    }
    else {
      uVar6 = 0;
      uStack_8 = 0;
      uStack_6 = 0;
    }
  }
  else {
    uVar6 = CONCAT22(uStack_6,uStack_8);
  }
  if (((_DAT_78037dc0 < (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_))) &&
      ((double)CONCAT26(_Y._6_2_,CONCAT24(_Y._4_2_,CONCAT22(_Y._2_2_,_Y._0_2_))) <
       (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)))) ||
     (((double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)) < _DAT_78037dc0 &&
      ((double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)) <
       (double)CONCAT26(_Y._6_2_,CONCAT24(_Y._4_2_,CONCAT22(_Y._2_2_,_Y._0_2_))))))) {
    local_c = _X._0_4_ - 1;
    uStack_8 = _X._4_2_;
    uStack_6 = _X._6_2_;
    uVar6 = uVar2;
    if (_X._0_4_ != 0) goto LAB_780324be;
    uVar6 = uVar2 - 1;
  }
  else {
    if ((((double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)) <= _DAT_78037dc0) ||
        ((double)CONCAT26(_Y._6_2_,CONCAT24(_Y._4_2_,CONCAT22(_Y._2_2_,_Y._0_2_))) <=
         (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)))) &&
       ((_DAT_78037dc0 <= (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)) ||
        ((double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_)) <=
         (double)CONCAT26(_Y._6_2_,CONCAT24(_Y._4_2_,CONCAT22(_Y._2_2_,_Y._0_2_)))))))
    goto LAB_780324be;
    local_c = _X._0_4_ + 1;
    uStack_8 = _X._4_2_;
    uStack_6 = _X._6_2_;
    uVar6 = uVar2;
    if (local_c != 0) goto LAB_780324be;
    uVar6 = uVar2 + 1;
  }
  uStack_8 = (undefined2)uVar6;
  uStack_6 = (ushort)(uVar6 >> 0x10);
LAB_780324be:
  if (((uStack_6 & 0x7ff0) == 0) && (((uVar6 & 0xfffff) != 0 || (local_c != 0)))) {
    fVar7 = FUN_78035be0(local_c,uVar6,(int *)&_X);
    local_14 = SUB84((double)fVar7,0);
    fVar7 = FUN_78035b20(local_14,(int)((ulonglong)(double)fVar7 >> 0x20),(short)_X._0_4_ + 0x600);
    local_c = SUB84((double)fVar7,0);
    fVar7 = FUN_78035270(0x12,0x26,uVar4,uVar2,CONCAT22(_Y._2_2_,_Y._0_2_),uVar3,local_c,
                         (int)((ulonglong)(double)fVar7 >> 0x20),uVar5);
    return (double)fVar7;
  }
  if (((uVar6 != 0x7ff00000) || (local_c != 0)) && ((uVar6 != 0xfff00000 || (local_c != 0)))) {
    FUN_78035d10();
    return (double)CONCAT26(uStack_6,CONCAT24(uStack_8,local_c));
  }
  fVar7 = FUN_78035be0(local_c,uVar6,(int *)&_X);
  local_14 = SUB84((double)fVar7,0);
  fVar7 = FUN_78035b20(local_14,(int)((ulonglong)(double)fVar7 >> 0x20),(short)_X._0_4_ + -0x600);
  local_c = SUB84((double)fVar7,0);
  fVar7 = FUN_78035270(0x11,0x26,uVar4,uVar2,CONCAT22(_Y._2_2_,_Y._0_2_),uVar3,local_c,
                       (int)((ulonglong)(double)fVar7 >> 0x20),uVar5);
  return (double)fVar7;
}


