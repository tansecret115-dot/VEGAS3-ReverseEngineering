/* Module: sipr3260.dll
   Function: FUN_632a2000
   Address: 632a2000
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_632a2000(void)

{
  char cVar1;
  char *lpSubKey;
  LSTATUS LVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_24 [20];
  LONG local_10;
  long local_c;
  HKEY local_8;
  
  lpSubKey = operator_new(0x100);
  uVar3 = 0xffffffff;
  local_c = 0x400;
  pcVar5 = s_Software_RealNetworks_Languages__632a5140;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = lpSubKey;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_632a20b0(lpSubKey);
  LVar2 = RegOpenKeyA((HKEY)0x80000000,lpSubKey,&local_8);
  if (LVar2 == 0) {
    local_10 = 0x14;
    LVar2 = RegQueryValueA(local_8,&DAT_632a53c4,local_24,&local_10);
    if (LVar2 == 0) {
      local_c = atol(local_24);
    }
    RegCloseKey(local_8);
  }
  operator_delete(lpSubKey);
  return local_c;
}


