/* Module: mp3plug.dll
   Function: FUN_5f699e60
   Address: 5f699e60
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_5f699e60(HANDLE param_1,LPCSTR param_2,uint param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  CHAR *pCVar4;
  DWORD local_88;
  CHAR local_84 [132];
  
  pCVar4 = local_84;
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pCVar4[0] = '\0';
    pCVar4[1] = '\0';
    pCVar4[2] = '\0';
    pCVar4[3] = '\0';
    pCVar4 = pCVar4 + 4;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar4 = '\0';
    pCVar4 = pCVar4 + 1;
  }
  if (param_2 != (LPCSTR)0x0) {
    lstrcpynA(local_84,param_2,param_3 + 1);
    local_84[param_3] = '\0';
  }
  BVar1 = WriteFile(param_1,local_84,param_3,&local_88,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}


