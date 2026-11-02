/* Module: mp3plug.dll
   Function: FUN_5f719500
   Address: 5f719500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f719500(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = param_2;
  do {
    piVar3[0x9e8] = 0;
    piVar3[0x9e9] = 0;
    piVar3 = piVar3 + 2;
  } while ((int)piVar3 < (int)(param_2 + 0x240));
  iVar4 = *param_2 + 1;
  iVar6 = iVar4 * 0x9cc;
  do {
    iVar5 = ((int)(((uint)(iVar4 >> 1) >> 0x1e) + iVar4) >> 2) * -0x2730 + iVar6;
    iVar2 = -0x240;
    while( true ) {
      param_2[iVar2 + 0xc28] =
           (int)(ABS(*(float *)((int)param_2 + iVar2 * 4 + iVar5 + 0x970)) +
                (float)param_2[iVar2 + 0xc28]);
      fVar1 = ABS(*(float *)((int)param_2 + iVar2 * 4 + iVar5 + 0x974)) +
              (float)param_2[iVar2 + 0xc29];
      if (iVar2 + 2 == 0) break;
      param_2[iVar2 + 0xc29] = (int)fVar1;
      iVar2 = iVar2 + 2;
    }
    param_2[0xc27] = (int)fVar1;
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0x9cc;
  } while (iVar4 != *param_2 + 4);
  piVar3 = param_2;
  while( true ) {
    piVar3[0x9e8] = (int)((float)piVar3[0x9e8] * _DAT_5f7663b4);
    if ((int)(param_2 + 0x240) <= (int)(piVar3 + 2)) break;
    piVar3[0x9e9] = (int)((float)piVar3[0x9e9] * _DAT_5f7663b4);
    piVar3 = piVar3 + 2;
  }
  piVar3[0x9e9] = (int)((float)piVar3[0x9e9] * _DAT_5f7663b4);
  FUN_5f719620(param_1,(int)(param_2 + 0x9cd));
  return;
}


