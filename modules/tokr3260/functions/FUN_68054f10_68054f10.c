/* Module: tokr3260.dll
   Function: FUN_68054f10
   Address: 68054f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_68054f10(float param_1,int param_2,int param_3,float *param_4,short *param_5,int param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  
  fVar2 = param_1;
  if (param_1 != 0.0) {
    param_1 = *(float *)(&DAT_6805c2b0 + (int)param_1 * 4);
    iVar3 = param_3;
    psVar4 = param_5;
    if (param_2 == 1) {
      param_1 = param_1 * _DAT_6805b0dc;
    }
    do {
      fVar1 = *param_4;
      param_4 = param_4 + 1;
      *psVar4 = (short)ROUND(fVar1 * param_1);
      iVar3 = iVar3 + -1;
      psVar4 = psVar4 + 2;
    } while (iVar3 != 0);
    iVar3 = FUN_680576b0(**(int **)(param_6 + 0x40) + (int)fVar2 * 0x2c,(int)param_5,param_3);
    return iVar3 + 6;
  }
  return 0;
}


