/* Module: vfplugs.dll
   Function: FUN_00475430
   Address: 00475430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00475430(void *this,int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  undefined4 unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uStack_34;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar2 = 4;
  bVar7 = true;
  piVar1 = param_1;
  piVar5 = &DAT_00486970;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar1 == *piVar5;
    piVar1 = piVar1 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar2 = 4;
    bVar7 = true;
    piVar1 = param_1;
    piVar5 = &DAT_00486980;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *piVar1 == *piVar5;
      piVar1 = piVar1 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar2 = 4;
      bVar7 = true;
      piVar1 = &DAT_00490cc8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *param_1 == *piVar1;
        param_1 = param_1 + 1;
        piVar1 = piVar1 + 1;
      } while (bVar7);
      puVar4 = param_2;
      puVar6 = param_2;
      if (bVar7) {
        puVar6 = (undefined4 *)0x20;
        if (param_2 == (undefined4 *)0x1) {
          local_20 = DAT_00490c58;
          local_1c = DAT_00490c5c;
          local_18 = DAT_00490c60;
          local_14 = DAT_00490c64;
          puVar4 = (undefined4 *)((int)this + 0x478);
        }
        else {
          local_20 = DAT_00490c48;
          local_1c = DAT_00490c4c;
          local_18 = DAT_00490c50;
          local_14 = DAT_00490c54;
          puVar4 = (undefined4 *)((int)this + 0x474);
        }
      }
      goto LAB_00475580;
    }
  }
  puVar6 = (undefined4 *)0x1c;
  if (param_2 == (undefined4 *)0x1) {
    local_20 = DAT_004866e0;
    local_1c = DAT_004866e4;
    local_18 = DAT_004866e8;
    local_14 = DAT_004866ec;
    puVar4 = (undefined4 *)((int)this + 0x470);
  }
  else {
    local_20 = DAT_004866d0;
    local_1c = DAT_004866d4;
    local_18 = DAT_004866d8;
    local_14 = DAT_004866dc;
    puVar4 = (undefined4 *)((int)this + 0x46c);
  }
LAB_00475580:
  if ((*(int *)((int)this + 0x484) == 0) || (param_2 == (undefined4 *)0x0)) {
    piVar1 = *(int **)((int)this + 0x468);
    iVar3 = *piVar1;
    iVar2 = (int)this + 0x4a0;
  }
  else {
    piVar1 = *(int **)((int)this + 0x468);
    iVar3 = *piVar1;
    iVar2 = (int)this + 0x500;
  }
  uStack_34 = 0;
  iVar2 = (**(code **)(iVar3 + 0x28))(piVar1,iVar2,0,param_2 == (undefined4 *)0x1,&local_20,puVar4);
  if (iVar2 < 0) {
    *puVar4 = 0;
    return 0;
  }
  iVar2 = FUN_0043c7e0(this,(int)puVar6,*(int *)((int)this + 0x494) - *(int *)((int)this + 0x48c),
                       *(int *)((int)this + 0x498) - *(int *)((int)this + 0x490),(uint *)0x0,0,
                       &local_18);
  if (iVar2 < 0) {
    return 0;
  }
  (**(code **)(*(int *)*puVar4 + 0x10))((int *)*puVar4,&stack0xffffffd4);
  *(undefined4 *)((int)this + 0x488) = unaff_EDI;
  if ((*(int *)((int)this + 0x484) != 0) && (local_1c != 0)) {
    iVar2 = FUN_00475400((int)&uStack_34,(int)this + 0x500,*(int *)((int)this + 0x54c));
    *(int *)((int)this + 0x488) = iVar2;
  }
  FUN_004752e0((undefined4 *)((int)this + 0x428),(double *)((int)this + 0x550));
  *(undefined4 *)((int)this + 0x56c) = unaff_ESI;
  *(void **)((int)this + 0x568) = this;
  return 1;
}


