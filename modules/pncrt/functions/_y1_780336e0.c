/* Module: pncrt.dll
   Function: _y1
   Address: 780336e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _y1(double _X)

{
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
                    /* 0x336e0  572  _y1 */
  if (_X < _DAT_78037dd0) {
    fVar1 = (float10)FUN_78033be0(0x23,_X._0_4_,_X._4_4_,DAT_78041a40,DAT_78041a44);
    return (double)fVar1;
  }
  if (_X <= _DAT_78037dd8) {
    fVar1 = FUN_78033380(_X * _X,(double *)&DAT_78041778,7,(double *)&DAT_780417b8,8);
    dVar3 = log(_X);
    dVar4 = _j1(_X);
    return (double)(fVar1 * (float10)_X) - (dVar4 * dVar3 - _DAT_78037e10 / _X) * _DAT_78037e08;
  }
  dVar3 = _DAT_78037de0 / _X;
  fVar1 = FUN_78033380(dVar3 * dVar3,(double *)&DAT_78041628,5,(double *)&DAT_78041658,5);
  fVar2 = FUN_78033380(dVar3 * dVar3,(double *)&DAT_78041688,5,(double *)&DAT_780416b8,5);
  dVar4 = _X - _DAT_78037e00;
  dVar5 = sqrt(_DAT_78037df8 / (_X * _DAT_78037df0));
  dVar6 = cos(dVar4);
  dVar4 = sin(dVar4);
  return (dVar4 * (double)fVar1 + dVar6 * (double)(fVar2 * (float10)dVar3)) * dVar5;
}


