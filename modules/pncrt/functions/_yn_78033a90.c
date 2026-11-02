/* Module: pncrt.dll
   Function: _yn
   Address: 78033a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _yn(int _X,double _Y)

{
  uint uVar1;
  float10 fVar2;
  double dVar3;
  uint in_stack_00000008;
  int local_30;
  int local_2c;
  double local_28;
  double local_20;
  double local_18;
  
  uVar1 = in_stack_00000008;
                    /* 0x33a90  573  _yn */
  if ((double)CONCAT44(_Y._0_4_,in_stack_00000008) < _DAT_78037dd0) {
    fVar2 = (float10)FUN_78033be0(0x24,in_stack_00000008,_Y._0_4_,DAT_78041a40,DAT_78041a44);
    return (double)fVar2;
  }
  local_30 = 1;
  if ((_X < 0) && (_X = -_X, (_X & 1U) != 0)) {
    local_30 = -1;
  }
  if (_X != 0) {
    if (_X != 1) {
      local_20 = _y0((double)CONCAT44(_Y._0_4_,in_stack_00000008));
      dVar3 = _y1((double)CONCAT44(_Y._0_4_,uVar1));
      local_2c = 1;
      if (1 < _X) {
        do {
          local_28 = dVar3;
          dVar3 = (double)local_2c;
          local_2c = local_2c + 1;
          local_18 = local_28 * (_DAT_78037df8 / (double)CONCAT44(_Y._0_4_,in_stack_00000008)) *
                     dVar3 - local_20;
          dVar3 = local_18;
          local_20 = local_28;
        } while (local_2c < _X);
      }
      return local_18 * (double)local_30;
    }
    dVar3 = _y1((double)CONCAT44(_Y._0_4_,in_stack_00000008));
    return dVar3 * (double)local_30;
  }
  dVar3 = _y0((double)CONCAT44(_Y._0_4_,in_stack_00000008));
  return dVar3 * (double)local_30;
}


