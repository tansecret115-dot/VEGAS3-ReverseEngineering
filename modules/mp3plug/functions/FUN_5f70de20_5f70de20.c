/* Module: mp3plug.dll
   Function: FUN_5f70de20
   Address: 5f70de20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f70de20(int param_1,uint param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if ((param_3 != 0) && (param_3 != 2)) {
    FUN_5f6d9620(s_CalculateWindow___called_with_in_5f764030,
                 s_U__mp3_uptodate_ciEncoder_l3Enc__5f764070,0x22);
    return;
  }
  iVar4 = 0;
  iVar2 = (int)(param_2 + (0x7fffffff < param_2)) >> 1;
  if (0 < iVar2) {
    dVar1 = _DAT_5f764018 / (double)(int)param_2;
    iVar5 = 0;
    do {
      fVar6 = (float10)fsin(((float10)iVar4 + (float10)_DAT_5f764020) * (float10)dVar1);
      *(float *)(param_1 + iVar4 * 4) = (float)(fVar6 * fVar6);
      iVar3 = param_2 * 4 + -4 + iVar5;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -4;
      *(float *)(param_1 + iVar3) = (float)(fVar6 * fVar6);
    } while (iVar4 < iVar2);
  }
  return;
}


