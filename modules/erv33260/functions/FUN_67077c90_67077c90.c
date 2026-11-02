/* Module: erv33260.dll
   Function: FUN_67077c90
   Address: 67077c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_67077c90(void *this,int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_67072390(this,param_1,param_2);
  *(undefined ***)((int)this + 100) = &PTR_LAB_67090220;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_67090210;
  *(undefined ***)((int)this + 0x6c) = &PTR_LAB_67090200;
  *(undefined ***)((int)this + 0x70) = &PTR_LAB_670901e8;
  *(undefined ***)((int)this + 0x74) = &PTR_LAB_670901d0;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  FUN_67077b20((undefined4 *)((int)this + 0x84));
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined1 *)((int)this + 0x22d) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  FUN_67079890((void *)((int)this + 600));
  FUN_67077c30((undefined4 *)((int)this + 0x28c));
  *(undefined4 *)((int)this + 0x318) = 0;
  *(uint *)((int)this + 0x28c) = (uint)(param_1 == 0x14);
  *(undefined4 *)((int)this + 0x288) = 1;
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined1 *)((int)this + 0x1c2) = 1;
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined ***)this = &PTR_FUN_67090170;
  *(undefined ***)((int)this + 100) = &PTR_FUN_67090148;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_67090138;
  *(undefined ***)((int)this + 0x6c) = &PTR_FUN_67090128;
  *(undefined ***)((int)this + 0x70) = &PTR_FUN_67090110;
  *(undefined ***)((int)this + 0x74) = &PTR_LAB_670900f8;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined1 *)((int)this + 0x1c1) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  if (*(char *)(iVar1 + 0x1d) == '\0') {
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      *(uint *)((int)this + 0x78) = -(uint)(*(char *)(iVar1 + 0x18) != '\0') & 3;
    }
    else {
      *(undefined4 *)((int)this + 0x78) = 4;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x78) = 5;
  }
  FUN_67078320((int)this);
  iVar1 = FUN_6707d1b0((int *)((int)this + 0x16c),*(int *)((int)this + 0x78));
  *param_3 = iVar1;
  if (iVar1 == 0) {
    (**(code **)(**(int **)((int)this + 0x16c) + 0x28))((int)this + 0x1f0);
    this_00 = (void *)FUN_67072130(0xf8);
    if (this_00 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)((int)this + 4);
      if ((*(int *)(iVar1 + 8) == 1) && (*(char *)(iVar1 + 0x1c) != '\0')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      if ((*(int *)(iVar1 + 8) == 1) && (*(char *)(iVar1 + 0x18) != '\0')) {
        puVar2 = FUN_67074320(this_00,1,uVar3,0);
      }
      else {
        puVar2 = FUN_67074320(this_00,0,uVar3,0);
      }
    }
    *(undefined4 **)((int)this + 0x340) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      *param_3 = 2;
    }
  }
  return this;
}


