/* Module: sfxpfx2.dll
   Function: FUN_5c8a2a70
   Address: 5c8a2a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8a2a70(double *param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  undefined8 local_10;
  
  dVar1 = (param_2[2] * *param_2 + param_2[5] * *param_1) - param_2[3] * param_2[1];
  local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  uVar2 = local_10._4_4_ & 0x7ff00000;
  local_10 = dVar1;
  if (uVar2 < 0x3df00000) {
    local_10 = 0.0;
  }
  *param_1 = param_2[6] * *param_1 + ((local_10 + param_2[1]) - (*param_2 + *param_2)) * param_2[7];
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)((int)param_2 + 4);
  *(undefined4 *)param_2 = (undefined4)local_10;
  *(uint *)((int)param_2 + 4) = local_10._4_4_;
  return;
}


