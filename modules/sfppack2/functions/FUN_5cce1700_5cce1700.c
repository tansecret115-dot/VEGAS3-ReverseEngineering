/* Module: sfppack2.dll
   Function: FUN_5cce1700
   Address: 5cce1700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5cce1700(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
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
  
  pfVar1 = *(float **)((int)this + 0x74);
  pfVar2 = *(float **)((int)this + 0x78);
  pfVar3 = *(float **)((int)this + 0x70);
  pfVar4 = *(float **)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  if (((*param_2 == 0) && (*(int *)((int)this + 0xa8) == 0)) && (*(int *)((int)this + 0xa4) == 0)) {
    *param_4 = 0;
    return 1;
  }
  do {
    if (*(int *)((int)this + 0xa8) == 1) {
      (**(code **)((int)this + 0x138))(param_3,param_4);
      if (*(int *)((int)this + 0xa0) < *(int *)((int)this + 0x94)) {
LAB_5cce195d:
        *param_2 = *(int *)((int)this + 0x9c);
        *param_4 = *(undefined4 *)((int)this + 0x98);
        return 0;
      }
      *(undefined4 *)((int)this + 0xa0) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      *(undefined4 *)((int)this + 0xa8) = 0;
      if (*(int *)((int)this + 100) != 0) {
        *param_4 = *(undefined4 *)((int)this + 0x98);
        return 1;
      }
    }
    (**(code **)((int)this + 0x134))(param_1,param_2);
    if (*(int *)((int)this + 100) != 0) {
      pfVar5 = pfVar3 + *(int *)((int)this + 0xa4);
      for (uVar6 = param_5[2] - *(int *)((int)this + 0xa4) & 0x3fffffff; uVar6 != 0;
          uVar6 = uVar6 - 1) {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)pfVar5 = 0;
        pfVar5 = (float *)((int)pfVar5 + 1);
      }
      if (*(short *)(*(int *)((int)this + 0x54) + 2) == 2) {
        pfVar5 = pfVar1 + *(int *)((int)this + 0xa4);
        for (uVar6 = param_5[2] - *(int *)((int)this + 0xa4) & 0x3fffffff; uVar6 != 0;
            uVar6 = uVar6 - 1) {
          *pfVar5 = 0.0;
          pfVar5 = pfVar5 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)pfVar5 = 0;
          pfVar5 = (float *)((int)pfVar5 + 1);
        }
      }
      *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0xa4);
      *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)((int)this + 0x68);
    }
    iVar7 = *(int *)((int)this + 0x68);
    if (*(int *)((int)this + 0xa4) != iVar7) goto LAB_5cce195d;
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
    if (0 < *(int *)((int)this + 0x6c)) {
      iVar8 = (int)pfVar3 - (int)pfVar2;
      pfVar5 = pfVar2;
      do {
        *(float *)(iVar8 + -4 + (int)(pfVar5 + 1)) = *pfVar5 + *(float *)(iVar8 + (int)pfVar5);
        iVar9 = *(int *)((int)this + 0x68) + iVar7;
        iVar7 = iVar7 + 1;
        *pfVar5 = pfVar3[iVar9];
        pfVar5 = pfVar5 + 1;
      } while (iVar7 < *(int *)((int)this + 0x6c));
    }
    if (*(short *)(*(int *)((int)this + 0x54) + 2) == 2) {
      pfVar5 = pfVar1 + *(int *)((int)this + 0x68);
      for (uVar6 = param_5[2] - *(int *)((int)this + 0x68) & 0x3fffffff; uVar6 != 0;
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
      if (0 < *(int *)((int)this + 0x6c)) {
        iVar8 = (int)pfVar1 - (int)pfVar4;
        pfVar5 = pfVar4;
        do {
          *(float *)(iVar8 + -4 + (int)(pfVar5 + 1)) = *pfVar5 + *(float *)(iVar8 + (int)pfVar5);
          iVar9 = *(int *)((int)this + 0x68) + iVar7;
          iVar7 = iVar7 + 1;
          *pfVar5 = pfVar1[iVar9];
          pfVar5 = pfVar5 + 1;
        } while (iVar7 < *(int *)((int)this + 0x6c));
      }
    }
    *(undefined4 *)((int)this + 0xa8) = 1;
  } while( true );
}


