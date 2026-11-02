/* Module: rmme3260.dll
   Function: FUN_66248050
   Address: 66248050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66248050(void *this,int *param_1,int *param_2)

{
  void *this_00;
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR_LAB_6626c8d0;
  *(undefined4 *)((int)this + 4) = 0;
  *(int **)((int)this + 8) = param_1;
  *(int **)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x1194) = 0;
  *(undefined4 *)((int)this + 0x1198) = 0;
  *(undefined4 *)((int)this + 0x119c) = 0;
  *(undefined4 *)((int)this + 0x11a0) = 0;
  *(undefined4 *)((int)this + 0x11a4) = 0;
  *(undefined4 *)((int)this + 0x11a8) = 0;
  FUN_662500f0((undefined4 *)((int)this + 0x1610));
  *(undefined4 *)((int)this + 0x161c) = 0;
  *(undefined4 *)((int)this + 0x1620) = 0;
  *(undefined4 *)((int)this + 0x1624) = 0;
  *(undefined4 *)((int)this + 0x1628) = 0;
  *(undefined4 *)((int)this + 0x162c) = 0xff0000;
  *(undefined4 *)((int)this + 0x1630) = 0x800000;
  *(undefined4 *)((int)this + 0x1634) = 0;
  *(undefined4 *)((int)this + 0x1638) = 0;
  FUN_66249d10((void *)((int)this + 0x163c));
  *(undefined4 *)((int)this + 0x1658) = 0;
  *(undefined4 *)((int)this + 0x165c) = 0;
  *(undefined4 *)((int)this + 0x1660) = 0;
  *(undefined4 *)((int)this + 0x1664) = 0;
  *(undefined4 *)((int)this + 0x1668) = 0xbf800000;
  *(undefined2 *)((int)this + 0x166c) = 0;
  *(undefined4 *)((int)this + 0x166e) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1672) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1676) = 0x3f800000;
  *(undefined4 *)((int)this + 0x167a) = 0x3f800000;
  *(undefined4 *)((int)this + 0x167e) = 0x3f800000;
  FUN_662509f0((undefined4 *)((int)this + 0x1682));
  *(undefined ***)this = &PTR_FUN_6626c8a8;
  (**(code **)(**(int **)((int)this + 8) + 4))(*(int **)((int)this + 8));
  (**(code **)(**(int **)((int)this + 0xc) + 4))(*(int **)((int)this + 0xc));
  FUN_66245420((int *)0x0);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  puVar3 = (undefined4 *)((int)this + 0x48);
  for (iVar2 = 0x33e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)((int)this + 0xd40);
  for (iVar2 = 0x111; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1184) = 0;
  *(undefined4 *)((int)this + 0x1188) = 0;
  *(undefined4 *)((int)this + 0x118c) = 0;
  *(undefined4 *)((int)this + 0x1190) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  puVar3 = (undefined4 *)((int)this + 0x11ac);
  for (iVar2 = 0x111; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x15fc) = 0;
  *(undefined4 *)((int)this + 0x1600) = 0;
  *(undefined4 *)((int)this + 0x1604) = 0;
  *(undefined4 *)((int)this + 0x1608) = 0;
  *(undefined4 *)((int)this + 0x15f0) = 0;
  *(undefined4 *)((int)this + 0x15f4) = 0;
  *(undefined4 *)((int)this + 0x15f8) = 0;
  *(undefined4 *)((int)this + 0x160c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  DAT_6627d0f4 = DAT_6627d0f4 + 1;
  if (DAT_6627d0f4 == 1) {
    this_00 = operator_new(0x148);
    if (this_00 == (void *)0x0) {
      DAT_6627d0f0 = (undefined4 *)0x0;
    }
    else {
      DAT_6627d0f0 = FUN_66245cd0(this_00,(int *)0x0);
    }
  }
  param_2 = (int *)0x0;
  param_1 = (int *)0x0;
  bVar5 = false;
  bVar4 = true;
  iVar2 = (**(code **)**(undefined4 **)((int)this + 8))
                    (*(undefined4 **)((int)this + 8),&DAT_6626abb8,&param_2);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_2 + 0xc))(param_2,s_UseWinDraw_6626fd3c,&param_1);
    if (iVar2 == 0) {
      pcVar1 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      iVar2 = atoi(pcVar1);
      bVar4 = iVar2 == 1;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    iVar2 = (**(code **)(*param_2 + 0xc))(param_2,s_UseCardMemory_6627049c,&param_1);
    if (iVar2 == 0) {
      pcVar1 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      iVar2 = atoi(pcVar1);
      bVar5 = iVar2 == 1;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (bVar4) {
    *(undefined4 *)((int)this + 0x11a8) = 1;
    *(uint *)((int)this + 0x11a8) = (-(uint)bVar5 & 0xffffffe8) + 0x21;
  }
  return this;
}


