/* Module: vegas30k.dll
   Function: cdr_ParseISRC
   Address: 01099a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_ParseISRC(char *,char *) */

int cdr_ParseISRC(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  CHAR local_50 [79];
  undefined1 local_1;
  
                    /* 0x99a00  606  ?cdr_ParseISRC@@YGHPAD0@Z */
  lstrcpynA(local_50,param_2,0x50);
  local_1 = 0;
  iVar2 = lstrlenA(local_50);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = isalnum((int)local_50[iVar5]);
      if (iVar3 == 0) {
        local_50[iVar5] = ':';
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  iVar2 = lstrlenA(local_50);
  uVar4 = iVar2 - 1;
  if (-1 < (int)uVar4) {
    do {
      if ((local_50[uVar4] != ' ') && (local_50[uVar4] != '\t')) break;
      local_50[uVar4] = '\0';
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  iVar2 = lstrlenA(local_50);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = isalnum((int)local_50[iVar5]);
      if (iVar3 != 0) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  cVar1 = local_50[iVar5];
  pcVar6 = local_50 + iVar5;
  iVar2 = 0;
  builtin_strncpy(param_1,"0000000000000",0xd);
  while ((cVar1 != '\0' && (iVar2 < 0xc))) {
    iVar5 = isalnum((int)cVar1);
    if (iVar5 != 0) {
      cVar1 = *pcVar6;
      param_1[iVar2] = cVar1;
      if (('`' < cVar1) && (cVar1 < '{')) {
        param_1[iVar2] = cVar1 + -0x20;
      }
      iVar2 = iVar2 + 1;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
  }
  return 0;
}


