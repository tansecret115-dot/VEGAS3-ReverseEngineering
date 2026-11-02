/* Module: wmfplug2.dll
   Function: FUN_00404b10
   Address: 00404b10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00404b10(void *this,uint param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_8;
  uint local_4;
  
  local_4 = 0;
  if (((*(int *)((int)this + 0x1a0) != 0) && (*(int *)((int)this + 0x1c0) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    iVar1 = *(int *)((int)this + 0x44);
    if ((((iVar1 <= param_2) && ((iVar1 < param_2 || (*(uint *)((int)this + 0x40) <= param_1)))) &&
        (param_2 <= *(int *)((int)this + 0x4c))) &&
       ((param_2 < *(int *)((int)this + 0x4c) || (param_1 <= *(uint *)((int)this + 0x48))))) {
      uVar3 = 0;
      if ((*(uint *)((int)this + 0x40) != param_1) || (iVar1 != param_2)) {
        uVar3 = (param_1 - *(int *)((int)this + 0x40)) *
                (uint)*(ushort *)(*(int *)((int)this + 0x1c0) + 0xc);
      }
      local_8 = 0;
      param_1 = 0;
      iVar1 = (**(code **)(**(int **)((int)this + 0x1a0) + 0x1c))
                        (*(int **)((int)this + 0x1a0),&local_8,&param_1);
      if ((-1 < iVar1) && (uVar3 < param_1)) {
        local_4 = (uint)*(ushort *)(*(int *)((int)this + 0x1c0) + 0xc) * param_4;
        if (param_1 - uVar3 < local_4) {
          local_4 = param_1 - uVar3;
        }
        puVar4 = (undefined4 *)(uVar3 + local_8);
        for (uVar2 = local_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_3 = *puVar4;
          puVar4 = puVar4 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar3 = local_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
        local_4 = local_4 / *(ushort *)(*(int *)((int)this + 0x1c0) + 0xc);
      }
    }
    return local_4;
  }
  return 0;
}


