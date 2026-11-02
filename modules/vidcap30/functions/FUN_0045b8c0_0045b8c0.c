/* Module: vidcap30.exe
   Function: FUN_0045b8c0
   Address: 0045b8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_0045b8c0(LPCSTR param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)FUN_0046ed20();
  if (*pcVar2 != '\0') {
    puVar6 = *(undefined4 **)(pcVar2 + 8);
    bVar1 = *(byte *)(puVar6 + 6);
    while ((bVar1 & 2) != 2) {
      iVar3 = lstrcmpiA(param_1,(LPCSTR)*puVar6);
      if (iVar3 == 0) break;
      if (iVar3 < 0) {
        puVar6 = (undefined4 *)puVar6[4];
      }
      else {
        puVar6 = (undefined4 *)puVar6[5];
      }
      bVar1 = *(byte *)(puVar6 + 6);
    }
    if ((*(byte *)(puVar6 + 6) & 2) != 2) {
      FUN_0046fa20(param_1,1,0);
    }
  }
  BVar4 = DeleteFileA(param_1);
  if ((BVar4 == 0) && (DVar5 = GetLastError(), DVar5 == 2)) {
    return 1;
  }
  return BVar4;
}


