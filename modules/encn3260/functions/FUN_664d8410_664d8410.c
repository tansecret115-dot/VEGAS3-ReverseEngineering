/* Module: encn3260.dll
   Function: FUN_664d8410
   Address: 664d8410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d8410(void *this,char *param_1,undefined4 *param_2)

{
  char cVar1;
  LPCSTR lpSubKey;
  LSTATUS LVar2;
  undefined4 *puVar3;
  int *lpcbData;
  LPSTR lpData;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  LPCSTR pCVar9;
  undefined4 local_10;
  HKEY local_c;
  LONG local_8;
  
  *param_2 = 0;
  if (param_1 == (char *)0x0) {
    return 0x80070057;
  }
  uVar4 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar8 = (char *)((int)this + 0xc);
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  lpSubKey = operator_new(~uVar4 + ~uVar5);
  if (lpSubKey == (LPCSTR)0x0) {
    return 0x8007000e;
  }
  uVar4 = 0xffffffff;
  local_10 = 0xffffffff;
  pcVar8 = (char *)((int)this + 0xc);
  do {
    pcVar7 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_8 = 0;
  pcVar8 = pcVar7 + -uVar4;
  pcVar7 = lpSubKey;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_664e32e0;
  do {
    pcVar7 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pCVar9 = lpSubKey;
  do {
    pcVar8 = pCVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pCVar9 + 1;
    cVar1 = *pCVar9;
    pCVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar8 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pCVar9 = lpSubKey;
  do {
    pcVar7 = pCVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = pCVar9 + 1;
    cVar1 = *pCVar9;
    pCVar9 = pcVar7;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar4;
  pcVar7 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  LVar2 = RegOpenKeyA((HKEY)0x80000000,lpSubKey,&local_c);
  if (LVar2 == 0) {
    LVar2 = RegQueryValueA(local_c,&DAT_664f05c4,(LPSTR)0x0,&local_8);
    if ((LVar2 == 0) && (0 < local_8)) {
      puVar3 = operator_new(0x28);
      if (puVar3 == (undefined4 *)0x0) {
        lpcbData = (int *)0x0;
      }
      else {
        lpcbData = (int *)FUN_664bad50(puVar3);
      }
      *param_2 = lpcbData;
      if (lpcbData == (int *)0x0) {
        RegCloseKey(local_c);
        operator_delete(lpSubKey);
        return 0x8007000e;
      }
      (**(code **)(*lpcbData + 4))();
      (**(code **)(*(int *)*param_2 + 0x14))((int *)*param_2,local_8);
      lpData = (LPSTR)(**(code **)(*(int *)*param_2 + 0x1c))((int *)*param_2,&local_8);
      RegQueryValueA(local_c,&DAT_664f05c4,lpData,lpcbData);
      local_10 = 0;
    }
    RegCloseKey(local_c);
  }
  operator_delete(lpSubKey);
  return local_10;
}


