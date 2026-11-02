/* Module: vidpcore.dll
   Function: FUN_5debbaa0
   Address: 5debbaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5debbaa0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar2 = param_5;
  iVar1 = param_3;
  iVar3 = FUN_5debbf10(&param_4,&param_3,&param_5,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar3) {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (iVar2 == 4) {
          iVar6 = 0;
          if (0 < param_4) {
            pbVar5 = (byte *)(param_5 + 3);
            do {
              pbVar5[-3] = (byte)((uint)*pbVar5 * (uint)pbVar5[-3] >> 8);
              pbVar5[-2] = (byte)((uint)pbVar5[-2] * (uint)*pbVar5 >> 8);
              pbVar5[-1] = (byte)((uint)*pbVar5 * (uint)pbVar5[-1] >> 8);
              iVar6 = iVar6 + 1;
              pbVar5 = pbVar5 + 4;
            } while (iVar6 < param_4);
          }
        }
        else {
          iVar6 = 0;
          if (0 < param_4) {
            pfVar4 = (float *)(param_5 + 0xc);
            do {
              iVar6 = iVar6 + 1;
              pfVar4[-3] = *pfVar4 * pfVar4[-3];
              pfVar4[-2] = *pfVar4 * pfVar4[-2];
              pfVar4[-1] = *pfVar4 * pfVar4[-1];
              pfVar4 = pfVar4 + 4;
            } while (iVar6 < param_4);
          }
        }
        param_5 = param_5 + iVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    iVar3 = 0;
  }
  return iVar3;
}


