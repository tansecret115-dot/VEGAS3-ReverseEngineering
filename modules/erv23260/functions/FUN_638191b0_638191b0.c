/* Module: erv23260.dll
   Function: FUN_638191b0
   Address: 638191b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638191b0(void *this,uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = *param_1;
  local_c = 0;
  local_8 = 0;
  bVar1 = *(byte *)param_1[3];
  bVar5 = bVar1 & 0x1f;
  local_10 = 0;
  if (((bVar5 == 3) || (bVar5 == 5)) || (bVar5 == 0xe)) {
    if ((int)uVar2 < 4) {
      puVar3 = (uint *)(param_1[4] + uVar2 * 8);
    }
    else {
      puVar3 = (uint *)param_1[9];
    }
    local_c = *puVar3;
    local_8 = puVar3[1];
    if ((*(int *)((int)this + 0x2f8) != 0) && (*(int *)((int)this + 0x464) != 7)) {
      FUN_63819000((int *)&local_c,(int *)&local_8,(byte)param_1[0xd],uVar2);
    }
    local_10 = ((int)local_c >> 1) + param_1[0x10];
    if (local_8 != 0) {
      local_10 = local_10 + ((int)local_8 >> 1) * *(int *)(*(int *)((int)this + 0x340) + 0x100);
    }
  }
  local_14 = *(int *)param_1[0xc];
  switch(bVar5) {
  case 0:
    if (local_14 != 0) {
      local_14 = local_14 + -0x41;
    }
    break;
  case 3:
  case 5:
    if ((*(int *)((int)this + 0x300) == 0) || (3 < (int)uVar2)) {
      (**(code **)((int)this +
                  (((local_8 & 1) << 1 | local_c & 1) + 0x120 + *(int *)((int)this + 700) * 4) * 4))
                (*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
    }
    else {
      FUN_637fda50(this,uVar2,param_1[3],param_1[0xd],(byte)param_1[0xe],
                   (uint *)(param_1[4] + uVar2 * 8),param_1[0x10],(undefined1 *)param_1[0xf]);
    }
    break;
  case 8:
    if (*(int *)((int)this + 0x33c) == 0) {
      (**(code **)((*(int *)((int)this + 700) + 0x48) * 0x10 + (int)this))
                (*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
    }
    else {
      (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x584))
                (param_1[0x11],*(undefined4 *)(*(int *)((int)this + 0x344) + 0x100),param_1[0xf],
                 *(undefined4 *)(*(int *)((int)this + 0x340) + 0x100),param_1[0xd],uVar2);
    }
    break;
  case 0xe:
    if (*(int *)((int)this + 0x33c) == 0) {
      (**(code **)((*(int *)((int)this + 700) + 0x48) * 0x10 + (int)this))
                (*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
    }
    else {
      (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x584))
                (param_1[0x11],*(undefined4 *)(*(int *)((int)this + 0x344) + 0x100),param_1[0xf],
                 *(undefined4 *)(*(int *)((int)this + 0x340) + 0x100),param_1[0xd],uVar2);
    }
    (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x50c))
              (param_1[0xf],local_10,*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100),local_c,
               local_8);
  }
  if ((*(int *)((int)this + 0x304) == 0) || ((bVar1 & 0x1f) != 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  if (((local_14 != 0) || (iVar4 != 0)) &&
     ((**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x4e4))
                (param_1[0xb],*(undefined4 *)param_1[0xc],param_1[0xf],param_1[0x12],iVar4,
                 *(undefined4 *)(*(int *)((int)this + 0x340) + 0x100)), (bVar1 & 0x1f) != 0)) {
    (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x4d0))
              (param_1[0xf],*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
  }
  return;
}


