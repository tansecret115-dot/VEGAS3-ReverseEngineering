/* Module: cook3260.dll
   Function: FUN_633a52b0
   Address: 633a52b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a52b0(int param_1,float *param_2,int param_3,float param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  void *this;
  int iVar3;
  float *unaff_EBX;
  float *pfVar4;
  float *pfVar5;
  float unaff_EDI;
  float *pfVar6;
  float local_105c [1024];
  float local_5c;
  float local_58;
  float local_54 [8];
  float local_34;
  float local_30;
  float local_2c [4];
  
  FUN_633a7330();
  pfVar4 = (float *)(param_1 + (param_3 + *(int *)((int)this + 0x47c0)) * 4);
  pfVar5 = pfVar4;
  pfVar6 = local_105c;
  for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_2c[3] = 3.4370752e+21;
  FUN_633a5060(this,local_105c,param_3,(int)param_4);
  iVar3 = 0;
  local_5c = *param_2;
  local_58 = param_2[1];
  local_34 = param_2[2];
  local_30 = param_2[3];
  do {
    pfVar5 = (float *)((int)local_54 + iVar3);
    pfVar6 = (float *)((int)local_2c + iVar3);
    param_1 = *(int *)((int)this + 0x47c0);
    *pfVar5 = 1.0;
    *pfVar6 = 1.0;
    if (0 < param_1) {
      do {
        fVar1 = *pfVar4;
        fVar2 = *unaff_EBX;
        unaff_EBX = unaff_EBX + 1;
        pfVar4 = pfVar4 + 1;
        if (*pfVar5 < ABS(fVar1)) {
          *pfVar5 = ABS(fVar1);
        }
        if (*pfVar6 < ABS(fVar2)) {
          *pfVar6 = ABS(fVar2);
        }
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x20);
  *param_2 = local_54[6];
  param_2[1] = local_54[7];
  param_2[2] = param_4;
  param_2[3] = unaff_EDI;
  local_2c[3] = 3.437128e+21;
  FUN_633a50f0(&local_5c,&local_34,param_5);
  return;
}


