/* Module: vegas30k.dll
   Function: SfAudioPeak_PrimeMinMaxArray
   Address: 0105b020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfAudioPeak_PrimeMinMaxArray(enum SFSAMPLETYPE,unsigned int,struct
   tSFAUDIOPEAK_SAMPLESMINMAX *,enum SFSAMPLETYPE,void *) */

long SfAudioPeak_PrimeMinMaxArray
               (SFSAMPLETYPE param_1,uint param_2,tSFAUDIOPEAK_SAMPLESMINMAX *param_3,
               SFSAMPLETYPE param_4,void *param_5)

{
  tSFAUDIOPEAK_SAMPLESMINMAX tVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  tSFAUDIOPEAK_SAMPLESMINMAX *ptVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
                    /* 0x5b020  274
                       ?SfAudioPeak_PrimeMinMaxArray@@YGJW4SFSAMPLETYPE@@IPAUtSFAUDIOPEAK_SAMPLESMINMAX@@0PAX@Z
                        */
  switch(param_4) {
  case 0x11:
    if (param_2 != 0) {
      ptVar4 = param_3 + 2;
      iVar7 = (int)param_5 - (int)param_3;
      uVar6 = param_2;
      do {
        uVar2 = *(undefined2 *)param_5;
        param_5 = (void *)((int)param_5 + 4);
        *(undefined2 *)(ptVar4 + -2) = uVar2;
        *(undefined2 *)ptVar4 = *(undefined2 *)(ptVar4 + iVar7);
        ptVar4 = ptVar4 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  default:
    return -0x7ff8ffa9;
  case 0x13:
    if (param_2 != 0) {
      ptVar4 = param_3 + 4;
      iVar7 = (int)param_5 - (int)param_3;
      uVar6 = param_2;
      do {
        uVar3 = *(undefined4 *)param_5;
        param_5 = (void *)((int)param_5 + 8);
        *(undefined4 *)(ptVar4 + -4) = uVar3;
        *(undefined4 *)ptVar4 = *(undefined4 *)(ptVar4 + iVar7);
        ptVar4 = ptVar4 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case 0x20:
    if (param_2 != 0) {
      ptVar4 = param_3 + 4;
      iVar7 = (int)param_5 - (int)param_3;
      uVar6 = param_2;
      do {
        uVar3 = *(undefined4 *)param_5;
        param_5 = (void *)((int)param_5 + 8);
        *(undefined4 *)(ptVar4 + -4) = uVar3;
        *(undefined4 *)ptVar4 = *(undefined4 *)(ptVar4 + iVar7);
        ptVar4 = ptVar4 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case 0x31:
    if (param_2 != 0) {
      ptVar4 = param_3 + 1;
      iVar7 = (int)param_5 - (int)param_3;
      uVar6 = param_2;
      do {
        tVar1 = *(tSFAUDIOPEAK_SAMPLESMINMAX *)param_5;
        param_5 = (void *)((int)param_5 + 2);
        ptVar4[-1] = tVar1;
        *ptVar4 = ptVar4[iVar7];
        ptVar4 = ptVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  lVar5 = FUN_0105b160(param_1,param_4,param_2,param_3);
  return lVar5;
}


