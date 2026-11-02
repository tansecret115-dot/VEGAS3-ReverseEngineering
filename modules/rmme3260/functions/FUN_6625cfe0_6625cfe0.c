/* Module: rmme3260.dll
   Function: FUN_6625cfe0
   Address: 6625cfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6625cfe0(void *this,undefined4 param_1,ushort *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  int local_8;
  
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 0x44) + 4))();
  *(undefined4 *)((int)this + 0xa8) = 0;
  if (*(short *)((int)this + 0x3a) == 1) {
    puVar1 = *(undefined4 **)((int)this + 0x84);
    iVar2 = puVar1[3];
    iVar3 = puVar1[2];
    if (iVar2 - iVar3 < 0) {
      uVar6 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar6 = 0;
    }
    uVar5 = (**(code **)*puVar1)();
    uVar4 = (ulonglong)((iVar2 - iVar3) + uVar6 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar5;
    uVar5 = (ushort)uVar4;
    if (uVar5 == 0) {
      local_8 = -0x7ffbffb2;
      *param_2 = 0;
      if (*(int *)((int)this + 0xc) != 0) {
        local_8 = *(int *)((int)this + 0xc);
      }
    }
    else {
      uVar6 = (uint)uVar4;
      if (*param_2 < uVar5) {
        uVar6 = (uint)*param_2;
      }
      (**(code **)(**(int **)((int)this + 0x84) + 0xc))(param_1,uVar6);
      *param_2 = (ushort)uVar6;
    }
  }
  else {
    local_8 = -0x7ffbffbd;
  }
  if ((*(int *)((int)this + 0xc) == 0) && (*(int *)((int)this + 0x90) == 0)) {
    FUN_6625e090((int)this);
  }
  (**(code **)(**(int **)((int)this + 0x44) + 8))();
  return local_8;
}


