/* Module: cook3260.dll
   Function: FUN_633a34a0
   Address: 633a34a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_633a34a0(void *this,byte *param_1,int param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float *pfVar10;
  int *piVar11;
  undefined2 *local_10;
  float *local_c;
  undefined4 *local_8;
  
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x47a0) = 0;
    *(undefined4 *)((int)this + 0x47a4) = 0;
    iVar6 = *(int *)((int)this + 0x10);
    *(int *)((int)this + 0x47a8) = iVar6;
    *(uint **)((int)this + 0x479c) = *(uint **)((int)this + 0x4798);
    FUN_633a3a70(param_1,iVar6,*(uint **)((int)this + 0x4798));
    iVar2 = FUN_633a56a0(this,(int *)((int)this + 0xa9d8));
    iVar7 = *(int *)((int)this + 8);
    piVar3 = (int *)((int)this + 0xa9d8);
    piVar8 = (int *)((int)this + 0xaaa4);
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar8 = piVar8 + 1;
    }
    if (iVar7 == 2) {
      FUN_633a4630((int *)(iVar6 - iVar2),*(int *)((int)this + 0xeaf0),
                   *(undefined4 **)((int)this + 0xeaf4));
    }
    else {
      FUN_633a4130(this,iVar6 - iVar2,*(int *)((int)this + 0xeaf0));
    }
  }
  if ((*(int *)((int)this + 0x10af8) != 0) && (param_1 = (byte *)0x0, 0 < *(int *)((int)this + 8)))
  {
    piVar3 = (int *)((int)this + 0xeae8);
    piVar8 = (int *)((int)this + 0xa9d8);
    do {
      if ((param_2 == 0) && (*piVar8 == 0)) {
        if (piVar8[-0x22] == 0) {
          iVar6 = 0;
          if (0 < *(int *)((int)this + 4)) {
            do {
              iVar7 = iVar6 * 4;
              iVar2 = iVar6 * 4;
              iVar5 = iVar6 * 4;
              iVar6 = iVar6 + 1;
              *(float *)(*piVar3 + iVar5) =
                   (*(float *)(piVar3[2] + iVar7) + *(float *)(*piVar3 + iVar2)) * _DAT_633a80b0;
            } while (iVar6 < *(int *)((int)this + 4));
          }
        }
        else {
          piVar9 = piVar8;
          piVar11 = piVar8 + -0x11;
          for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar11 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar11 = piVar11 + 1;
          }
          iVar6 = 0;
          if (0 < *(int *)((int)this + 4)) {
            do {
              iVar6 = iVar6 + 1;
              *(float *)(*piVar3 + -4 + iVar6 * 4) =
                   *(float *)(piVar3[2] + -4 + iVar6 * 4) * _DAT_633a80ac;
            } while (iVar6 < *(int *)((int)this + 4));
          }
        }
      }
      else {
        iVar6 = 0;
        if (0 < *(int *)((int)this + 4)) {
          do {
            iVar7 = iVar6 * 4;
            iVar2 = iVar6 * 4;
            iVar6 = iVar6 + 1;
            *(float *)(*piVar3 + iVar2) = *(float *)(*piVar3 + iVar7) * _DAT_633a80ac;
          } while (iVar6 < *(int *)((int)this + 4));
        }
      }
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
      piVar8 = piVar8 + 0x33;
    } while ((int)param_1 < *(int *)((int)this + 8));
  }
  param_1 = (byte *)0x0;
  if (0 < *(int *)((int)this + 8)) {
    piVar3 = (int *)((int)this + 0xa994);
    local_8 = (undefined4 *)((int)this + 0xeae8);
    local_c = (float *)((int)this + 0xeaf8);
    local_10 = param_3;
    do {
      pfVar10 = (float *)((int)this + 0x14afc);
      FUN_633a6260((float *)*local_8,pfVar10);
      FUN_633a55a0(this,pfVar10,piVar3 + -0x11,piVar3,*(int *)((int)this + 4),local_c);
      iVar6 = 0;
      puVar4 = local_10;
      if (0 < *(int *)((int)this + 4)) {
        do {
          iVar7 = (int)ROUND(*pfVar10);
          if (iVar7 < -0x8000) {
            iVar7 = -0x8000;
          }
          else if (0x7fff < iVar7) {
            iVar7 = 0x7fff;
          }
          *puVar4 = (short)iVar7;
          iVar6 = iVar6 + 1;
          pfVar10 = pfVar10 + 1;
          puVar4 = puVar4 + *(int *)((int)this + 8);
        } while (iVar6 < *(int *)((int)this + 4));
      }
      if (param_2 == 0) {
        uVar1 = *local_8;
        *local_8 = local_8[2];
        local_8[2] = uVar1;
      }
      piVar8 = piVar3;
      piVar9 = piVar3 + -0x11;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      piVar8 = piVar3 + 0x11;
      piVar9 = piVar3;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      *(int *)((int)this + 0x10af8) = param_2;
      param_1 = param_1 + 1;
      local_c = local_c + 0x400;
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
      piVar3 = piVar3 + 0x33;
    } while ((int)param_1 < *(int *)((int)this + 8));
  }
  return 0;
}


