/* Module: rmme3260.dll
   Function: FUN_6625d180
   Address: 6625d180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6625d180(void *this,undefined4 param_1,ushort *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int local_8;
  
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 0x44) + 4))();
  puVar1 = *(undefined4 **)((int)this + 0x80);
  *(undefined4 *)((int)this + 0xac) = 0;
  iVar2 = puVar1[3];
  iVar3 = puVar1[2];
  uVar6 = *(ushort *)(puVar1 + 6);
  if (iVar2 - iVar3 < 0) {
    uVar7 = (uint)*(ushort *)(puVar1 + 5);
  }
  else {
    uVar7 = 0;
  }
  uVar5 = (**(code **)*puVar1)();
  uVar4 = (ulonglong)(((uint)uVar6 - ((iVar2 - iVar3) + uVar7)) - 1 & 0xffff) /
          (ulonglong)(longlong)(int)(uint)uVar5;
  uVar6 = (ushort)uVar4;
  if (uVar6 == 0) {
    local_8 = -0x7ffbffb2;
    *param_2 = 0;
    if (*(int *)((int)this + 0xc) != 0) {
      local_8 = *(int *)((int)this + 0xc);
    }
  }
  else {
    uVar7 = (uint)uVar4;
    if (*param_2 < uVar6) {
      uVar7 = (uint)*param_2;
    }
    (**(code **)(**(int **)((int)this + 0x80) + 0x10))(param_1,uVar7);
    *param_2 = (ushort)uVar7;
  }
  if (*(int *)((int)this + 0xb0) == 0) {
    puVar1 = *(undefined4 **)((int)this + 0x80);
    iVar2 = puVar1[3];
    iVar3 = puVar1[2];
    if (iVar2 - iVar3 < 0) {
      uVar7 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar7 = 0;
    }
    uVar6 = (**(code **)*puVar1)();
    if (((short)((ulonglong)((iVar2 - iVar3) + uVar7 & 0xffff) /
                (ulonglong)(longlong)(int)(uint)uVar6) != 0) && (*(int *)((int)this + 0x8c) != 0)) {
      *(undefined4 *)((int)this + 0xb0) = 1;
      (**(code **)(*(int *)this + 0x1c))();
    }
  }
  if ((*(int *)((int)this + 0xc) == 0) && (*(int *)((int)this + 0x90) == 0)) {
    FUN_6625e090((int)this);
  }
  (**(code **)(**(int **)((int)this + 0x44) + 8))();
  return local_8;
}


