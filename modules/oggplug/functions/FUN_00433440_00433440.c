/* Module: oggplug.dll
   Function: FUN_00433440
   Address: 00433440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00433440(float *param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 extraout_ST1;
  
  iVar8 = 0;
  iVar7 = 1;
  do {
    _CIpow();
    _CIpow();
    fVar9 = (float10)_CIpow();
    fVar9 = ((fVar9 + extraout_ST1) - (float10)_DAT_0044d4a8) * (float10)param_3;
    floor((double)((fVar9 + fVar9) / (float10)param_4 + (float10)_DAT_00447a78));
    iVar4 = ftol();
    fVar1 = *param_1;
    if (iVar8 < iVar4) {
      iVar5 = iVar4 - iVar8;
      pfVar6 = (float *)(param_2 + iVar8 * 4);
      fVar3 = param_1[1] - fVar1;
      do {
        if (param_3 <= iVar8) break;
        *pfVar6 = fVar1;
        fVar1 = fVar1 + fVar3 / (float)iVar5;
        iVar8 = iVar8 + 1;
        pfVar6 = pfVar6 + 1;
      } while (iVar8 < iVar4);
    }
    param_1 = param_1 + 1;
    bVar2 = 0x19 < iVar7;
    iVar7 = iVar7 + 1;
    if (bVar2) {
      return;
    }
  } while( true );
}


