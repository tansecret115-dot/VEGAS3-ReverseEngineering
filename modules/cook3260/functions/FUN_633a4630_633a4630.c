/* Module: cook3260.dll
   Function: FUN_633a4630
   Address: 633a4630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a4630(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *this;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float local_2058 [20];
  undefined4 local_2008 [2028];
  int local_58 [15];
  undefined4 uStackY_1c;
  
  FUN_633a7330();
  iVar5 = FUN_633a4380(this,(int)local_58);
  uStackY_1c = 0x633a465f;
  FUN_633a4130(this,(int)param_1 - iVar5,(int)local_2058);
  param_1 = (int *)0x0;
  if (0 < *(int *)((int)this + 0x18)) {
    puVar7 = local_2008;
    puVar6 = param_3;
    do {
      iVar5 = 0x14;
      puVar8 = puVar7;
      do {
        *(undefined4 *)((param_2 - (int)param_3) + (int)puVar6) = puVar8[-0x14];
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (iVar5 != 0);
      param_1 = (int *)((int)param_1 + 1);
      puVar7 = puVar7 + 0x28;
    } while ((int)param_1 < *(int *)((int)this + 0x18));
  }
  uVar4 = *(undefined4 *)((int)this + 0x1c);
  iVar5 = *(int *)((int)this + 0x18);
  if (iVar5 < *(int *)((int)this + 0xc)) {
    pfVar10 = (float *)(param_3 + iVar5 * 0x14);
    param_1 = (int *)(&DAT_633a8c50 + iVar5 * 4);
    do {
      fVar2 = *(float *)(*(int *)(&DAT_633a8f38 + *(int *)((int)this + 0x1c) * 4) +
                        local_58[*param_1] * 4);
      fVar3 = *(float *)(*(int *)(&DAT_633a8f38 + *(int *)((int)this + 0x1c) * 4) + -4 +
                        (((1 << ((byte)uVar4 & 0x1f)) + -1) - local_58[*param_1]) * 4);
      iVar9 = 0;
      pfVar11 = pfVar10;
      do {
        pfVar10 = pfVar11 + 1;
        *(float *)((int)pfVar11 + (param_2 - (int)param_3)) =
             local_2058[iVar9 + (iVar5 + *(int *)((int)this + 0x18)) * 0x14] * fVar2;
        iVar1 = iVar9 + (iVar5 + *(int *)((int)this + 0x18)) * 0x14;
        iVar9 = iVar9 + 1;
        *pfVar11 = local_2058[iVar1] * fVar3;
        pfVar11 = pfVar10;
      } while (iVar9 < 0x14);
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar5 < *(int *)((int)this + 0xc));
  }
  iVar5 = *(int *)((int)this + 0xc) * 0x14;
  if (iVar5 < *(int *)((int)this + 4)) {
    puVar7 = param_3 + *(int *)((int)this + 0xc) * 0x14;
    do {
      *(undefined4 *)((int)puVar7 + (param_2 - (int)param_3)) = 0;
      *puVar7 = 0;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)((int)this + 4));
  }
  return;
}


