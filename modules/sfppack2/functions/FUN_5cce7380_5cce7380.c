/* Module: sfppack2.dll
   Function: FUN_5cce7380
   Address: 5cce7380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cce7380(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_54 = *param_1;
  local_58 = param_1[1];
  local_4c = param_1[3];
  local_50 = param_1[2];
  local_44 = param_1[5];
  local_48 = param_1[4];
  local_3c = param_1[0xb];
  local_40 = param_1[10];
  local_34 = param_1[0xd];
  local_38 = param_1[0xc];
  local_2c = param_1[7];
  local_30 = param_1[6];
  local_24 = param_1[9];
  local_28 = param_1[8];
  local_1c = param_1[0x10];
  local_20 = param_1[0xe];
  local_14 = param_1[0xf];
  local_18 = param_1[0x12];
  local_c = param_1[0x13];
  local_10 = param_1[0x11];
  if (param_2 == 0) {
    puVar1 = (undefined4 *)((int)this + 0xc0);
    iVar2 = 4;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_5cce70e0(this,*(uint *)(*(int *)((int)this + 0x8c) + 4),(int)&local_58,
               (uint *)((int)this + 0xb0),(undefined4 *)((int)this + 0x270));
  puVar3 = (uint *)((int)this + 0xb0);
  puVar4 = (uint *)((int)this + 400);
  for (iVar2 = 0x38; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)((int)this + 0x270);
  puVar5 = (undefined4 *)((int)this + 0x380);
  for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  fVar6 = (float10)_CIpow();
  *(double *)((int)this + 0xa0) = (double)fVar6;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  if (local_54 != -0xfa) {
    fVar6 = (float10)_CIpow();
    *(double *)((int)this + 0xa8) = (double)fVar6;
  }
  return 0;
}


