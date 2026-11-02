/* Module: vidpcore.dll
   Function: FUN_5de9cb10
   Address: 5de9cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de9cb10(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,double *param_6)

{
  float fVar1;
  double *pdVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int local_4;
  
  iVar3 = FUN_5debbf10(&param_1,&local_4,&param_4,param_1,param_2,param_3,param_4,param_5);
  pdVar2 = param_6;
  if (-1 < iVar3) {
    iVar3 = ftol();
    fVar1 = (float)*pdVar2;
    iVar7 = 0;
    if (0 < local_4) {
      do {
        if (param_5 == 4) {
          iVar5 = 0;
          if (0 < param_1) {
            pbVar4 = (byte *)(param_4 + 2);
            do {
              if ((((int)(uint)pbVar4[-2] <= iVar3) && ((int)(uint)pbVar4[-1] <= iVar3)) &&
                 ((int)(uint)*pbVar4 <= iVar3)) {
                pbVar4[-2] = 0;
                pbVar4[-1] = 0;
                *pbVar4 = 0;
              }
              pbVar4 = pbVar4 + 4;
              iVar5 = iVar5 + 1;
            } while (iVar5 < param_1);
          }
        }
        else {
          iVar5 = 0;
          if (0 < param_1) {
            pfVar6 = (float *)(param_4 + 8);
            do {
              if (((pfVar6[-2] <= fVar1) && (pfVar6[-1] <= fVar1)) && (*pfVar6 <= fVar1)) {
                pfVar6[-2] = 0.0;
                pfVar6[-1] = 0.0;
                *pfVar6 = 0.0;
              }
              pfVar6 = pfVar6 + 4;
              iVar5 = iVar5 + 1;
            } while (iVar5 < param_1);
          }
        }
        param_4 = param_4 + param_3;
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_4);
    }
    iVar3 = 0;
  }
  return iVar3;
}


