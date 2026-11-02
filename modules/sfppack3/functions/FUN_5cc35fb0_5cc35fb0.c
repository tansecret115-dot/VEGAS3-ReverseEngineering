/* Module: sfppack3.dll
   Function: FUN_5cc35fb0
   Address: 5cc35fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc35fb0(void *this,float *param_1,uint param_2,int param_3)

{
  float fVar1;
  double dVar2;
  float *pfVar3;
  double *pdVar4;
  uint uVar5;
  int local_10c;
  double local_108 [32];
  
  if (param_3 != 0) {
    local_10c = param_3;
    do {
      if (param_2 != 0) {
        pdVar4 = local_108;
        pfVar3 = param_1;
        uVar5 = param_2;
        do {
          fVar1 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          *pdVar4 = (double)fVar1;
          pdVar4 = pdVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      FUN_5cc34f70(this,local_108,param_2);
      if (param_2 != 0) {
        pdVar4 = local_108;
        pfVar3 = param_1;
        uVar5 = param_2;
        do {
          dVar2 = *pdVar4;
          pdVar4 = pdVar4 + 1;
          *pfVar3 = (float)dVar2;
          pfVar3 = pfVar3 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1 = param_1 + param_2;
      local_10c = local_10c + -1;
    } while (local_10c != 0);
  }
  return 0;
}


