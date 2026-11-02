/* Module: pncrt.dll
   Function: modf
   Address: 78034250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl modf(double _X,double *_Y)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  
                    /* 0x34250  677  modf */
  uVar2 = _X._0_4_;
  uVar3 = FUN_78035d10();
  FUN_78035d10();
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    uVar1 = (uint)((ulonglong)_X >> 0x20);
    *(undefined4 *)_Y = DAT_78041a40;
    *(undefined4 *)((int)_Y + 4) = DAT_78041a44;
    iVar4 = FUN_78035b80(_X._0_4_,uVar1);
    if (iVar4 < 1) {
LAB_780342f4:
      dVar6 = _X - _DAT_78037e48;
      _X._0_4_ = SUB84(dVar6,0);
      *_Y = dVar6;
      fVar5 = FUN_780351b0(8,0x1c,uVar2,uVar1,_X._0_4_,(int)((ulonglong)dVar6 >> 0x20),uVar3);
      return (double)fVar5;
    }
    if (2 < iVar4) {
      if (iVar4 == 3) {
        *_Y = _X;
        fVar5 = FUN_780350e0(0x1c,_X._0_4_,uVar1);
        return (double)fVar5;
      }
      goto LAB_780342f4;
    }
    *_Y = _X;
    dVar6 = _copysign(0.0,_X);
  }
  else {
    if (_X == _DAT_78037e50) {
      *_Y = _X;
      goto LAB_78034387;
    }
    fVar5 = FUN_78035da0(_X);
    dVar6 = _X - (double)fVar5;
    *_Y = (double)fVar5;
  }
  _X._0_4_ = SUB84(dVar6,0);
  _X._4_2_ = (undefined2)((ulonglong)dVar6 >> 0x20);
  _X._6_2_ = (ushort)((ulonglong)dVar6 >> 0x30);
LAB_78034387:
  FUN_78035d10();
  return (double)CONCAT26(_X._6_2_,CONCAT24(_X._4_2_,_X._0_4_));
}


