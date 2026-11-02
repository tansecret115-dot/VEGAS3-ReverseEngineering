/* Module: rmto3260.dll
   Function: FUN_66304d50
   Address: 66304d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66304d50(void *this,char *param_1,int *param_2)

{
  char cVar1;
  LPCSTR lpSubKey;
  LSTATUS LVar2;
  undefined4 uVar3;
  LPCSTR pCVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  HKEY local_8;
  
  if ((param_1 == (char *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80070057;
  }
  uVar5 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0xffffffff;
  pcVar9 = (char *)((int)this + 0xc);
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  lpSubKey = operator_new(~uVar5 + ~uVar6);
  if (lpSubKey == (LPCSTR)0x0) {
    return 0x8007000e;
  }
  uVar5 = 0xffffffff;
  pcVar9 = (char *)((int)this + 0xc);
  do {
    pcVar8 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar8 + -uVar5;
  pcVar8 = lpSubKey;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_6630b51c;
  do {
    pcVar8 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pCVar4 = lpSubKey;
  do {
    pcVar9 = pCVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pCVar4 + 1;
    cVar1 = *pCVar4;
    pCVar4 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar5;
  pcVar9 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar9 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pCVar4 = lpSubKey;
  do {
    pcVar8 = pCVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pCVar4 + 1;
    cVar1 = *pCVar4;
    pCVar4 = pcVar8;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -uVar5;
  pcVar8 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  LVar2 = RegCreateKeyA((HKEY)0x80000000,lpSubKey,&local_8);
  if (LVar2 == 0) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    pCVar4 = (LPCSTR)(**(code **)(*param_2 + 0x1c))(param_2,uVar3);
    RegSetValueA(local_8,&DAT_66311c80,1,pCVar4,(DWORD)param_2);
    RegCloseKey(local_8);
    operator_delete(lpSubKey);
    return 0;
  }
  operator_delete(lpSubKey);
  return 0xffffffff;
}


