/* Module: sfppack2.dll
   Function: FUN_5ccfedb0
   Address: 5ccfedb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5ccfedb0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_ESI;
  uint uVar9;
  int local_94 [36];
  
  iVar7 = -0x348;
  uVar9 = 0;
  (**(code **)(*(int *)this + 0x60))(this,local_94 + 3,local_94);
  piVar2 = local_94 + 1;
  piVar5 = local_94;
  do {
    iVar4 = *piVar5;
    iVar6 = *piVar2;
    iVar8 = iVar7;
    if (iVar7 < iVar6) {
      iVar8 = iVar6;
      unaff_ESI = iVar6;
    }
    uVar9 = uVar9 + 1;
    *(double *)(iVar4 * -8 + 0x58 + *(int *)((int)this + 0x130)) = (double)(iVar6 - iVar4);
    iVar6 = local_94[uVar9 * 2];
    piVar5 = local_94 + uVar9 * 2;
    piVar2 = local_94 + uVar9 * 2 + 1;
    iVar1 = *piVar2;
    iVar7 = unaff_ESI;
    if (iVar8 < iVar1) {
      iVar7 = iVar1;
    }
    iVar8 = iVar6 * -8 + 0x58;
    *(double *)(iVar8 + *(int *)((int)this + 0x130)) = (double)(iVar1 - iVar6);
    if ((*piVar2 == -0x348) && (local_94[uVar9 * 2 + -1] == -0x348)) {
      puVar3 = (undefined4 *)(iVar8 + *(int *)((int)this + 0x130));
      *puVar3 = 0;
      puVar3[1] = 0xc08a4000;
      puVar3 = (undefined4 *)(iVar4 * -8 + 0x58 + *(int *)((int)this + 0x130));
      *puVar3 = 0;
      puVar3[1] = 0xc08a4000;
    }
    if (((uVar9 == 1) && (local_94[1] == -0x348)) &&
       (iVar1 = *(int *)((int)this + 0x130), *(double *)(iVar8 + iVar1) < _DAT_5cd53af8)) {
      iVar8 = iVar4 * -8 + 0x58;
      *(undefined4 *)(iVar1 + iVar8) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar8) = 0xc08a4000;
    }
    FUN_5ccfec50(*(int *)((int)this + 0x130) + 0x58,-iVar6,-iVar4);
    unaff_ESI = iVar7;
  } while (uVar9 < 0xfffffcb7);
  if ((iVar7 < 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar4 = *(int *)((int)this + 0x130);
    uVar9 = 0;
    if (*(int *)(iVar4 + 0x54) != 0) {
      iVar6 = 0x58;
      do {
        uVar9 = uVar9 + 1;
        *(double *)(iVar6 + iVar4) = *(double *)(iVar6 + iVar4) - (double)iVar7;
        iVar4 = *(int *)((int)this + 0x130);
        iVar6 = iVar6 + 8;
      } while (uVar9 < *(uint *)(iVar4 + 0x54));
    }
  }
  return;
}


