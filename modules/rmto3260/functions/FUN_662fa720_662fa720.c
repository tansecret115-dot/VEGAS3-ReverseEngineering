/* Module: rmto3260.dll
   Function: FUN_662fa720
   Address: 662fa720
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662fa720(void *this,undefined4 *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_8;
  
  uVar4 = *(uint *)((int)this + 0x98);
  local_8 = 0;
  if (uVar4 == 0) {
    local_8 = (**(code **)(*(int *)this + 0x110))(0);
    if ((local_8 != 0) || (uVar4 = *(uint *)((int)this + 0x98), uVar4 == 0)) goto LAB_662fa7c7;
    uVar2 = (uint)*(ushort *)((int)this + 0x50);
    if (uVar4 < *(ushort *)((int)this + 0x50)) {
      uVar2 = uVar4;
    }
    uVar1 = *param_2;
    if ((uVar1 != 0) && (uVar1 < uVar2)) goto LAB_662fa789;
  }
  else {
    uVar2 = (uint)*(ushort *)((int)this + 0x50);
    if (uVar4 < *(ushort *)((int)this + 0x50)) {
      uVar2 = uVar4;
    }
    uVar1 = *param_2;
    if ((uVar1 != 0) && (uVar1 < uVar2)) {
LAB_662fa789:
      uVar2 = uVar1;
    }
  }
  *(uint *)((int)this + 0x98) = uVar4 - uVar2;
  puVar5 = (undefined4 *)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x94));
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *param_2 = uVar2;
  *(uint *)((int)this + 0x94) = *(int *)((int)this + 0x94) + uVar2;
LAB_662fa7c7:
  if (local_8 != 0) {
    *param_3 = *(int *)((int)this + 0x28);
    *param_2 = 0;
    return local_8;
  }
  iVar3 = (**(code **)(*(int *)this + 0x14))
                    ((*(int *)((int)this + 0x10) - *(int *)((int)this + 0xa0)) -
                     *(int *)((int)this + 0x98),*(undefined4 *)((int)this + 0xc));
  *param_3 = iVar3;
  return 0;
}


