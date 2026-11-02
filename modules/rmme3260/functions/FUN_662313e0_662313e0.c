/* Module: rmme3260.dll
   Function: FUN_662313e0
   Address: 662313e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662313e0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  
  *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) | 0x20;
  if ((*(byte *)((int)this + 0x6d) & 0x80) == 0) {
    (**(code **)(*(int *)this + 4))(this);
  }
  if (param_1 == 1) {
    bVar4 = *(byte *)((int)this + 0x6c) | 0x80;
  }
  else {
    bVar4 = *(byte *)((int)this + 0x6c) & 0x7f;
  }
  *(byte *)((int)this + 0x6c) = bVar4;
  if (((bVar4 & 0x10) != 0) && ((*(byte *)((int)this + 0x6d) & 1) != 0)) {
    *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) & 0xfe;
    if (((bVar4 & 0x80) == 0) || ((bVar4 & 0x40) == 0)) {
      (**(code **)(**(int **)((int)this + 0x14) + 0xc))(*(int **)((int)this + 0x14),0x80040044);
    }
    else {
      *(byte *)((int)this + 0x6c) = bVar4 | 8;
      (**(code **)(**(int **)((int)this + 0x91) + 4))();
      FUN_66231c90(this,0,0);
      FUN_66231130(this);
      FUN_66231e50((int)this);
      FUN_66230fe0((int)this);
      (**(code **)(**(int **)((int)this + 0x91) + 8))();
      (**(code **)(**(int **)((int)this + 0x14) + 0xc))(*(int **)((int)this + 0x14),0);
    }
  }
  if ((*(byte *)((int)this + 0x6d) & 0x80) == 0) {
    (**(code **)(*(int *)this + 8))(this);
  }
  if ((*(byte *)((int)this + 0x6c) & 8) != 0) {
    puVar1 = *(undefined4 **)((int)this + 0x44);
    iVar2 = puVar1[3];
    iVar3 = puVar1[2];
    if (iVar2 - iVar3 < 0) {
      uVar6 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar6 = 0;
    }
    uVar5 = (**(code **)*puVar1)();
    if ((short)((ulonglong)((iVar2 - iVar3) + uVar6 & 0xffff) /
               (ulonglong)(longlong)(int)(uint)uVar5) != 0) {
      (**(code **)(**(int **)((int)this + 0x91) + 4))();
      FUN_66231130(this);
      (**(code **)(**(int **)((int)this + 0x91) + 8))();
    }
  }
  return;
}


