/* Module: sfppack2.dll
   Function: FUN_5ccdbb00
   Address: 5ccdbb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5ccdbb00(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pfVar1 = *(float **)((int)this + 0x2d4);
  pfVar2 = *(float **)((int)this + 0x2d8);
  pfVar3 = *(float **)((int)this + 0x2d0);
  pfVar4 = *(float **)((int)this + 0x2dc);
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  if (((*param_2 == 0) && (*(int *)((int)this + 0x2fc) == 0)) && (*(int *)((int)this + 0x2f8) == 0))
  {
    *param_4 = 0;
    return 1;
  }
  do {
    if (*(int *)((int)this + 0x2fc) == 1) {
      (**(code **)((int)this + 0xa94))(param_3,param_4,param_5[6],param_5[7]);
      if (*(int *)((int)this + 0x2f4) < *(int *)((int)this + 0x2e8)) {
LAB_5ccdbd9c:
        *param_2 = *(int *)((int)this + 0x2f0);
        *param_4 = *(undefined4 *)((int)this + 0x2ec);
        return 0;
      }
      *(undefined4 *)((int)this + 0x2f4) = 0;
      *(undefined4 *)((int)this + 0x2f8) = 0;
      *(undefined4 *)((int)this + 0x2fc) = 0;
      if (*(int *)((int)this + 0x2c8) != 0) {
        *param_4 = *(undefined4 *)((int)this + 0x2ec);
        return 1;
      }
    }
    (**(code **)((int)this + 0xa90))(param_1,param_2);
    if (*(int *)((int)this + 0x2c8) != 0) {
      pfVar5 = pfVar3 + *(int *)((int)this + 0x2f8);
      for (uVar6 = param_5[2] - *(int *)((int)this + 0x2f8) & 0x3fffffff; uVar6 != 0;
          uVar6 = uVar6 - 1) {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)pfVar5 = 0;
        pfVar5 = (float *)((int)pfVar5 + 1);
      }
      if (*(short *)(*(int *)((int)this + 0x2b8) + 2) == 2) {
        pfVar5 = pfVar1 + *(int *)((int)this + 0x2f8);
        for (uVar6 = param_5[2] - *(int *)((int)this + 0x2f8) & 0x3fffffff; uVar6 != 0;
            uVar6 = uVar6 - 1) {
          *pfVar5 = 0.0;
          pfVar5 = pfVar5 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)pfVar5 = 0;
          pfVar5 = (float *)((int)pfVar5 + 1);
        }
      }
      *(undefined4 *)((int)this + 0x2e8) = *(undefined4 *)((int)this + 0x2f8);
      *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)((int)this + 0x2e0);
    }
    iVar7 = *(int *)((int)this + 0x2e0);
    if (*(int *)((int)this + 0x2f8) != iVar7) goto LAB_5ccdbd9c;
    pfVar5 = pfVar3 + iVar7;
    for (uVar6 = param_5[2] - iVar7 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)pfVar5 = 0;
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
    FUN_5cd266e0((undefined4 *)*param_5,pfVar3,param_5[2],1.0,0x3f800000,&LAB_5cd2d2e0,param_5[3]);
    iVar7 = 0;
    if (0 < *(int *)((int)this + 0x2e4)) {
      iVar8 = (int)pfVar3 - (int)pfVar2;
      pfVar5 = pfVar2;
      do {
        *(float *)(iVar8 + -4 + (int)(pfVar5 + 1)) = *pfVar5 + *(float *)(iVar8 + (int)pfVar5);
        iVar9 = *(int *)((int)this + 0x2e0) + iVar7;
        iVar7 = iVar7 + 1;
        *pfVar5 = pfVar3[iVar9];
        pfVar5 = pfVar5 + 1;
      } while (iVar7 < *(int *)((int)this + 0x2e4));
    }
    if (*(short *)(*(int *)((int)this + 0x2b8) + 2) == 2) {
      pfVar5 = pfVar1 + *(int *)((int)this + 0x2e0);
      for (uVar6 = param_5[2] - *(int *)((int)this + 0x2e0) & 0x3fffffff; uVar6 != 0;
          uVar6 = uVar6 - 1) {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)pfVar5 = 0;
        pfVar5 = (float *)((int)pfVar5 + 1);
      }
      FUN_5cd266e0((undefined4 *)*param_5,pfVar1,param_5[2],1.0,0x3f800000,&LAB_5cd2d2e0,param_5[3])
      ;
      iVar7 = 0;
      if (0 < *(int *)((int)this + 0x2e4)) {
        iVar8 = (int)pfVar1 - (int)pfVar4;
        pfVar5 = pfVar4;
        do {
          *(float *)(iVar8 + -4 + (int)(pfVar5 + 1)) = *pfVar5 + *(float *)(iVar8 + (int)pfVar5);
          iVar9 = *(int *)((int)this + 0x2e0) + iVar7;
          iVar7 = iVar7 + 1;
          *pfVar5 = pfVar1[iVar9];
          pfVar5 = pfVar5 + 1;
        } while (iVar7 < *(int *)((int)this + 0x2e4));
      }
    }
    *(undefined4 *)((int)this + 0x2fc) = 1;
  } while( true );
}


