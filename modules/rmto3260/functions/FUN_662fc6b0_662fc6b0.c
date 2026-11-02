/* Module: rmto3260.dll
   Function: FUN_662fc6b0
   Address: 662fc6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662fc6b0(void *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 0x28) <= param_1) {
    *param_2 = *(uint *)((int)this + 0x28);
    *(undefined4 *)((int)this + 0xa0) = 0;
    return 0xffff;
  }
  uVar1 = FUN_662fa4c0(this,*(undefined4 *)((int)this + 0xc),param_1,&param_1);
  if (uVar1 < *(uint *)((int)this + 0x9c)) {
    uVar2 = param_1;
    if (*(char *)((int)this + 0x65) != '\0') {
      uVar1 = FUN_662fa5f0(this,uVar1);
      uVar2 = (**(code **)(*(int *)this + 0x14))(uVar1,*(undefined4 *)((int)this + 0xc));
    }
    *param_2 = uVar2;
    *(undefined4 *)((int)this + 0xa4) = 2;
    *(uint *)((int)this + 0xa0) = (*(int *)((int)this + 0x9c) - uVar1) - *(int *)((int)this + 0x18);
    iVar3 = (**(code **)(**(int **)((int)this + 4) + 0x20))(uVar1 + *(int *)((int)this + 0x18),0);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*(int *)this + 0x110))(0);
    }
    return iVar3;
  }
  *param_2 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0xa0) = 0;
  return 0xffff;
}


