/* Module: pncrt.dll
   Function: _j0
   Address: 78033260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _j0(double _X)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
                    /* 0x33260  320  _j0 */
  if (_X < _DAT_78037dd0) {
    _X = -_X;
  }
  if (_X <= _DAT_78037dd8) {
    fVar2 = FUN_78033380(_X * _X,(double *)&DAT_78041460,0xb,(double *)&DAT_780414c0,4);
    return (double)fVar2;
  }
  dVar1 = _DAT_78037de0 / _X;
  fVar2 = FUN_78033380(dVar1 * dVar1,(double *)&DAT_780414e8,5,(double *)&DAT_78041518,5);
  fVar3 = FUN_78033380(dVar1 * dVar1,(double *)&DAT_78041548,5,(double *)&DAT_78041578,5);
  dVar6 = _X - _DAT_78037de8;
  dVar4 = sqrt(_DAT_78037df8 / (_X * _DAT_78037df0));
  dVar5 = cos(dVar6);
  dVar6 = sin(dVar6);
  return (dVar5 * (double)fVar2 - dVar6 * (double)(fVar3 * (float10)dVar1)) * dVar4;
}


