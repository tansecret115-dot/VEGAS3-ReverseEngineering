/* Module: rnco3260.dll
   Function: FUN_636f2e60
   Address: 636f2e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f2e60(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_8;
  
  piVar1 = (int *)(param_1 + 0x10);
  local_8 = this;
  (**(code **)(*piVar1 + 0x10))(piVar1,&param_1);
  (**(code **)(*piVar1 + 0x20))(piVar1,(uint *)((int)this + 0x14),(int)this + 0x18);
  (**(code **)(*piVar1 + 0x28))
            (piVar1,(int)this + 0x20,(int)this + 0x24,(int)this + 0x28,(int)this + 0x2c);
  (**(code **)(*piVar1 + 0x18))(piVar1,&local_8);
  (**(code **)(*piVar1 + 0x30))(piVar1,(int)this + 0x30,(int)this + 0x34);
  (**(code **)(*piVar1 + 0x40))
            (piVar1,(int)this + 0x3c,(int)this + 0x40,(int)this + 0x44,(int)this + 0x48);
  uVar2 = FUN_636f2320(param_1,*(uint *)((int)this + 0x14));
  *(uint *)((int)this + 0x1c) = uVar2;
  uVar2 = FUN_636f2320(local_8,*(uint *)((int)this + 0x30));
  *(uint *)((int)this + 0x38) = uVar2;
  if (*(int *)((int)this + 0xc) != 0) {
    *(int *)((int)this + 0x1c) = -*(int *)((int)this + 0x1c);
  }
  if (*(int *)((int)this + 0x10) != 0) {
    *(uint *)((int)this + 0x38) = -uVar2;
  }
  return 0;
}


