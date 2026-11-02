/* Module: sfppack1.dll
   Function: FUN_5cdd3320
   Address: 5cdd3320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdd3320(double *param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  undefined8 local_10;
  
  dVar1 = (param_2[2] * *param_2 + param_2[4] * *param_1) - param_2[3] * param_2[1];
  local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  uVar2 = local_10._4_4_ & 0x7ff00000;
  local_10 = dVar1;
  if (uVar2 < 0x3df00000) {
    local_10 = 0.0;
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)((int)param_2 + 4);
  *(undefined4 *)param_2 = (undefined4)local_10;
  *(uint *)((int)param_2 + 4) = local_10._4_4_;
  *param_1 = *param_1 - local_10;
  return;
}


