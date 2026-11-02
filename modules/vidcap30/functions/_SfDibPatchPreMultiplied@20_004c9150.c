/* Module: vidcap30.exe
   Function: _SfDibPatchPreMultiplied@20
   Address: 004c9150
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibPatchPreMultiplied_20
              (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  float *pfVar5;
  int iVar6;
  
  iVar6 = param_5;
                    /* 0xc9150  324  _SfDibPatchPreMultiplied@20 */
  iVar2 = param_3;
  iVar3 = _SfDibPrepareSet_32(&param_4,&param_3,&param_5,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar3) {
    if (iVar6 == 4) {
      iVar6 = 0;
      if (0 < param_3) {
        do {
          iVar3 = 0;
          if (0 < param_4) {
            pbVar4 = (byte *)(param_5 + 3);
            do {
              bVar1 = *pbVar4;
              if (bVar1 < pbVar4[-3]) {
                pbVar4[-3] = bVar1;
              }
              if (bVar1 < pbVar4[-2]) {
                pbVar4[-2] = bVar1;
              }
              if (bVar1 < pbVar4[-1]) {
                pbVar4[-1] = bVar1;
              }
              pbVar4 = pbVar4 + 4;
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_4);
          }
          param_5 = param_5 + iVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3);
        return 0;
      }
    }
    else {
      iVar6 = 0;
      if (0 < param_3) {
        do {
          iVar3 = 0;
          if (0 < param_4) {
            pfVar5 = (float *)(param_5 + 0xc);
            do {
              if (*pfVar5 < pfVar5[-3]) {
                pfVar5[-3] = *pfVar5;
              }
              if (*pfVar5 < pfVar5[-2]) {
                pfVar5[-2] = *pfVar5;
              }
              if (*pfVar5 < pfVar5[-1]) {
                pfVar5[-1] = *pfVar5;
              }
              pfVar5 = pfVar5 + 4;
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_4);
          }
          param_5 = param_5 + iVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3);
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}


