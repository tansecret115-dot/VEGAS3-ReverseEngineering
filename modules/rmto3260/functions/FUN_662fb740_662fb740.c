/* Module: rmto3260.dll
   Function: FUN_662fb740
   Address: 662fb740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662fb740(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0xa0);
  if (*(uint *)((int)this + 0x90) < *(uint *)((int)this + 0xa0)) {
    uVar3 = *(uint *)((int)this + 0x90);
  }
  if (uVar3 != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x28))(*(undefined4 *)((int)this + 0xb0),uVar3)
    ;
    if (uVar1 == uVar3) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
      *(undefined4 *)((int)this + 0xa0) = 0;
    }
    if (iVar2 == 0) {
      *(uint *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) - uVar1;
      *(int *)((int)this + 0x94) = param_1;
      *(uint *)((int)this + 0x98) = uVar3 - param_1;
    }
    return iVar2;
  }
  return 0xffff;
}


