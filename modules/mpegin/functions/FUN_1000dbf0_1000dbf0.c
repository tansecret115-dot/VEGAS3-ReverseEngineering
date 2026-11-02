/* Module: mpegin.dll
   Function: FUN_1000dbf0
   Address: 1000dbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000dbf0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  
  piVar2 = *(int **)(param_1 + 0x12e54);
  *(int *)(param_1 + 0x1c4) = (int)*(short *)(*piVar2 + 0xe + (piVar2[0x11] + piVar2[0x10]) * 0x18);
  piVar2[0x22] = 0;
  piVar2[0x23] = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x160) = 1;
  piVar2 = *(int **)(param_1 + 0x12e54);
  puVar1 = (uint *)(*piVar2 + (piVar2[0x11] + piVar2[0x10]) * 0x18);
  FUN_10005520(piVar2 + 0x4a,*puVar1,puVar1[1],puVar1[2]);
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x160) = 0;
  iVar4 = FUN_10006440(param_1,0);
  if (iVar4 != 0) {
    return 1;
  }
  piVar2 = *(int **)(param_1 + 0x12e54);
  piVar2[0x24] = *(int *)(*piVar2 + (piVar2[0x11] + piVar2[0x10]) * 0x18);
  piVar2[0x25] = *(int *)(*piVar2 + 4 + (piVar2[0x11] + piVar2[0x10]) * 0x18);
  iVar4 = *(int *)(param_1 + 0x12e54);
  iVar3 = *(int *)(iVar4 + 0x74);
  if ((iVar3 < 0) || ((iVar3 < 1 && (*(int *)(iVar4 + 0x70) == 0)))) {
    if (*(double *)(param_1 + 0x48) == *(double *)(param_1 + 0x40)) {
      lVar7 = __allmul(*(uint *)(iVar4 + 0x40),(int)*(uint *)(iVar4 + 0x40) >> 0x1f,
                       *(uint *)(iVar4 + 0xa8),*(int *)(iVar4 + 0xac));
      *(longlong *)(iVar4 + 0x88) = lVar7 + *(longlong *)(param_1 + 0x4d04);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x12e54);
      FUN_1000e484((double)*(int *)(iVar4 + 0x40) * _DAT_10016118);
      lVar7 = __ftol();
      lVar8 = __allmul(*(uint *)(iVar4 + 0x40),(int)*(uint *)(iVar4 + 0x40) >> 0x1f,
                       *(uint *)(iVar4 + 0xa8),*(int *)(iVar4 + 0xac));
      *(longlong *)(iVar4 + 0x88) = lVar8 + lVar7 + *(longlong *)(param_1 + 0x4d04);
      iVar4 = *(int *)(param_1 + 0x12e54);
      if (*(uint *)(iVar4 + 0x40) != 0) {
        uVar5 = *(uint *)(iVar4 + 0x40) & 0x80000001;
        bVar6 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if ((!bVar6) && (*(int *)(param_1 + 200) != 0)) {
          uVar5 = *(uint *)(iVar4 + 0x88);
          *(uint *)(iVar4 + 0x88) = uVar5 + *(uint *)(iVar4 + 0xb0);
          *(uint *)(iVar4 + 0x8c) =
               *(int *)(iVar4 + 0x8c) + *(int *)(iVar4 + 0xb4) +
               (uint)CARRY4(uVar5,*(uint *)(iVar4 + 0xb0));
        }
      }
    }
  }
  else {
    *(int *)(iVar4 + 0x88) = *(int *)(iVar4 + 0x70);
    *(int *)(iVar4 + 0x8c) = iVar3;
  }
  uVar5 = FUN_1000dbc0(param_1,*(int *)(*(int *)(param_1 + 0x12e54) + 0x44) +
                               *(int *)(*(int *)(param_1 + 0x12e54) + 0x40));
  iVar4 = *(int *)(param_1 + 0x12e54);
  *(undefined4 *)(iVar4 + 0x98) = 0;
  *(undefined4 *)(iVar4 + 0x9c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x160) = 1;
  piVar2 = *(int **)(param_1 + 0x12e54);
  puVar1 = (uint *)(*piVar2 + (piVar2[0x11] + uVar5) * 0x18);
  FUN_10005520(piVar2 + 0x4a,*puVar1,puVar1[1],puVar1[2]);
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x160) = 0;
  iVar4 = FUN_10006440(param_1,0);
  if (iVar4 != 0) {
    return 1;
  }
  piVar2 = *(int **)(param_1 + 0x12e54);
  piVar2[0x28] = *(int *)(*piVar2 + (piVar2[0x11] + uVar5) * 0x18);
  piVar2[0x29] = *(int *)(*piVar2 + 4 + (piVar2[0x11] + uVar5) * 0x18);
  iVar4 = *(int *)(param_1 + 0x12e54);
  iVar3 = *(int *)(iVar4 + 0x74);
  if ((-1 < iVar3) && ((0 < iVar3 || (*(int *)(iVar4 + 0x70) != 0)))) {
    *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x70);
    *(int *)(iVar4 + 0x9c) = iVar3;
    return 0;
  }
  if (*(double *)(param_1 + 0x48) == *(double *)(param_1 + 0x40)) {
    lVar7 = __allmul(*(uint *)(iVar4 + 0xa8),*(int *)(iVar4 + 0xac),uVar5,(int)uVar5 >> 0x1f);
    *(longlong *)(iVar4 + 0x98) = lVar7 + *(longlong *)(param_1 + 0x4d04);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x12e54);
    FUN_1000e484((double)(int)uVar5 * _DAT_10016118);
    lVar7 = __ftol();
    lVar8 = __allmul(*(uint *)(iVar4 + 0xa8),*(int *)(iVar4 + 0xac),uVar5,(int)uVar5 >> 0x1f);
    *(longlong *)(iVar4 + 0x98) = lVar8 + lVar7 + *(longlong *)(param_1 + 0x4d04);
    if (uVar5 != 0) {
      uVar5 = uVar5 & 0x80000001;
      bVar6 = uVar5 == 0;
      if ((int)uVar5 < 0) {
        bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if ((!bVar6) && (*(int *)(param_1 + 200) != 0)) {
        iVar4 = *(int *)(param_1 + 0x12e54);
        uVar5 = *(uint *)(iVar4 + 0x98);
        *(uint *)(iVar4 + 0x98) = uVar5 + *(uint *)(iVar4 + 0xb0);
        *(uint *)(iVar4 + 0x9c) =
             *(int *)(iVar4 + 0x9c) + *(int *)(iVar4 + 0xb4) +
             (uint)CARRY4(uVar5,*(uint *)(iVar4 + 0xb0));
        return 0;
      }
    }
  }
  return 0;
}


