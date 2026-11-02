/* Module: pncrt.dll
   Function: _y0
   Address: 78033570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _y0(double _X)

{
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
                    /* 0x33570  571  _y0 */
  if (_X < _DAT_78037dd0) {
    fVar1 = (float10)FUN_78033be0(0x22,_X._0_4_,_X._4_4_,DAT_78041a40,DAT_78041a44);
    return (double)fVar1;
  }
  if (_X <= _DAT_78037dd8) {
    fVar1 = FUN_78033380(_X * _X,(double *)&DAT_780416e8,8,(double *)&DAT_78041730,8);
    dVar3 = _j0(_X);
    dVar4 = log(_X);
    return (double)fVar1 - dVar4 * dVar3 * _DAT_78037e08;
  }
  dVar3 = _DAT_78037de0 / _X;
  fVar1 = FUN_78033380(dVar3 * dVar3,(double *)&DAT_780414e8,5,(double *)&DAT_78041518,5);
  fVar2 = FUN_78033380(dVar3 * dVar3,(double *)&DAT_78041548,5,(double *)&DAT_78041578,5);
  dVar4 = _X - _DAT_78037de8;
  dVar5 = sqrt(_DAT_78037df8 / (_X * _DAT_78037df0));
  dVar6 = cos(dVar4);
  dVar4 = sin(dVar4);
  return (dVar4 * (double)fVar1 + dVar6 * (double)(fVar2 * (float10)dVar3)) * dVar5;
}


