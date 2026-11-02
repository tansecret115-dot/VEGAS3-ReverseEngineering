/* Module: rmme3260.dll
   Function: FUN_6621e4c0
   Address: 6621e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6621e4c0(void *this,char *param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *this_00;
  uint uVar6;
  undefined4 local_1c [3];
  int *local_10;
  uint local_c;
  int local_8;
  
  this_00 = (int *)0x0;
  local_8 = 0;
  local_10 = (int *)0x0;
  local_c = 0;
  FUN_66208c30(local_1c);
  if (*(int *)((int)this + 0xe4) == 0) {
    local_8 = 0x40042;
  }
  if (local_8 == 0) {
    this_00 = FUN_66209140(param_1);
    if (this_00 == (int *)0x0) {
      local_8 = -1;
    }
    local_10 = this_00;
    if ((local_8 == 0) && (*(int *)((int)this + 0xbc) != 0)) {
      local_8 = FUN_6620afd0(this_00,*(int *)((int)this + 0xbc));
    }
  }
  pbVar4 = (byte *)FUN_66209a30(this,&local_c);
  puVar2 = *(uint **)((int)this + 0x56);
  if ((pbVar4 == (byte *)0x0) || (local_c == 0)) {
    pbVar5 = (byte *)0x0;
  }
  else {
    bVar1 = *pbVar4;
    *puVar2 = (uint)bVar1 << 0x18;
    uVar6 = (uint)pbVar4[1] << 0x10 | (uint)bVar1 << 0x18;
    *puVar2 = uVar6;
    uVar6 = uVar6 | (uint)pbVar4[2] << 8;
    *puVar2 = uVar6;
    *puVar2 = uVar6 | pbVar4[3];
    puVar2[1] = (uint)pbVar4[4] << 0x18;
    uVar6 = puVar2[1] | (uint)pbVar4[5] << 0x10;
    puVar2[1] = uVar6;
    uVar6 = uVar6 | (uint)pbVar4[6] << 8;
    puVar2[1] = uVar6;
    puVar2[1] = uVar6 | pbVar4[7];
    *(ushort *)(puVar2 + 2) = (ushort)pbVar4[8] << 8;
    *(ushort *)(puVar2 + 2) = (ushort)puVar2[2] | (ushort)pbVar4[9];
    pbVar5 = pbVar4 + 10;
    this_00 = local_10;
    if ((short)puVar2[2] == 0) {
      *(uint *)((int)puVar2 + 10) = (uint)*pbVar5 << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 10) | (uint)pbVar4[0xb] << 0x10;
      *(uint *)((int)puVar2 + 10) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0xc] << 8;
      *(uint *)((int)puVar2 + 10) = uVar6;
      *(uint *)((int)puVar2 + 10) = uVar6 | pbVar4[0xd];
      *(uint *)((int)puVar2 + 0xe) = (uint)pbVar4[0xe] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0xe) | (uint)pbVar4[0xf] << 0x10;
      *(uint *)((int)puVar2 + 0xe) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x10] << 8;
      *(uint *)((int)puVar2 + 0xe) = uVar6;
      *(uint *)((int)puVar2 + 0xe) = uVar6 | pbVar4[0x11];
      *(uint *)((int)puVar2 + 0x12) = (uint)pbVar4[0x12] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0x12) | (uint)pbVar4[0x13] << 0x10;
      *(uint *)((int)puVar2 + 0x12) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x14] << 8;
      *(uint *)((int)puVar2 + 0x12) = uVar6;
      *(uint *)((int)puVar2 + 0x12) = uVar6 | pbVar4[0x15];
      *(uint *)((int)puVar2 + 0x16) = (uint)pbVar4[0x16] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0x16) | (uint)pbVar4[0x17] << 0x10;
      *(uint *)((int)puVar2 + 0x16) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x18] << 8;
      *(uint *)((int)puVar2 + 0x16) = uVar6;
      *(uint *)((int)puVar2 + 0x16) = uVar6 | pbVar4[0x19];
      *(uint *)((int)puVar2 + 0x1a) = (uint)pbVar4[0x1a] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0x1a) | (uint)pbVar4[0x1b] << 0x10;
      *(uint *)((int)puVar2 + 0x1a) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x1c] << 8;
      *(uint *)((int)puVar2 + 0x1a) = uVar6;
      *(uint *)((int)puVar2 + 0x1a) = uVar6 | pbVar4[0x1d];
      *(uint *)((int)puVar2 + 0x1e) = (uint)pbVar4[0x1e] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0x1e) | (uint)pbVar4[0x1f] << 0x10;
      *(uint *)((int)puVar2 + 0x1e) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x20] << 8;
      *(uint *)((int)puVar2 + 0x1e) = uVar6;
      *(uint *)((int)puVar2 + 0x1e) = uVar6 | pbVar4[0x21];
      *(uint *)((int)puVar2 + 0x22) = (uint)pbVar4[0x22] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0x22) | (uint)pbVar4[0x23] << 0x10;
      *(uint *)((int)puVar2 + 0x22) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x24] << 8;
      *(uint *)((int)puVar2 + 0x22) = uVar6;
      *(uint *)((int)puVar2 + 0x22) = uVar6 | pbVar4[0x25];
      *(uint *)((int)puVar2 + 0x26) = (uint)pbVar4[0x26] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0x26) | (uint)pbVar4[0x27] << 0x10;
      *(uint *)((int)puVar2 + 0x26) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x28] << 8;
      *(uint *)((int)puVar2 + 0x26) = uVar6;
      *(uint *)((int)puVar2 + 0x26) = uVar6 | pbVar4[0x29];
      *(uint *)((int)puVar2 + 0x2a) = (uint)pbVar4[0x2a] << 0x18;
      uVar6 = *(uint *)((int)puVar2 + 0x2a) | (uint)pbVar4[0x2b] << 0x10;
      *(uint *)((int)puVar2 + 0x2a) = uVar6;
      uVar6 = uVar6 | (uint)pbVar4[0x2c] << 8;
      *(uint *)((int)puVar2 + 0x2a) = uVar6;
      *(uint *)((int)puVar2 + 0x2a) = uVar6 | pbVar4[0x2d];
      *(ushort *)((int)puVar2 + 0x2e) = (ushort)pbVar4[0x2e] << 8;
      *(ushort *)((int)puVar2 + 0x2e) = *(ushort *)((int)puVar2 + 0x2e) | (ushort)pbVar4[0x2f];
      *(ushort *)(puVar2 + 0xc) = (ushort)pbVar4[0x30] << 8;
      *(ushort *)(puVar2 + 0xc) = (ushort)puVar2[0xc] | (ushort)pbVar4[0x31];
      pbVar5 = pbVar4 + 0x32;
    }
  }
  if (pbVar5 == (byte *)0x0) {
    local_8 = -1;
  }
  FUN_66209330(this_00,*(ushort *)(*(int *)((int)this + 0x56) + 0x30));
  (**(code **)(*this_00 + 0xc))(*(undefined4 *)((int)this + 0x4e));
  param_1 = (char *)0x0;
  if (*(short *)((int)this + 0x6e) != 0) {
    do {
      if (local_8 != 0) break;
      pbVar4 = (byte *)FUN_662092c0(this,(uint)param_1,&local_c);
      (**(code **)(*this_00 + 0x1c))(local_c,pbVar4);
      param_1 = param_1 + 1;
    } while (param_1 < (char *)(uint)*(ushort *)((int)this + 0x6e));
  }
  param_1 = (char *)0x0;
  if ((local_8 == 0) && (*(void **)((int)this + 0x110) != (void *)0x0)) {
    FUN_66218280(*(void **)((int)this + 0x110),*(undefined2 *)((int)this + 0x6e));
    local_10 = (int *)(**(code **)(**(int **)((int)this + 0x110) + 0xc))();
    param_1 = operator_new((uint)local_10);
    (**(code **)(**(int **)((int)this + 0x110) + 0x18))(param_1,local_10);
    (**(code **)(*this_00 + 0x1c))(local_10,param_1);
  }
  if (*(int *)((int)this + 0xe8) != 0) {
    if (local_8 != 0) goto LAB_6621e8a4;
    pbVar4 = (byte *)FUN_66209a90(this,&local_c);
    (**(code **)(*this_00 + 0x1c))(local_c,pbVar4);
  }
  if (local_8 == 0) {
    (**(code **)(*this_00 + 0x20))();
    pbVar4 = (byte *)(**(code **)(*(int *)this + 0x10))(local_1c,&local_c);
  }
LAB_6621e8a4:
  FUN_66224800(*(int **)((int)this + 0x114));
  while ((pbVar4 != (byte *)0x0 && (local_8 == 0))) {
    local_8 = (**(code **)(*this_00 + 0x2c))(local_1c,pbVar4,local_c);
    if (-1 < local_8) {
      local_8 = FUN_66224860(*(void **)((int)this + 0x114),local_c);
    }
    (**(code **)(*(int *)this + 0x14))(pbVar4);
    pbVar4 = (byte *)(**(code **)(*(int *)this + 0x10))(local_1c,&local_c);
  }
  FUN_66224940(*(int **)((int)this + 0x114));
  iVar3 = local_8;
  if (local_8 == 0) {
    (**(code **)(*this_00 + 0x24))();
  }
  if (param_1 != (char *)0x0) {
    operator_delete(param_1);
  }
  if (this_00 != (int *)0x0) {
    (**(code **)*this_00)(1);
  }
  *(int *)((int)this + 0x24) = iVar3;
  return iVar3;
}


