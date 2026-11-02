/* Module: sfppack1.dll
   Function: FUN_5cdc1300
   Address: 5cdc1300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdc1300(void *this,int param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar3 = (float *)(param_1 + param_4 * 8);
  iVar4 = 0;
  if (*(int *)((int)this + 0x15c) == 0) {
    pfVar1 = param_3;
    pfVar5 = param_2;
    pfVar6 = pfVar3;
    if (0 < *(int *)((int)this + 0x134)) {
      do {
        pfVar6 = pfVar3 + 2;
        pfVar5 = param_2 + 2;
        iVar4 = iVar4 + 1;
        *param_2 = *pfVar3 * *pfVar1 + *param_2;
        param_2[1] = pfVar3[1] * *pfVar1 + param_2[1];
        pfVar1 = pfVar1 + 1;
        param_2 = pfVar5;
        pfVar3 = pfVar6;
      } while (iVar4 < *(int *)((int)this + 0x134));
    }
  }
  else {
    iVar4 = 0;
    pfVar1 = param_2;
    pfVar5 = pfVar3;
    if (0 < *(int *)((int)this + 0x134)) {
      do {
        pfVar3 = pfVar5 + 2;
        param_2 = pfVar1 + 2;
        iVar4 = iVar4 + 1;
        *pfVar1 = *pfVar5 + *pfVar1;
        pfVar1[1] = pfVar5[1] + pfVar1[1];
        pfVar1 = param_2;
        pfVar5 = pfVar3;
      } while (iVar4 < *(int *)((int)this + 0x134));
    }
    *(undefined4 *)((int)this + 0x15c) = 0;
    pfVar5 = param_2;
    pfVar6 = pfVar3;
  }
  uVar2 = *(int *)((int)this + 0x128) / 2 - *(int *)((int)this + 0x134);
  pfVar3 = pfVar6;
  pfVar1 = pfVar5;
  for (iVar4 = (uVar2 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar1 = pfVar1 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)pfVar1 = *(undefined1 *)pfVar3;
    pfVar3 = (float *)((int)pfVar3 + 1);
    pfVar1 = (float *)((int)pfVar1 + 1);
  }
  iVar4 = 0;
  pfVar3 = param_3 + uVar2 + *(int *)((int)this + 0x134);
  pfVar1 = pfVar5 + uVar2 * 2;
  pfVar5 = pfVar6 + uVar2 * 2;
  if (0 < *(int *)((int)this + 0x134)) {
    do {
      iVar4 = iVar4 + 1;
      *pfVar1 = *pfVar3 * *pfVar5 + *pfVar1;
      pfVar1[1] = pfVar5[1] * *pfVar3 + pfVar1[1];
      pfVar3 = pfVar3 + 1;
      pfVar1 = pfVar1 + 2;
      pfVar5 = pfVar5 + 2;
    } while (iVar4 < *(int *)((int)this + 0x134));
  }
  return;
}


