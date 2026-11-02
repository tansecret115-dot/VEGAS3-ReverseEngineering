/* Module: erv23260.dll
   Function: FUN_63805a10
   Address: 63805a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63805a10(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_637f20a0(&local_30);
  if (*(int *)((int)this + 0x838) == 0) {
    return 4;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)(iVar1 + 0x30) == 0) {
    *(undefined4 *)((int)this + 0x8b8) = 1;
    puVar4 = (undefined4 *)((int)this + 0xc);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    piVar3 = param_2;
    piVar5 = (int *)((int)this + 0x38);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    if (*param_2 == 0x16) {
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 0x408f4000;
      *(undefined4 *)((int)this + 0x8bc) = 0x2000;
    }
    else {
      *(undefined4 *)(iVar1 + 0x28) = 0xeb851eb8;
      *(undefined4 *)(iVar1 + 0x2c) = 0x403df851;
      *(undefined4 *)((int)this + 0x8bc) = 0x100;
    }
    *(int *)((int)this + 8) = *param_2;
    if (*(int *)((int)this + 0x800) == 1) {
      *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x80) = 1;
      *(undefined4 *)((int)this + 0x7c) = 1;
      *(undefined4 *)((int)this + 0x140) = 1;
      *(undefined4 *)((int)this + 0x144) = 1;
      *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x14);
    }
    iVar1 = FUN_638074a0((int)this);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x8b4) == 0) {
        iVar1 = FUN_63806830((int)this);
        if (iVar1 != 0) {
          return iVar1;
        }
        *(undefined4 *)((int)this + 0x8b4) = 1;
      }
      local_2c = *(uint *)((int)this + 0x10);
      local_28 = *(undefined4 *)((int)this + 0x14);
      local_30 = 0xb;
      local_18 = 0;
      local_c = local_2c >> 1;
      local_1c = 0;
      local_24 = local_2c;
      local_20 = local_28;
      local_10 = local_2c;
      local_8 = local_c;
      iVar1 = (**(code **)(**(int **)((int)this + 0x8a8) + 0x14))(param_2,&local_30);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0x804) = 0;
        iVar2 = (**(code **)(**(int **)((int)this + 0x8d0) + 0x28))
                          (*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14));
        if (iVar2 == 0) {
          iVar1 = 1;
        }
      }
    }
    return iVar1;
  }
  return 4;
}


