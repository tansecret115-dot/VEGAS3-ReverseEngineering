/* Module: rmme3260.dll
   Function: FUN_6622ee20
   Address: 6622ee20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6622ee20(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 4))(this);
  if (param_1 == 1) {
    *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 2;
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x40))();
    iVar2 = FUN_662647b0(uVar1);
    *(int *)((int)this + 0x18) = iVar2;
    (**(code **)(**(int **)((int)this + 0x10) + 0xc))(*(int **)((int)this + 0x10),0);
    (**(code **)(*(int *)this + 8))(this);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x10) + 0xc))(*(int **)((int)this + 0x10),0x80040044);
  (**(code **)(*(int *)this + 8))(this);
  return;
}


