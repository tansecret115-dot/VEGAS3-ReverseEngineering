/* Module: cook3260.dll
   Function: FUN_633a3150
   Address: 633a3150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_633a3150(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 0xc) = param_3;
  if (param_2 == 2) {
    *(undefined4 *)((int)this + 0x18) = param_6;
    *(undefined4 *)((int)this + 0x1c) = param_7;
    *(undefined4 *)((int)this + 0x24) = 5;
    if (0x100 < param_1) {
      *(undefined4 *)((int)this + 0x24) = 6;
    }
    if (0x200 < param_1) {
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x24) = 5;
  }
  *(int *)((int)this + 0x20) = param_3 + *(int *)((int)this + 0x18);
  *(int *)((int)this + 0x28) = 1 << ((byte)*(undefined4 *)((int)this + 0x24) & 0x1f);
  FUN_633a5bf0((int)this);
  FUN_633a5860((int)this);
  iVar1 = FUN_633a5cb0(this,*(int *)((int)this + 4));
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_633a5090(this,*(int *)((int)this + 4));
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)((int)this + 0x10) + 0x1f;
  pvVar2 = operator_new(((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(void **)((int)this + 0x4798) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_633a3810((int)this);
  *param_8 = 3;
  return 0;
}


