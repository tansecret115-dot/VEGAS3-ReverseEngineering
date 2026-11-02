/* Module: vidpcore.dll
   Function: FUN_5de0a490
   Address: 5de0a490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de0a490(uint *param_1,char *param_2,short *param_3)

{
  LPCWSTR lpString;
  char cVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (*(short *)((int)param_1 + 2) == -1) {
    uVar5 = param_1[3];
  }
  else {
    uVar5 = *param_1;
  }
  if ((uVar5 & 0x40) == 0) {
    return 0;
  }
  psVar3 = (short *)((int)param_1 + 0x1a);
  if (*(short *)((int)param_1 + 2) != -1) {
    psVar3 = (short *)((int)param_1 + 0x12);
  }
  sVar2 = *psVar3;
  if (sVar2 == -1) {
    psVar3 = psVar3 + 2;
  }
  else {
    while (psVar3 = psVar3 + 1, sVar2 != 0) {
      sVar2 = *psVar3;
    }
  }
  sVar2 = *psVar3;
  if (sVar2 == -1) {
    psVar3 = psVar3 + 2;
  }
  else {
    while (psVar3 = psVar3 + 1, sVar2 != 0) {
      sVar2 = *psVar3;
    }
  }
  sVar2 = *psVar3;
  while (psVar3 = psVar3 + 1, sVar2 != 0) {
    sVar2 = *psVar3;
  }
  *param_3 = *psVar3;
  lpString = psVar3 + (-(uint)(*(short *)((int)param_1 + 2) != -1) & 0xfffffffe) + 3;
  if (lpString == (LPCWSTR)0x0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = &stack0xfffffff0;
    iVar4 = lstrlenW(lpString);
    FUN_5df157d0();
    WideCharToMultiByte(0,0,lpString,-1,&stack0xfffffff0,iVar4 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}


