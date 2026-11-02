/* Module: sfppack3.dll
   Function: FUN_5cc44f20
   Address: 5cc44f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc44f20(void *this,int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  int iStack_14;
  
  pdVar3 = (double *)((int)this + 0x270);
  FUN_5cc44d80(this,(int)pdVar3,1);
  iVar2 = 0x349;
  do {
    if ((*(int *)pdVar3 == 0) && (*(int *)((int)pdVar3 + 4) == -0x3f75c000)) {
      *(undefined4 *)pdVar3 = 0;
      *(undefined4 *)((int)pdVar3 + 4) = 0;
    }
    else {
      fVar5 = (float10)_CIpow();
      *pdVar3 = (double)fVar5;
    }
    pdVar3 = pdVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pdVar3 = (double *)((int)this + 0x1cb8);
  FUN_5cc44d80(this,(int)pdVar3,0);
  iStack_14 = 0x349;
  do {
    if ((*(int *)pdVar3 == 0) && (*(int *)((int)pdVar3 + 4) == -0x3f75c000)) {
      *(undefined4 *)pdVar3 = 0;
      *(undefined4 *)((int)pdVar3 + 4) = 0;
    }
    else {
      fVar5 = (float10)_CIpow();
      *pdVar3 = (double)fVar5;
    }
    pdVar3 = pdVar3 + 1;
    iStack_14 = iStack_14 + -1;
  } while (iStack_14 != 0);
  *(int *)((int)this + 0x3710) = param_1[4];
  *(double *)((int)this + 0x3718) = (double)param_1[5] * _DAT_5cc88ed8;
  fVar5 = FUN_5cc450f0(param_1[2],-600);
  *(double *)((int)this + 0x3708) = (double)fVar5;
  fVar5 = FUN_5cc450f0(param_1[3],-600);
  *(double *)((int)this + 0x3700) = (double)fVar5;
  if (*param_1 != 0) {
    uVar1 = *(uint *)(*(int *)((int)this + 0x260) + 4);
    if (param_1[1] <= (int)uVar1 / 2) {
      fVar6 = (float10)1.4426950408889634 *
              (((float10)param_1[1] * (float10)_DAT_5cc87ce0) / (float10)uVar1);
      fVar5 = ROUND(fVar6);
      fVar6 = (float10)f2xm1(fVar6 - fVar5);
      fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
      *(double *)((int)this + 0x3738) = (double)fVar5;
      *(double *)((int)this + 0x3740) = (double)((float10)_DAT_5cc87d18 - fVar5);
      goto LAB_5cc4509e;
    }
  }
  *(undefined4 *)((int)this + 0x3738) = 0;
  *(undefined4 *)((int)this + 0x3740) = 0;
  *(undefined4 *)((int)this + 0x373c) = 0;
  *(undefined4 *)((int)this + 0x3744) = 0x3ff00000;
LAB_5cc4509e:
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x3720) = 0;
    *(undefined4 *)((int)this + 0x3728) = 0;
    *(undefined4 *)((int)this + 0x3724) = 0;
    *(undefined4 *)((int)this + 0x372c) = 0;
    *(undefined4 *)((int)this + 0x3730) = 0;
    puVar4 = (undefined4 *)((int)this + 0x3748);
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x264) = 1;
  return 0;
}


