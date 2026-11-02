/* Module: erv23260.dll
   Function: FUN_63819920
   Address: 63819920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63819920(void *this,uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int local_1c;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  bVar4 = *(byte *)param_1[2] & 0x1f;
  param_1 = (uint *)0x0;
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  if (((bVar4 == 3) || (bVar4 == 0xe)) || (bVar4 == 0x11)) {
    if ((int)uVar1 < 4) {
      puVar3 = (uint *)(puVar2[7] + uVar1 * 8);
    }
    else {
      puVar3 = (uint *)puVar2[9];
    }
    local_c = *puVar3;
    local_10 = puVar3[1];
    if ((*(int *)((int)this + 0x2f8) != 0) && (*(int *)((int)this + 0x464) != 7)) {
      FUN_63819000((int *)&local_c,(int *)&local_10,(byte)puVar2[0xd],uVar1);
    }
  }
  if (((bVar4 == 0xb) || (bVar4 == 0xe)) || (bVar4 == 0x11)) {
    if ((int)uVar1 < 4) {
      puVar3 = (uint *)(puVar2[8] + uVar1 * 8);
      local_8 = *puVar3;
      param_1 = (uint *)puVar3[1];
    }
    else {
      local_8 = *(uint *)puVar2[10];
      param_1 = *(uint **)(puVar2[10] + 4);
    }
    if ((*(int *)((int)this + 0x2f8) != 0) && (*(int *)((int)this + 0x464) != 7)) {
      FUN_63819000((int *)&local_8,(int *)&param_1,(byte)puVar2[0xd],uVar1);
    }
    local_1c = ((int)local_8 >> 1) + puVar2[0x11];
    if (param_1 != (uint *)0x0) {
      local_1c = local_1c + ((int)param_1 >> 1) * *(int *)(*(int *)((int)this + 0x340) + 0x100);
    }
  }
  switch(bVar4) {
  case 3:
    (**(code **)((int)this +
                (((local_10 & 1) << 1 | local_c & 1) + 0x120 + *(int *)((int)this + 700) * 4) * 4))
              (*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
    break;
  case 0xb:
    (**(code **)((int)this +
                ((((uint)param_1 & 1) << 1 | local_8 & 1) + 0x120 + *(int *)((int)this + 700) * 4) *
                4))(*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
    break;
  case 0xe:
  case 0x11:
    (**(code **)((int)this +
                (((local_10 & 1) << 1 | local_c & 1) + 0x120 + *(int *)((int)this + 700) * 4) * 4))
              (*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
    if (*(int *)((int)this + 0x334) == 0) {
      (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x50c))
                (puVar2[0xf],local_1c,*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100),local_8,
                 param_1);
    }
    else {
      (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x4f8))
                (puVar2[0xf],puVar2[0x11],*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100),
                 local_8,param_1,uVar1);
    }
  }
  if (*(int *)puVar2[0xc] != 0) {
    (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x4e4))
              (puVar2[0xb],*(int *)puVar2[0xc],puVar2[0xf],puVar2[0x12],0,
               *(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
    (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x4d0))
              (puVar2[0xf],*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
  }
  return;
}


