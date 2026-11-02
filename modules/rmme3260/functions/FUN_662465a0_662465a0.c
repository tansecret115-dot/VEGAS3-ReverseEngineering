/* Module: rmme3260.dll
   Function: FUN_662465a0
   Address: 662465a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_662465a0(void *this,int *param_1,int *param_2)

{
  void *this_00;
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  double dVar4;
  uint local_8;
  
  *(undefined ***)this = &PTR_LAB_6626c1e0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626c450;
  *(int **)((int)this + 0xc) = param_1;
  *(int **)((int)this + 0x3a) = param_2;
  *(undefined4 *)((int)this + 0x4f2) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x4a2) = 0;
  *(undefined4 *)((int)this + 0x4a6) = 0;
  *(undefined4 *)((int)this + 0x4aa) = 1;
  *(undefined4 *)((int)this + 0x4ae) = 1;
  *(undefined4 *)((int)this + 0x4b2) = 1;
  *(undefined4 *)((int)this + 0x4b6) = 0;
  *(undefined4 *)((int)this + 0x4ea) = 0;
  *(undefined4 *)((int)this + 0x4ee) = 0;
  *(undefined4 *)((int)this + 0x4f6) = 0x3ff00000;
  FUN_662509f0((undefined4 *)((int)this + 0x4fa));
  *(undefined ***)this = &PTR_FUN_6626c880;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626c848;
  *(undefined4 *)((int)this + 0x49a) = 0;
  *(undefined4 *)((int)this + 0x49e) = 0;
  puVar3 = (undefined4 *)((int)this + 0x56);
  for (iVar2 = 0x111; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x4ba) = 0;
  *(undefined4 *)((int)this + 0x4be) = 0;
  *(undefined4 *)((int)this + 0x4c2) = 0;
  *(undefined4 *)((int)this + 0x4c6) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4ca) = 0;
  *(undefined4 *)((int)this + 0x4ce) = 0;
  *(undefined4 *)((int)this + 0x4d2) = 0;
  *(undefined4 *)((int)this + 0x4d6) = 0;
  *(undefined4 *)((int)this + 0x4da) = 0;
  *(undefined4 *)((int)this + 0x4de) = 0;
  *(undefined4 *)((int)this + 0x4e2) = 0;
  *(undefined4 *)((int)this + 0x4e6) = 0;
  (**(code **)(**(int **)((int)this + 0xc) + 4))(*(int **)((int)this + 0xc));
  DAT_6627d0dc = DAT_6627d0dc + 1;
  if (DAT_6627d0dc == 1) {
    this_00 = operator_new(0x148);
    if (this_00 == (void *)0x0) {
      DAT_6627d0d8 = (undefined4 *)0x0;
    }
    else {
      DAT_6627d0d8 = FUN_66245cd0(this_00,(int *)0x0);
    }
  }
  param_2 = (int *)0x0;
  param_1 = (int *)0x0;
  iVar2 = (**(code **)**(undefined4 **)((int)this + 0xc))
                    (*(undefined4 **)((int)this + 0xc),&DAT_6626abb8,&param_2);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_2 + 0xc))(param_2,s_SiteZoomFactor_6627043c,&param_1);
    if (iVar2 == 0) {
      pcVar1 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      dVar4 = atof(pcVar1);
      local_8 = (uint)(dVar4 != _DAT_6626c830);
      *(double *)((int)this + 0x4f2) = (double)local_8;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    iVar2 = (**(code **)(*param_2 + 0xc))(param_2,s_UseOverlay_66270430,&param_1);
    if (iVar2 == 0) {
      pcVar1 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      dVar4 = atof(pcVar1);
      *(uint *)((int)this + 0x4ae) = (uint)(dVar4 == _DAT_6626c830);
    }
    iVar2 = (**(code **)(*param_2 + 0xc))(param_2,s__fSpamUpdateOverlay_6627041a + 2,&param_1);
    if (iVar2 == 0) {
      pcVar1 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      dVar4 = atof(pcVar1);
      *(uint *)((int)this + 0x4b2) = (uint)(dVar4 == _DAT_6626c830);
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return this;
}


