/* Module: mp3plug.dll
   Function: FUN_5f70b650
   Address: 5f70b650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f70b650(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = -0x90;
  while( true ) {
    fVar1 = *(float *)((int)&DAT_5f74b814 + iVar6) * _DAT_5f7609ec;
    *(float *)((int)&DAT_5f74b784 + iVar6) = *(float *)((int)&DAT_5f74b784 + iVar6) * _DAT_5f7609e8;
    *(float *)((int)&DAT_5f74b814 + iVar6) = fVar1;
    fVar1 = *(float *)(&DAT_5f74b934 + iVar6) * _DAT_5f7609f4;
    *(float *)((int)&DAT_5f74b8a4 + iVar6) = *(float *)((int)&DAT_5f74b8a4 + iVar6) * _DAT_5f7609f0;
    *(float *)(&DAT_5f74b934 + iVar6) = fVar1;
    fVar1 = *(float *)((int)&DAT_5f74b818 + iVar6) * _DAT_5f7609ec;
    *(float *)((int)&DAT_5f74b788 + iVar6) = *(float *)((int)&DAT_5f74b788 + iVar6) * _DAT_5f7609e8;
    *(float *)((int)&DAT_5f74b818 + iVar6) = fVar1;
    fVar1 = *(float *)((int)&DAT_5f74b8a8 + iVar6) * _DAT_5f7609f0;
    fVar2 = *(float *)(&DAT_5f74b938 + iVar6) * _DAT_5f7609f4;
    if (iVar6 + 8 == 0) break;
    *(float *)((int)&DAT_5f74b8a8 + iVar6) = fVar1;
    *(float *)(&DAT_5f74b938 + iVar6) = fVar2;
    iVar6 = iVar6 + 8;
  }
  *(float *)((int)&DAT_5f74b8a8 + iVar6) = fVar1;
  *(float *)(&DAT_5f74b938 + iVar6) = fVar2;
  iVar6 = -0x24;
  while( true ) {
    fVar1 = *(float *)((int)&DAT_5f74b814 + iVar6) * _DAT_5f7609fc;
    *(float *)((int)&DAT_5f74b784 + iVar6) = *(float *)((int)&DAT_5f74b784 + iVar6) * _DAT_5f7609f8;
    *(float *)((int)&DAT_5f74b814 + iVar6) = fVar1;
    fVar1 = *(float *)((int)&DAT_5f74b788 + iVar6) * _DAT_5f7609f8;
    *(float *)(&DAT_5f74b934 + iVar6) = *(float *)(&DAT_5f74b934 + iVar6) * _DAT_5f760a00;
    *(float *)((int)&DAT_5f74b788 + iVar6) = fVar1;
    fVar1 = *(float *)((int)&DAT_5f74b818 + iVar6) * _DAT_5f7609fc;
    fVar2 = *(float *)(&DAT_5f74b938 + iVar6) * _DAT_5f760a00;
    if (iVar6 + 8 == -4) break;
    *(float *)((int)&DAT_5f74b818 + iVar6) = fVar1;
    *(float *)(&DAT_5f74b938 + iVar6) = fVar2;
    iVar6 = iVar6 + 8;
  }
  *(float *)((int)&DAT_5f74b818 + iVar6) = fVar1;
  *(float *)(&DAT_5f74b938 + iVar6) = fVar2;
  _DAT_5f74b780 = _DAT_5f74b780 * _DAT_5f7609f8;
  _DAT_5f74b810 = _DAT_5f74b810 * _DAT_5f7609fc;
  _DAT_5f74b930 = _DAT_5f74b930 * _DAT_5f760a00;
  DAT_5f74b838 = DAT_5f74b838 * _DAT_5f760a04;
  DAT_5f74b83c = DAT_5f74b83c * _DAT_5f760a04;
  DAT_5f74b840 = DAT_5f74b840 * _DAT_5f760a04;
  iVar9 = 0x1b;
  iVar8 = -0x48;
  iVar6 = 0;
  while( true ) {
    fVar1 = *(float *)(iVar8 + 0x5f74b9b8);
    fVar2 = *(float *)(iVar8 + 0x5f74b9b8);
    fVar3 = *(float *)(iVar8 + 0x5f74b9b8);
    fVar4 = *(float *)(iVar8 + 0x5f74b9b8);
    iVar7 = iVar9 % 0x24;
    fVar5 = *(float *)(iVar8 + 0x5f74b9b8);
    (&DAT_5f74b784)[iVar7] = *(float *)(iVar8 + 0x5f74b9b8) * (float)(&DAT_5f74b784)[iVar7];
    (&DAT_5f74b8a4)[iVar7] = fVar5 * (float)(&DAT_5f74b8a4)[iVar7];
    iVar9 = iVar9 + 1;
    (&DAT_5f74b6f4)[iVar7] = fVar1 * (float)(&DAT_5f74b6f4)[iVar7];
    *(float *)((int)&DAT_5f74b7ec + iVar6) = fVar3 * *(float *)((int)&DAT_5f74b7ec + iVar6);
    *(float *)((int)&DAT_5f74b75c + iVar6) = fVar2 * *(float *)((int)&DAT_5f74b75c + iVar6);
    fVar4 = fVar4 * *(float *)((int)&DAT_5f74b90c + iVar6);
    iVar8 = iVar8 + 4;
    if (iVar8 == 0) break;
    *(float *)((int)&DAT_5f74b90c + iVar6) = fVar4;
    iVar6 = iVar6 + -4;
  }
  *(float *)((int)&DAT_5f74b90c + iVar6) = fVar4;
  iVar8 = 0;
  iVar9 = -0x18;
  iVar6 = 9;
  do {
    fVar1 = *(float *)((int)&DAT_5f74b970 + iVar9);
    iVar7 = iVar6 / 0xc;
    *(float *)((int)&DAT_5f74b834 + iVar8) =
         *(float *)((int)&DAT_5f74b970 + iVar9) * *(float *)((int)&DAT_5f74b834 + iVar8);
    iVar8 = iVar8 + -4;
    iVar9 = iVar9 + 4;
    (&DAT_5f74b814)[iVar6 % 0xc] = fVar1 * (float)(&DAT_5f74b814)[iVar6 % 0xc];
    iVar6 = iVar6 + 1;
  } while (iVar9 != 0);
  return iVar7;
}


