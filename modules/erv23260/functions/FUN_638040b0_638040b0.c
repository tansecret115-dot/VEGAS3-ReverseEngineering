/* Module: erv23260.dll
   Function: FUN_638040b0
   Address: 638040b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638040b0(void *this,int param_1,float *param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int local_c;
  int local_8;
  
  iVar2 = FUN_638025b0((void *)((int)this + -100),param_1,&local_c,&local_8);
  if (iVar2 == 0) {
    fVar3 = *param_2;
    if (fVar3 == 4.2039e-45) {
      bVar1 = true;
    }
    else if ((((int)param_2[1] < 0) || (10000 < (int)param_2[1])) ||
            (((fVar3 != 2.8026e-45 && ((fVar3 != 1.4013e-45 || (param_2[2] == 0.0)))) &&
             ((fVar3 != 0.0 || (((param_2[2] == 0.0 || (param_2[3] == 0.0)) || (param_2[4] == 0.0)))
              ))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 10;
    }
    if (fVar3 == 4.2039e-45) {
      return 3;
    }
    param_1 = local_c;
    if (local_c <= local_8) {
      pfVar4 = (float *)(local_c * 0x77c + 0x120 + (int)this);
      do {
        pfVar5 = param_2;
        pfVar6 = pfVar4 + -0x3d;
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
        }
        *pfVar4 = 0.0;
        if (*param_2 == 0.0) {
          *pfVar4 = (float)(uint)param_2[3] / (float)(int)param_2[4];
          fVar3 = (float)ftol();
          pfVar4[1] = fVar3;
        }
        else if (*param_2 == 1.4013e-45) {
          pfVar4[1] = param_2[2];
        }
        param_1 = param_1 + 1;
        pfVar4 = pfVar4 + 0x1df;
      } while (param_1 <= local_8);
    }
    iVar2 = 0;
  }
  return iVar2;
}


