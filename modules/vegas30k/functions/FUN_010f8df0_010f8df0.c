/* Module: vegas30k.dll
   Function: FUN_010f8df0
   Address: 010f8df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f8df0(int param_1)

{
  undefined4 *puVar1;
  float10 fVar2;
  float10 fVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38 = *(double *)(param_1 + 0x298) * _DAT_011e3300;
  *(undefined4 *)(param_1 + 0x28c) = 2;
  *(undefined4 *)(param_1 + 0x288) = 2;
  fVar3 = (float10)1.4426950408889634 *
          -((float10)local_38 /
           ((float10)*(double *)(param_1 + 0x2f8) + (float10)*(double *)(param_1 + 0x2f8)));
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  local_28 = (double)fVar2;
  FUN_010f6360(&local_38,local_38);
  FUN_010f8260(&local_18,(undefined4)local_28,local_28._4_4_,(undefined4)local_38,local_38._4_4_,
               local_30,local_2c);
  *(undefined4 *)(param_1 + 0x148) = local_18;
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  *(undefined4 *)(param_1 + 0x150) = local_10;
  *(undefined4 *)(param_1 + 0x154) = local_c;
  puVar1 = (undefined4 *)FUN_010f7800(&local_28,local_18,local_14,local_10,local_c);
  *(undefined4 *)(param_1 + 0x158) = *puVar1;
  *(undefined4 *)(param_1 + 0x15c) = puVar1[1];
  *(undefined4 *)(param_1 + 0x160) = puVar1[2];
  *(undefined4 *)(param_1 + 0x164) = puVar1[3];
  *(undefined4 *)(param_1 + 0x1e8) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x1ec) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x1f0) = local_30;
  *(undefined4 *)(param_1 + 500) = local_2c;
  puVar1 = (undefined4 *)
           FUN_010f7800(&local_28,(undefined4)local_38,local_38._4_4_,local_30,local_2c);
  *(undefined4 *)(param_1 + 0x1f8) = *puVar1;
  *(undefined4 *)(param_1 + 0x1fc) = puVar1[1];
  *(undefined4 *)(param_1 + 0x200) = puVar1[2];
  *(undefined4 *)(param_1 + 0x204) = puVar1[3];
  return;
}


