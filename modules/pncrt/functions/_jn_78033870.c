/* Module: pncrt.dll
   Function: _jn
   Address: 78033870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _jn(int _X,double _Y)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_stack_00000008;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
                    /* 0x33870  322  _jn */
  if (_X < 0) {
    dVar5 = (double)CONCAT44(_Y._0_4_,in_stack_00000008);
    _X = -_X;
    in_stack_00000008 = SUB84(-dVar5,0);
    _Y._0_4_ = (undefined4)((ulonglong)-dVar5 >> 0x20);
  }
  uVar1 = in_stack_00000008;
  if (_X == 0) {
    dVar5 = _j0((double)CONCAT44(_Y._0_4_,in_stack_00000008));
    return dVar5;
  }
  if (_X == 1) {
    dVar5 = _j1((double)CONCAT44(_Y._0_4_,in_stack_00000008));
    return dVar5;
  }
  if ((double)CONCAT44(_Y._0_4_,in_stack_00000008) != _DAT_78037dd0) {
    dVar5 = fabs((double)CONCAT44(_Y._0_4_,in_stack_00000008));
    if (dVar5 <= (double)_X) {
      iVar4 = _X * 2;
      local_20 = 0.0;
      for (iVar2 = iVar4 + 0x24; iVar4 < iVar2; iVar2 = iVar2 + -2) {
        local_20 = ((double)CONCAT44(_Y._0_4_,in_stack_00000008) *
                   (double)CONCAT44(_Y._0_4_,in_stack_00000008)) / ((double)iVar2 - local_20);
      }
      dVar5 = (double)CONCAT44(_Y._0_4_,in_stack_00000008) / ((double)iVar4 - local_20);
      local_20._4_4_ = 0x3ff00000;
      dVar6 = (double)(iVar4 + -2) / (double)CONCAT44(_Y._0_4_,in_stack_00000008) - dVar5;
      uVar3 = 0;
      for (iVar4 = iVar4 + -4; iVar4 != 0; iVar4 = iVar4 + -2) {
        local_20._0_4_ = SUB84(dVar6,0);
        local_28 = (double)CONCAT44(local_20._4_4_,uVar3);
        local_20._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar6 = ((double)iVar4 * dVar6) / (double)CONCAT44(_Y._0_4_,in_stack_00000008) - local_28;
        uVar3 = (undefined4)local_20;
      }
      dVar7 = _j0((double)CONCAT44(_Y._0_4_,uVar1));
      return (dVar7 * dVar5) / dVar6;
    }
    dVar5 = _j0((double)CONCAT44(_Y._0_4_,uVar1));
    dVar6 = _j1((double)CONCAT44(_Y._0_4_,uVar1));
    local_28._0_4_ = SUB84(dVar6,0);
    local_28._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
    local_2c = 4;
    dVar5 = (dVar6 + dVar6) / (double)CONCAT44(_Y._0_4_,in_stack_00000008) - dVar5;
    uVar1 = (undefined4)local_28;
    uVar3 = local_28._4_4_;
    local_28 = dVar5;
    if (_X * 2 != 4) {
      do {
        dVar5 = (double)local_2c;
        local_20 = (double)CONCAT44(uVar3,uVar1);
        local_2c = local_2c + 2;
        local_20 = (dVar5 * local_28) / (double)CONCAT44(_Y._0_4_,in_stack_00000008) - local_20;
        uVar1 = (undefined4)local_28;
        uVar3 = local_28._4_4_;
        local_28 = local_20;
      } while (local_2c != _X * 2);
    }
    return local_28;
  }
  return _DAT_78037dd0;
}


