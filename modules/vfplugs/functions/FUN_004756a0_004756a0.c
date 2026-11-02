/* Module: vfplugs.dll
   Function: FUN_004756a0
   Address: 004756a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004756a0(void *this,int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 4;
  bVar6 = true;
  piVar4 = param_1;
  piVar5 = &DAT_00486970;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
LAB_0047571a:
    iVar3 = FUN_0043c970((undefined4 *)((int)this + 0x568),0x1c,
                         *(int *)((int)this + 0x494) - *(int *)((int)this + 0x48c),
                         *(int *)((int)this + 0x498) - *(int *)((int)this + 0x490),(uint *)0x0,0,0);
    if (iVar3 < 0) {
      return 0;
    }
  }
  else {
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_1;
    piVar5 = &DAT_00486980;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) goto LAB_0047571a;
    iVar3 = 4;
    bVar6 = true;
    piVar4 = &DAT_00490cc8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *param_1 == *piVar4;
      param_1 = param_1 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0;
    }
    iVar3 = FUN_0043c970((undefined4 *)((int)this + 0x568),0x20,
                         *(int *)((int)this + 0x494) - *(int *)((int)this + 0x48c),
                         *(int *)((int)this + 0x498) - *(int *)((int)this + 0x490),(uint *)0x0,0,0);
    if (iVar3 < 0) {
      return 0;
    }
  }
  piVar4 = *(int **)((int)this + 0x568);
  *(uint *)((int)this + 0x548) = *(uint *)((int)this + 0x548) | 1;
  if (piVar4[4] == 0) {
    if (((piVar4[8] != 0) || (uVar1 = *(ushort *)((int)piVar4 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0047579a;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar4[4] == 3) {
      piVar4 = piVar4 + 0xd;
      goto LAB_004757a4;
    }
LAB_0047579a:
    iVar3 = piVar4[8];
  }
  piVar4 = (int *)(*piVar4 + iVar3 * 4 + (int)piVar4);
LAB_004757a4:
  *(int **)((int)this + 0x488) = piVar4;
  FUN_004752e0((undefined4 *)((int)this + 0x428),(double *)((int)this + 0x550));
  iVar3 = *(int *)((int)this + 0x568);
  uVar2 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
  *(int *)((int)this + 0x488) =
       *(int *)((int)this + 0x488) +
       ((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3) *
       ((*(int *)((int)this + 0x498) - *(int *)((int)this + 0x490)) + -1);
  uVar2 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
  *(int *)((int)this + 0x56c) = -((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3);
  return 1;
}


