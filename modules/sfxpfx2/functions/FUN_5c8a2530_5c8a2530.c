/* Module: sfxpfx2.dll
   Function: FUN_5c8a2530
   Address: 5c8a2530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c8a2530(void *this,int *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_24 = param_1[1];
  local_20 = param_1[7];
  local_1c = param_1[6];
  local_18 = param_1[8];
  local_14 = param_1[10];
  local_c = param_1[9];
  local_8 = param_1[0xb];
  local_10 = param_1[2];
  local_4 = param_1[3];
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  FUN_5c8a22c0(this,*(uint *)(*(int *)((int)this + 0x68) + 4),(int)local_2c,
               (uint *)((int)this + 0x88),(undefined4 *)((int)this + 0xf8));
  puVar3 = (uint *)((int)this + 0x88);
  puVar5 = (uint *)((int)this + 0xc0);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)((int)this + 0xf8);
  puVar6 = (undefined4 *)((int)this + 0x208);
  for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  dVar1 = (double)*param_1 * _DAT_5c8dc928;
  *(double *)((int)this + 0x78) = dVar1;
  *(double *)((int)this + 0x80) = _DAT_5c8dc920 - dVar1;
  return 0;
}


