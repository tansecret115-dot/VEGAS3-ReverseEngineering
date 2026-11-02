/* Module: pncrt.dll
   Function: ldexp
   Address: 78033ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl ldexp(double _X,int _Y)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  short sVar9;
  int local_4;
  
                    /* 0x33ff0  660  ldexp */
  uVar3 = _X._0_4_;
  uVar5 = FUN_78035d10();
  uVar1 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    if (_X != _DAT_78037e40) {
      fVar7 = FUN_78035be0(_X._0_4_,uVar1,&local_4);
      dVar8 = (double)fVar7;
      _X._0_4_ = SUB84(dVar8,0);
      local_4 = _Y + local_4;
      if (0xa00 < local_4) {
        dVar8 = _copysign((double)CONCAT44(DAT_78041a3c,DAT_78041a38),dVar8);
        _X._0_4_ = SUB84((double)_Y,0);
        fVar7 = FUN_78035270(0x11,0x19,uVar3,uVar1,_X._0_4_,(int)((ulonglong)(double)_Y >> 0x20),
                             SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),uVar5);
        return (double)fVar7;
      }
      uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
      sVar9 = (short)local_4;
      if (0x400 < local_4) {
        fVar7 = FUN_78035b20(_X._0_4_,uVar2,sVar9 + -0x600);
        _X._0_4_ = SUB84((double)fVar7,0);
        uVar4 = _X._0_4_;
        _X._0_4_ = SUB84((double)_Y,0);
        fVar7 = FUN_78035270(0x11,0x19,uVar3,uVar1,_X._0_4_,(int)((ulonglong)(double)_Y >> 0x20),
                             uVar4,(int)((ulonglong)(double)fVar7 >> 0x20),uVar5);
        return (double)fVar7;
      }
      if (local_4 < -0x9fd) {
        _X._0_4_ = SUB84((double)_Y,0);
        fVar7 = FUN_78035270(0x12,0x19,uVar3,uVar1,_X._0_4_,(int)((ulonglong)(double)_Y >> 0x20),0,0
                             ,uVar5);
        return (double)fVar7;
      }
      if (-0x3fe < local_4) {
        fVar7 = FUN_78035b20(_X._0_4_,uVar2,sVar9);
        FUN_78035d10();
        return (double)fVar7;
      }
      fVar7 = FUN_78035b20(_X._0_4_,uVar2,sVar9 + 0x600);
      _X._0_4_ = SUB84((double)fVar7,0);
      uVar4 = _X._0_4_;
      _X._0_4_ = SUB84((double)_Y,0);
      fVar7 = FUN_78035270(0x12,0x19,uVar3,uVar1,_X._0_4_,(int)((ulonglong)(double)_Y >> 0x20),uVar4
                           ,(int)((ulonglong)(double)fVar7 >> 0x20),uVar5);
      return (double)fVar7;
    }
LAB_780340a3:
    FUN_78035d10();
    return _X;
  }
  iVar6 = FUN_78035b80(_X._0_4_,uVar1);
  if (0 < iVar6) {
    if (iVar6 < 3) goto LAB_780340a3;
    if (iVar6 == 3) {
      _X._0_4_ = SUB84((double)_Y,0);
      fVar7 = FUN_78035130(0x19,uVar3,uVar1,_X._0_4_,(int)((ulonglong)(double)_Y >> 0x20));
      return (double)fVar7;
    }
  }
  dVar8 = _X - _DAT_78037e38;
  _X._0_4_ = SUB84((double)_Y,0);
  fVar7 = FUN_78035270(8,0x19,uVar3,uVar1,_X._0_4_,(int)((ulonglong)(double)_Y >> 0x20),
                       SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),uVar5);
  return (double)fVar7;
}


