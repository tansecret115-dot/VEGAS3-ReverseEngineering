/* Module: vidpcore.dll
   Function: SfDibApplyChromaCorrection
   Address: 5de8eb60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDibApplyChromaCorrection(void *,struct tagRECT *,long,struct tagRECT *,struct
   tSFRGBADOUBLE *,struct tMASKSETTINGS *,long) */

long SfDibApplyChromaCorrection
               (void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,tSFRGBADOUBLE *param_5,
               tMASKSETTINGS *param_6,long param_7)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x8eb60  12
                       ?SfDibApplyChromaCorrection@@YGJPAXPAUtagRECT@@J1PAUtSFRGBADOUBLE@@PAUtMASKSETTINGS@@J@Z
                        */
  lVar1 = param_3;
  iVar2 = FUN_5debbf10(&param_3,&param_2,&param_4,param_1,param_2,param_3,param_4,param_7);
  if (-1 < iVar2) {
    if ((*(double *)param_5 <= *(double *)(param_5 + 8)) ||
       (*(double *)param_5 <= *(double *)(param_5 + 0x10))) {
      if ((*(double *)(param_5 + 8) <= *(double *)param_5) ||
         (iVar5 = 1, *(double *)(param_5 + 8) <= *(double *)(param_5 + 0x10))) {
        iVar5 = 2;
      }
    }
    else {
      iVar5 = 0;
    }
    iVar6 = 0;
    if (0 < (int)param_2) {
      do {
        if (param_7 == 4) {
          if (iVar5 == 0) {
            iVar4 = 0;
            if (0 < param_3) {
              pbVar3 = (byte *)((int)&param_4->left + 1);
              do {
                if ((pbVar3[2] != 0) && (*pbVar3 < pbVar3[-1])) {
                  pbVar3[-1] = *pbVar3;
                }
                pbVar3 = pbVar3 + 4;
                iVar4 = iVar4 + 1;
              } while (iVar4 < param_3);
            }
          }
          else if ((iVar5 == 1) && (iVar4 = 0, 0 < param_3)) {
            pbVar3 = (byte *)((int)&param_4->left + 2);
            do {
              if ((pbVar3[1] != 0) && (*pbVar3 < pbVar3[-1])) {
                pbVar3[-1] = *pbVar3;
              }
              pbVar3 = pbVar3 + 4;
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_3);
          }
        }
        param_4 = (tagRECT *)((int)&param_4->left + lVar1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_2);
      return iVar2;
    }
  }
  return iVar2;
}


