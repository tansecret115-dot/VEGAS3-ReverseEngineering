/* Module: espr3260.dll
   Function: FUN_632f7fd0
   Address: 632f7fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_632f7fd0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  pfVar2 = param_1;
  iVar5 = 0;
  iVar4 = 1;
  pfVar3 = (float *)&DAT_632fb17c;
  param_1 = (float *)ABS(*param_1 - _DAT_632fb178);
  do {
    pfVar1 = (float *)ABS(*pfVar2 - *pfVar3);
    if ((float)pfVar1 < (float)param_1) {
      iVar5 = iVar4;
      param_1 = pfVar1;
    }
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)pfVar3 < 0x632fb1b8);
  *pfVar2 = *(float *)(&DAT_632fb178 + iVar5 * 4);
  return iVar5;
}


