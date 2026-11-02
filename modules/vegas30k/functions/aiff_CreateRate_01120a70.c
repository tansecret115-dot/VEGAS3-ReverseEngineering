/* Module: vegas30k.dll
   Function: aiff_CreateRate
   Address: 01120a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall aiff_CreateRate,8 */

void aiff_CreateRate(uint param_1,short *param_2)

{
  bool bVar1;
  double dVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  
                    /* 0x120a70  1358  _aiff_CreateRate@8 */
  sVar4 = 0;
  for (dVar2 = (double)param_1; _DAT_011db3e8 <= dVar2; dVar2 = dVar2 * _DAT_011db6e8) {
    sVar4 = sVar4 + 1;
  }
  bVar1 = _DAT_011dad58 <= dVar2;
  *param_2 = sVar4 + 0x3fff;
  uVar3 = ftol();
  param_2[1] = (ushort)bVar1 << 0xf | uVar3;
  param_2 = param_2 + 2;
  iVar5 = 3;
  do {
    sVar4 = ftol();
    *param_2 = sVar4;
    param_2 = param_2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


