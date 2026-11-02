/* Module: vegas30k.dll
   Function: SfAudio_ASRCook
   Address: 01083f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0108408f) */
/* WARNING: Removing unreachable block (ram,0x010840cd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __stdcall SfAudio_ASRCook(struct tWAVEFORMATEX const *,struct tSFASR const *,struct
   tSFASRCOOKED *,__int64,__int64,double) */

void SfAudio_ASRCook(tWAVEFORMATEX *param_1,tSFASR *param_2,tSFASRCOOKED *param_3,__int64 param_4,
                    __int64 param_5,double param_6)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EDI;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
                    /* 0x83f70  275
                       ?SfAudio_ASRCook@@YGXPBUtWAVEFORMATEX@@PBUtSFASR@@PAUtSFASRCOOKED@@_J3N@Z */
  lVar5 = ftol();
  iVar4 = (int)lVar5;
  lVar6 = ftol();
  iVar3 = (int)lVar6;
  lVar7 = ftol();
  uVar2 = _SfAudio_GetSampleType_4(param_1);
  switch(uVar2) {
  case 0x10:
    dVar1 = (double)CONCAT44(param_6._0_4_,param_5._4_4_) * _DAT_011db2b0;
    break;
  case 0x11:
    dVar1 = (double)CONCAT44(param_6._0_4_,param_5._4_4_) * _DAT_011db2b8;
    break;
  case 0x12:
    dVar1 = (double)CONCAT44(param_6._0_4_,param_5._4_4_) * _DAT_011db2c0;
    break;
  case 0x13:
    dVar1 = (double)CONCAT44(param_6._0_4_,param_5._4_4_) * _DAT_011db2c8;
    break;
  default:
    dVar1 = (double)CONCAT44(param_6._0_4_,param_5._4_4_);
  }
  *(double *)(param_3 + 0x20) = (double)*(float *)(param_2 + 4) * dVar1;
  *(double *)(param_3 + 0x28) = (double)*(float *)(param_2 + 0x1c) * dVar1;
  *(double *)(param_3 + 0x30) = (double)*(float *)(param_2 + 0x24) * dVar1;
  *(undefined4 *)param_3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x20);
  if ((lVar5 < 0x100000000) && (lVar5 < 0)) {
    iVar4 = 0;
  }
  else if (0x7fffffff < lVar5) {
    iVar4 = 0x7fffffff;
  }
  *(int *)(param_3 + 8) = iVar4;
  if ((lVar6 < 0x100000000) && (lVar6 < 0)) {
    iVar3 = 0;
  }
  else if (0x7fffffff < lVar6) {
    iVar3 = 0x7fffffff;
  }
  *(int *)(param_3 + 0xc) = iVar3;
  lVar5 = lVar7 - (iVar3 + iVar4);
  *(longlong *)(param_3 + 0x10) = lVar5;
  if (((int)((ulonglong)lVar5 >> 0x20) < 1) && (lVar5 < 0)) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x14) = 0;
    iVar4 = __alldiv(lVar7,2,0);
    *(int *)(param_3 + 0xc) = iVar4;
    *(int *)(param_3 + 8) = (int)lVar7 - iVar4;
  }
  SfAudio_ASRReCook(param_3,CONCAT44(unaff_EDI,(undefined4)param_4));
  return;
}


