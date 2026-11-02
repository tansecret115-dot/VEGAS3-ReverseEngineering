/* Module: rmbe3260.dll
   Function: FUN_6603e840
   Address: 6603e840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603e840(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (param_1 == 0) {
    return 0xfff9;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    if (*(int *)((int)this + 0x1c) == 0) {
      puVar1 = operator_new(0x73);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_660613a0(puVar1);
      }
      *(undefined4 **)((int)this + 0x1c) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        iVar2 = -0x7ff8fff2;
      }
      if (iVar2 < 0) goto LAB_6603e8b0;
      iVar2 = FUN_660313d0(*(void **)((int)this + 0x18),puVar1);
    }
    if (-1 < iVar2) {
      iVar2 = (**(code **)**(undefined4 **)((int)this + 0x1c))
                        (*(undefined4 **)((int)this + 0x1c),param_1);
    }
  }
LAB_6603e8b0:
  if ((*(int *)((int)this + 0x20) != 0) && (-1 < iVar2)) {
    if (*(int *)((int)this + 0x24) == 0) {
      puVar1 = operator_new(0x73);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_660613a0(puVar1);
      }
      *(undefined4 **)((int)this + 0x24) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        iVar2 = -0x7ff8fff2;
      }
      if (iVar2 < 0) goto LAB_6603e905;
      iVar2 = FUN_660313d0(*(void **)((int)this + 0x20),puVar1);
    }
    if (-1 < iVar2) {
      iVar2 = (**(code **)**(undefined4 **)((int)this + 0x24))
                        (*(undefined4 **)((int)this + 0x24),param_1);
    }
  }
LAB_6603e905:
  if (iVar2 == -0x7ff8fff2) {
    return 0xfff3;
  }
  if (iVar2 < 0) {
    local_8 = 0xfff2;
  }
  return local_8;
}


