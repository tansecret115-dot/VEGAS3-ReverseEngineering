/* Module: vegas30.exe
   Function: FUN_0055de40
   Address: 0055de40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055de40(undefined4 *param_1)

{
  LPCSTR lpString2;
  UINT UVar1;
  int iVar2;
  CHAR *pCVar3;
  undefined4 *puVar4;
  CHAR local_6c;
  char local_6b;
  CHAR local_67 [103];
  
  pCVar3 = &local_6c;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3[0] = '\0';
    pCVar3[1] = '\0';
    pCVar3[2] = '\0';
    pCVar3[3] = '\0';
    pCVar3 = pCVar3 + 4;
  }
  *pCVar3 = '\0';
  puVar4 = param_1;
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  GetLogicalDriveStringsA(0x69,&local_6c);
  lpString2 = &local_6c;
  while (local_6b != '\0') {
    iVar2 = param_1[0x34];
    lstrcpynA((LPSTR)(param_1 + iVar2 * 2),lpString2,4);
    *(CHAR *)((int)(param_1 + iVar2 * 2) + 3) = '\0';
    UVar1 = GetDriveTypeA(lpString2);
    param_1[param_1[0x34] * 2 + 1] = UVar1;
    local_6b = lpString2[5];
    param_1[0x34] = param_1[0x34] + 1;
    lpString2 = lpString2 + 4;
  }
  return;
}


