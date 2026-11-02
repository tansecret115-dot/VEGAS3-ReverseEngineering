/* Module: vegas30.exe
   Function: FUN_0051f5a0
   Address: 0051f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0051f5a0(float *param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  
  if ((param_1 != (float *)0x0) && (param_2 != (int *)0x0)) {
    pfVar2 = param_1;
    for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar2 = 0.0;
      pfVar2 = pfVar2 + 1;
    }
    *param_1 = (float)*param_2;
    iVar1 = param_2[1];
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[1] = (float)iVar1;
    param_1[4] = (float)param_2[2];
    iVar1 = param_2[1];
    param_1[6] = 0.0;
    param_1[7] = 1.0;
    param_1[5] = (float)iVar1;
    param_1[8] = (float)param_2[2];
    iVar1 = param_2[3];
    param_1[10] = 0.0;
    param_1[0xb] = 1.0;
    param_1[9] = (float)iVar1;
    param_1[0xc] = (float)*param_2;
    iVar1 = param_2[3];
    param_1[0xe] = 0.0;
    param_1[0xf] = 1.0;
    param_1[0x12] = 0.0;
    param_1[0x13] = 1.0;
    param_1[0xd] = (float)iVar1;
    param_1[0x10] = (*param_1 + param_1[8]) * _DAT_0061a460;
    param_1[0x11] = (param_1[9] + param_1[1]) * _DAT_0061a460;
    return 1;
  }
  return 0;
}


