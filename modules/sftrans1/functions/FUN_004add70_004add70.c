/* Module: sftrans1.dll
   Function: FUN_004add70
   Address: 004add70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004add70(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  int iStack_b50;
  int iStack_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  undefined4 uStack_b38;
  undefined4 uStack_b34;
  int iStack_b30;
  int iStack_b2c;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined1 auStack_b14 [8];
  undefined1 local_b0c [4];
  undefined1 local_b08 [1092];
  double dStack_6c4;
  void *pvStack_67c;
  tagRECT atStack_678 [12];
  long lStack_5b8;
  long lStack_598;
  undefined4 uStack_104;
  undefined1 auStack_100 [224];
  undefined4 uStack_20;
  
  FUN_0052f210();
  FUN_0052f210();
  iVar3 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))
                    (*(int **)(param_1 + 0xa8),local_b08,local_b0c);
  iStack_b50 = iVar3;
  if (-1 < iVar3) {
    iVar4 = FUN_0052f290(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),auStack_b14,0,param_2 + 0x50)
    ;
    if ((iVar4 == 0) ||
       (iVar4 = FUN_0052f290(*(undefined4 *)(param_1 + 0xa8),auStack_b14,1,param_2 + 8), iVar4 == 0)
       ) {
      FUN_0052f260();
      FUN_0052f260();
      return -0x7fffbffb;
    }
    if ((*(int *)(param_1 + 0x18c) != 0) || (*(int *)(param_1 + 0x1c8) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
      if (*(int *)(param_1 + 0x1c8) == 0) {
        puVar5 = (undefined4 *)(param_1 + 0x154);
        puVar6 = (undefined4 *)(param_1 + 0x170);
        for (iVar4 = 7; iVar3 = iStack_b50, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        FUN_004ad3e0(param_1 + 400,param_1 + 0x1ac,*(undefined4 *)(param_1 + 0x1d0),
                     *(undefined4 *)(param_1 + 0x1d4));
      }
      *(undefined4 *)(param_1 + 0x18c) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    if (*(float *)(param_1 + 0x174) == _DAT_00557840) {
      FUN_004cded0(pvStack_67c,atStack_678,lStack_598,0,uStack_104,auStack_100,uStack_20,0,
                   lStack_5b8);
    }
    else {
      fVar1 = (float)(atStack_678[0].right - atStack_678[0].left);
      iStack_b50 = atStack_678[0].bottom - atStack_678[0].top;
      fVar2 = (float)iStack_b50;
      fVar7 = fVar2;
      if (fVar2 < fVar1) {
        fVar7 = fVar1;
      }
      fVar8 = ((fVar7 * *(float *)(param_1 + 0x174)) / (float)dStack_6c4) * (float)_DAT_00557838;
      fVar7 = fVar2;
      if (fVar2 < fVar1) {
        fVar7 = fVar1;
      }
      fVar7 = fVar7 * *(float *)(param_1 + 0x174) * _DAT_0055c00c;
      if (_DAT_00557840 <= fVar8) {
        if (fVar1 * _DAT_0055c00c < fVar8) {
          fVar8 = fVar1 * _DAT_0055c00c;
        }
      }
      else {
        fVar8 = 0.0;
      }
      if (_DAT_00557840 <= fVar7) {
        if (fVar2 * _DAT_0055c00c < fVar7) {
          fVar7 = fVar2 * _DAT_0055c00c;
        }
      }
      else {
        fVar7 = 0.0;
      }
      iVar4 = *(int *)(param_1 + 0x170);
      if (iVar4 == 0) {
        FUN_004cd320(pvStack_67c,atStack_678,lStack_598,0,lStack_5b8,0,0,0,0,0,0,0,0);
        uStack_b28 = ftol();
        uStack_b24 = ftol();
        uStack_b20 = ftol();
        uStack_b1c = ftol();
        iStack_b2c = atStack_678[0].bottom - atStack_678[0].top;
        uStack_b38 = 1;
        uStack_b34 = 1;
        iStack_b50 = -1;
        iStack_b30 = atStack_678[0].right - atStack_678[0].left;
        FUN_004fe430(pvStack_67c,&iStack_b30,lStack_598,&uStack_b28,&iStack_b50,&uStack_b38,0,0,
                     lStack_5b8,0,0);
        FUN_004da4e0(pvStack_67c,atStack_678,lStack_598,0,pvStack_67c,atStack_678,lStack_598,0,
                     (double)(fVar8 * (float)_DAT_00560f00),(double)(fVar7 * (float)_DAT_00560f00),
                     lStack_5b8);
        uStack_b3c = 0;
        uStack_b48 = 0x10;
        uStack_b44 = 3;
        uStack_b40 = 0x3f800000;
        FUN_004ecd80(pvStack_67c,atStack_678,lStack_598,0,uStack_104,auStack_100,uStack_20,0,
                     lStack_5b8,&uStack_b48,3);
      }
      else if (iVar4 == 1) {
        FUN_004cded0(pvStack_67c,atStack_678,lStack_598,0,uStack_104,auStack_100,uStack_20,0,
                     lStack_5b8);
        SfDibBevel(pvStack_67c,atStack_678,lStack_598,(tagRECT *)0x0,lStack_5b8,fVar8,fVar7,
                   *(float *)(param_1 + 0x178),(tSFDIBPIXEL *)(param_1 + 0x17c));
      }
      else if (iVar4 == 2) {
        *(float *)(param_1 + 0x184) = *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x188);
        *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x188) * *(float *)(param_1 + 0x180);
        *(float *)(param_1 + 0x17c) = *(float *)(param_1 + 0x188) * *(float *)(param_1 + 0x17c);
        FUN_004cd320(pvStack_67c,atStack_678,lStack_598,0,lStack_5b8,
                     (double)*(float *)(param_1 + 0x184),(double)*(float *)(param_1 + 0x180),
                     (double)*(float *)(param_1 + 0x17c),(double)*(float *)(param_1 + 0x188));
        uStack_b48 = ftol();
        uStack_b44 = ftol();
        uStack_b40 = ftol();
        uStack_b3c = ftol();
        iStack_b4c = atStack_678[0].bottom - atStack_678[0].top;
        iStack_b50 = atStack_678[0].right - atStack_678[0].left;
        FUN_004fe430(pvStack_67c,&iStack_b50,lStack_598,&uStack_b48,uStack_104,&iStack_b50,uStack_20
                     ,&uStack_b48,lStack_5b8,0,0);
      }
    }
    FUN_0052f200();
  }
  FUN_0052f260();
  FUN_0052f260();
  return iVar3;
}


