/* Module: tokr3260.dll
   Function: FUN_68056870
   Address: 68056870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_68056870(int param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  
  iVar2 = FUN_68053a30(param_2[10]);
  if (iVar2 == -999999) {
    return -999999;
  }
  fVar7 = (float10)(*DAT_68061220)(param_1 + *param_2 * 4,iVar2);
  iVar3 = FUN_680538c0((uint)(float)fVar7);
  param_2[1] = iVar3;
  fVar1 = *(float *)(*(int *)(param_3 + 0x34) + iVar3 * 4);
  if (fVar1 == _DAT_6805b0f8) {
    return -999999;
  }
  iVar3 = *(int *)(*(int *)(param_3 + 0x3c) + param_2[0xb] * 4);
  if (iVar3 == -999999) {
    return -999999;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    piVar5 = param_2 + 2;
    do {
      iVar4 = *param_2 + iVar6;
      if ((iVar4 < 0) || (0x3ff < iVar4)) {
        *piVar5 = 0;
      }
      else {
        FUN_68056a50(*(float *)(param_1 + iVar4 * 4),fVar1,iVar3);
        iVar4 = ftol();
        *piVar5 = iVar4;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < iVar2);
  }
  iVar3 = *(int *)(*(int *)(param_3 + 0x44) + param_2[0xc] * 4) + param_2[0xb] * 0x2c;
  if (iVar3 != 0) {
    iVar6 = FUN_680576b0(iVar3,(int)(param_2 + 2),iVar2);
    if (iVar6 != -999999) {
      iVar2 = FUN_680576b0(iVar3,(int)(param_2 + 2),iVar2);
      return iVar2 + 0xc;
    }
    return -999999;
  }
  return -999999;
}


