/* Module: sfppack2.dll
   Function: FUN_5ccdc280
   Address: 5ccdc280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5ccdc280(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pdVar1 = *(double **)((int)this + 0x2d0);
  pdVar2 = *(double **)((int)this + 0x2d4);
  pdVar3 = *(double **)((int)this + 0x2d8);
  pdVar4 = *(double **)((int)this + 0x2dc);
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
LAB_5ccdc54e:
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
      pdVar5 = pdVar1 + *(int *)((int)this + 0x2f8);
      for (iVar6 = (param_5[2] - *(int *)((int)this + 0x2f8) & 0x1fffffffU) << 1; iVar6 != 0;
          iVar6 = iVar6 + -1) {
        *(undefined4 *)pdVar5 = 0;
        pdVar5 = (double *)((int)pdVar5 + 4);
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)pdVar5 = 0;
        pdVar5 = (double *)((int)pdVar5 + 1);
      }
      if (*(short *)(*(int *)((int)this + 0x2b8) + 2) == 2) {
        pdVar5 = pdVar2 + *(int *)((int)this + 0x2f8);
        for (iVar6 = (param_5[2] - *(int *)((int)this + 0x2f8) & 0x1fffffffU) << 1; iVar6 != 0;
            iVar6 = iVar6 + -1) {
          *(undefined4 *)pdVar5 = 0;
          pdVar5 = (double *)((int)pdVar5 + 4);
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)pdVar5 = 0;
          pdVar5 = (double *)((int)pdVar5 + 1);
        }
      }
      *(undefined4 *)((int)this + 0x2e8) = *(undefined4 *)((int)this + 0x2f8);
      *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)((int)this + 0x2e0);
    }
    iVar6 = *(int *)((int)this + 0x2e0);
    if (*(int *)((int)this + 0x2f8) != iVar6) goto LAB_5ccdc54e;
    pdVar5 = pdVar1 + iVar6;
    for (iVar7 = (param_5[2] - iVar6 & 0x1fffffffU) << 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pdVar5 = 0;
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)pdVar5 = 0;
      pdVar5 = (double *)((int)pdVar5 + 1);
    }
    FUN_5cd265b0((undefined4 *)*param_5,pdVar1,param_5[2],0,0x3ff00000,0,0x3ff00000,&LAB_5cd2d370,
                 param_5[3]);
    iVar6 = 0;
    if (0 < *(int *)((int)this + 0x2e4)) {
      iVar7 = (int)pdVar1 - (int)pdVar3;
      pdVar5 = pdVar3;
      do {
        *(double *)(iVar7 + -8 + (int)(pdVar5 + 1)) = *pdVar5 + *(double *)(iVar7 + (int)pdVar5);
        iVar8 = *(int *)((int)this + 0x2e0) + iVar6;
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar5 = *(undefined4 *)(pdVar1 + iVar8);
        *(undefined4 *)((int)pdVar5 + 4) = *(undefined4 *)((int)pdVar1 + iVar8 * 8 + 4);
        pdVar5 = pdVar5 + 1;
      } while (iVar6 < *(int *)((int)this + 0x2e4));
    }
    if (*(short *)(*(int *)((int)this + 0x2b8) + 2) == 2) {
      pdVar5 = pdVar2 + *(int *)((int)this + 0x2e0);
      for (iVar6 = (param_5[2] - *(int *)((int)this + 0x2e0) & 0x1fffffffU) << 1; iVar6 != 0;
          iVar6 = iVar6 + -1) {
        *(undefined4 *)pdVar5 = 0;
        pdVar5 = (double *)((int)pdVar5 + 4);
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)pdVar5 = 0;
        pdVar5 = (double *)((int)pdVar5 + 1);
      }
      FUN_5cd265b0((undefined4 *)*param_5,pdVar2,param_5[2],0,0x3ff00000,0,0x3ff00000,&LAB_5cd2d370,
                   param_5[3]);
      iVar6 = 0;
      if (0 < *(int *)((int)this + 0x2e4)) {
        iVar7 = (int)pdVar2 - (int)pdVar4;
        pdVar5 = pdVar4;
        do {
          *(double *)(iVar7 + -8 + (int)(pdVar5 + 1)) = *pdVar5 + *(double *)(iVar7 + (int)pdVar5);
          iVar8 = *(int *)((int)this + 0x2e0) + iVar6;
          iVar6 = iVar6 + 1;
          *(undefined4 *)pdVar5 = *(undefined4 *)(pdVar2 + iVar8);
          *(undefined4 *)((int)pdVar5 + 4) = *(undefined4 *)((int)pdVar2 + iVar8 * 8 + 4);
          pdVar5 = pdVar5 + 1;
        } while (iVar6 < *(int *)((int)this + 0x2e4));
      }
    }
    *(undefined4 *)((int)this + 0x2fc) = 1;
  } while( true );
}


