/* Module: pncrt.dll
   Function: _j1
   Address: 78033410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _j1(double _X)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int local_1c;
  
                    /* 0x33410  321  _j1 */
  local_1c = 1;
  if (_X < _DAT_78037dd0) {
    _X = -_X;
    local_1c = -1;
  }
  if (_X <= _DAT_78037dd8) {
    fVar2 = FUN_78033380(_X * _X,(double *)&DAT_780415a8,10,(double *)&DAT_78041600,4);
    return (double)(fVar2 * (float10)_X * (float10)local_1c);
  }
  dVar1 = _DAT_78037de0 / _X;
  fVar2 = FUN_78033380(dVar1 * dVar1,(double *)&DAT_78041628,5,(double *)&DAT_78041658,5);
  fVar3 = FUN_78033380(dVar1 * dVar1,(double *)&DAT_78041688,5,(double *)&DAT_780416b8,5);
  dVar6 = _X - _DAT_78037e00;
  dVar4 = sqrt(_DAT_78037df8 / (_X * _DAT_78037df0));
  dVar5 = cos(dVar6);
  dVar6 = sin(dVar6);
  return (dVar5 * (double)fVar2 - dVar6 * (double)(fVar3 * (float10)dVar1)) * dVar4 *
         (double)local_1c;
}


