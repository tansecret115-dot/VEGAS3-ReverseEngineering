/* Module: sfppack2.dll
   Function: FUN_5ccf5cd0
   Address: 5ccf5cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccf5cd0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined8 local_10;
  
  dVar1 = *param_2;
  dVar2 = dVar1 * param_2[2] + (param_2[4] * *param_1 - param_2[3] * param_2[1]);
  *param_1 = (dVar2 - dVar1) * param_2[5] + *param_1;
  local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  uVar3 = local_10._4_4_ & 0x7ff00000;
  local_10 = dVar2;
  if (uVar3 < 0x3df00000) {
    local_10 = 0.0;
  }
  param_2[1] = dVar1;
  *(undefined4 *)param_2 = (undefined4)local_10;
  *(uint *)((int)param_2 + 4) = local_10._4_4_;
  return;
}


