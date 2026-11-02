/* Module: vegas30k.dll
   Function: SfCdiGetIfoFileType
   Address: 01085390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetIfoFileType(unsigned char *,enum tagIFO_FILE_TYPE *) */

long SfCdiGetIfoFileType(uchar *param_1,tagIFO_FILE_TYPE *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
                    /* 0x85390  305  ?SfCdiGetIfoFileType@@YGJPAEPAW4tagIFO_FILE_TYPE@@@Z */
  iVar2 = 0xc;
  bVar5 = false;
  iVar1 = 0;
  bVar6 = true;
  pbVar3 = &DAT_011e2424;
  pbVar4 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pbVar3 < *pbVar4;
    bVar6 = *pbVar3 == *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  if (iVar1 == 0) {
    *param_2 = 0;
    return 0;
  }
  iVar2 = 0xc;
  bVar5 = false;
  iVar1 = 0;
  bVar6 = true;
  pbVar3 = (byte *)"DVDVIDEO-VTS";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pbVar3 < *param_1;
    bVar6 = *pbVar3 == *param_1;
    pbVar3 = pbVar3 + 1;
    param_1 = param_1 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  *param_2 = (iVar1 != 0) + 1;
  return 0;
}


