/* Module: sfmarket2.dll
   Function: FUN_0041fdc0
   Address: 0041fdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0041fdc0(void *this,char *param_1,int param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  FILE *pFVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x21c);
  uVar6 = 0x80070057;
  EnterCriticalSection(lpCriticalSection);
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    uVar3 = 0xffffffff;
    pcVar7 = param_1;
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar7 = pcVar9 + -uVar3;
    pcVar9 = (char *)((int)this + 0x14);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    do {
      pcVar7 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar7 = pcVar7 + -uVar3;
    pcVar9 = (char *)((int)this + 0x118);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = ".previous";
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = (char *)((int)this + 0x118);
    do {
      pcVar8 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar3;
    pcVar9 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    *(undefined4 *)((int)this + 0x10) = param_3;
    *(int *)((int)this + 0xc) = param_2;
    pFVar2 = fopen((char *)((int)this + 0x14),"a+t");
    *(FILE **)((int)this + 8) = pFVar2;
    if (pFVar2 != (FILE *)0x0) {
      *(undefined4 *)((int)this + 4) = 1;
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    uVar6 = 0x8004e007;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar6;
}


