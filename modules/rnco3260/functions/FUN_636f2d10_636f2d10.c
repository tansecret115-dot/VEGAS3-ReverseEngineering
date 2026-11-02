/* Module: rnco3260.dll
   Function: FUN_636f2d10
   Address: 636f2d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f2d10(void *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 0x10))(piVar1,local_c);
  piVar2 = (int *)((int)this + 0x14);
  (**(code **)(*piVar1 + 0x20))(piVar1,piVar2,(int)this + 0x18);
  (**(code **)(*piVar1 + 0x28))
            (piVar1,(int)this + 0x1c,(int)this + 0x20,(int)this + 0x24,(int)this + 0x28);
  (**(code **)(*piVar1 + 0x18))(piVar1,&local_8);
  (**(code **)(*piVar1 + 0x30))(piVar1,&param_1,local_10);
  uVar3 = FUN_636f2320(local_8,param_1);
  *(uint *)((int)this + 0x2c) = uVar3;
  if (*(int *)((int)this + 0xc) != 0) {
    *piVar2 = -*piVar2;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    *(uint *)((int)this + 0x2c) = -uVar3;
  }
  return 0;
}


