/* Module: rnco3260.dll
   Function: FUN_636f3210
   Address: 636f3210
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636f3210(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (piVar1,(undefined4 *)((int)this + 0x10),(int)this + 0x14);
  (**(code **)(*piVar1 + 0x28))
            (piVar1,(int)this + 0x18,(int)this + 0x1c,(int)this + 0x20,(int)this + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x10);
  (**(code **)(*piVar1 + 0x18))(piVar1,&param_1);
  (**(code **)(*piVar1 + 0x30))(piVar1,(uint *)((int)this + 0x38),(int)this + 0x3c);
  (**(code **)(*piVar1 + 0x38))(piVar1,(int)this + 0x30,(int)this + 0x34);
  uVar2 = FUN_636f2320(param_1,*(uint *)((int)this + 0x38));
  *(uint *)((int)this + 0x2c) = uVar2;
  if (*(int *)((int)this + 0xc) != 0) {
    *(uint *)((int)this + 0x2c) = -uVar2;
  }
  iVar3 = GetColorConverter(0,(-(uint)(param_1 != 0xd) & 0xfffffff9) + 0xc);
  *(int *)((int)this + 8) = iVar3;
  return (-(uint)(iVar3 != 0) & 0x7fffbffb) + 0x80004005;
}


