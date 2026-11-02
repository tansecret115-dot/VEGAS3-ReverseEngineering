/* Module: encn3260.dll
   Function: FUN_664b0870
   Address: 664b0870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664b0870(void *this,int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint local_8;
  
  local_8 = 0x100;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  uVar4 = 2;
  puVar1 = FUN_66481080();
  iVar2 = FUN_664cbdc0(puVar1,uVar4);
  if (iVar2 == 0) {
    FUN_664b0ea0();
  }
  uVar4 = 2;
  puVar1 = FUN_66481080();
  iVar2 = FUN_664cbdc0(puVar1,uVar4);
  if (iVar2 != 0) {
    puVar3 = operator_new(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_664d5730(puVar3);
    }
    *(int *)((int)this + 4) = iVar2;
    if (iVar2 != 0) {
      FUN_664d5b20(&DAT_664e374c,s_rncolor_664e3754,(char *)((int)this + 8),&local_8);
      iVar2 = FUN_664d57b0(*(void **)((int)this + 4),(char *)((int)this + 8),2);
      if (iVar2 == 0) {
        FUN_664b0c60(this);
      }
      else {
        puVar3 = *(undefined4 **)((int)this + 4);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_664d5750(puVar3);
          operator_delete(puVar3);
        }
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)this = 0x80004005;
      }
    }
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return this;
}


