/* Module: pncrt.dll
   Function: gmtime
   Address: 7802dfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


tm * __cdecl gmtime(time_t *_Time)

{
  bool bVar1;
  time_t tVar2;
  DWORD *pDVar3;
  void *pvVar4;
  int iVar5;
  tm *ptVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
                    /* 0x2dfe0  632  gmtime */
  bVar1 = false;
  iVar11 = (int)*_Time;
  pDVar3 = FUN_78009cc0();
  if (iVar11 < 0) {
    return (tm *)0x0;
  }
  if (pDVar3[0x10] == 0) {
    pvVar4 = malloc(0x24);
    pDVar3[0x10] = (DWORD)pvVar4;
    ptVar6 = (tm *)&DAT_780426d8;
    if (pvVar4 == (void *)0x0) goto LAB_7802e01f;
  }
  ptVar6 = (tm *)pDVar3[0x10];
LAB_7802e01f:
  iVar9 = iVar11 % 0x7861f80;
  iVar11 = (iVar11 / 0x7861f80) * 4;
  iVar5 = iVar11 + 0x46;
  iVar10 = iVar9;
  if (0x1e1337f < iVar9) {
    iVar10 = iVar9 + -0x1e13380;
    iVar5 = iVar11 + 0x47;
    if (0x1e1337f < iVar10) {
      iVar10 = iVar9 + -0x3c26700;
      iVar5 = iVar11 + 0x48;
      if (iVar10 < 0x1e28500) {
        bVar1 = true;
      }
      else {
        iVar5 = iVar11 + 0x49;
        iVar10 = iVar9 + -0x5a4ec00;
      }
    }
  }
  ptVar6->tm_year = iVar5;
  ptVar6->tm_yday = iVar10 / 0x15180;
  puVar8 = (undefined4 *)&DAT_78040540;
  if (!bVar1) {
    puVar8 = &DAT_78040578;
  }
  piVar7 = puVar8 + 1;
  iVar5 = 1;
  iVar11 = *piVar7;
  while (iVar11 < ptVar6->tm_yday) {
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + 1;
    iVar11 = *piVar7;
  }
  ptVar6->tm_mon = iVar5 + -1;
  ptVar6->tm_mday = ptVar6->tm_yday - puVar8[iVar5 + -1];
  tVar2 = *_Time;
  ptVar6->tm_isdst = 0;
  ptVar6->tm_wday = ((int)tVar2 / 0x15180 + 4) % 7;
  ptVar6->tm_hour = (iVar10 % 0x15180) / 0xe10;
  iVar11 = (iVar10 % 0x15180) % 0xe10;
  ptVar6->tm_min = iVar11 / 0x3c;
  ptVar6->tm_sec = iVar11 % 0x3c;
  return ptVar6;
}


