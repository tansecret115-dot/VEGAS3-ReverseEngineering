/* Module: pncrt.dll
   Function: _logb
   Address: 780321c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _logb(double _X)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  int local_4;
  
                    /* 0x321c0  329  _logb */
  uVar2 = FUN_78035d10();
  uVar1 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    if (_X == _DAT_78037dc0) {
      fVar4 = FUN_780351b0(4,0x25,_X._0_4_,uVar1,SUB84(-_DAT_78041a38,0),
                           (int)((ulonglong)-_DAT_78041a38 >> 0x20),uVar2);
      return (double)fVar4;
    }
    FUN_78035be0(_X._0_4_,uVar1,&local_4);
    FUN_78035d10();
    return (double)(local_4 + -1);
  }
  iVar3 = FUN_78035b80(_X._0_4_,uVar1);
  if (0 < iVar3) {
    if (iVar3 < 3) {
      FUN_78035d10();
      return _X;
    }
    if (iVar3 == 3) {
      fVar4 = FUN_780350e0(0x25,_X._0_4_,uVar1);
      return (double)fVar4;
    }
  }
  fVar4 = FUN_780351b0(8,0x25,_X._0_4_,uVar1,SUB84(_X - _DAT_78037db8,0),
                       (int)((ulonglong)(_X - _DAT_78037db8) >> 0x20),uVar2);
  return (double)fVar4;
}


