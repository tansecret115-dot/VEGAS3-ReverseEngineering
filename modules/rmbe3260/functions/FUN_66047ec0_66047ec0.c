/* Module: rmbe3260.dll
   Function: FUN_66047ec0
   Address: 66047ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66047ec0(void *this,undefined4 *param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int local_8;
  
  uVar1 = *(uint *)((int)this + 0x98);
  if (uVar1 == 0) {
    if (*(int *)((int)this + 0xa4) == 0) {
      uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x28))
                        (param_1,*(undefined2 *)((int)this + 0x50));
      if (uVar1 == *(ushort *)((int)this + 0x50)) {
        *(uint *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) - uVar1;
        *param_2 = uVar1;
        *param_3 = 1;
        return 0;
      }
      *(undefined4 *)((int)this + 0xa0) = 0;
      local_8 = (**(code **)(**(int **)((int)this + 4) + 4))();
    }
    else {
      local_8 = (**(code **)(*(int *)this + 0x110))(0);
      if ((local_8 == 0) && (uVar1 = *(uint *)((int)this + 0x98), uVar1 != 0)) goto LAB_66047f02;
    }
    return local_8;
  }
LAB_66047f02:
  uVar2 = (uint)*(ushort *)((int)this + 0x50);
  if (uVar1 < *(ushort *)((int)this + 0x50)) {
    uVar2 = uVar1;
  }
  *(uint *)((int)this + 0x98) = uVar1 - uVar2;
  puVar3 = (undefined4 *)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x94));
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *param_3 = 0;
  *param_2 = uVar2;
  *(uint *)((int)this + 0x94) = *(int *)((int)this + 0x94) + uVar2;
  return 0;
}


