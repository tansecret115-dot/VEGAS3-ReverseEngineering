/* Module: vidcap30.exe
   Function: FUN_0045b950
   Address: 0045b950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045b950(LPCSTR param_1,LPCSTR param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)FUN_0046ed20();
  if (*pcVar2 != '\0') {
    puVar4 = *(undefined4 **)(pcVar2 + 8);
    bVar1 = *(byte *)(puVar4 + 6);
    while ((bVar1 & 2) != 2) {
      iVar3 = lstrcmpiA(param_1,(LPCSTR)*puVar4);
      if (iVar3 == 0) break;
      if (iVar3 < 0) {
        puVar4 = (undefined4 *)puVar4[4];
      }
      else {
        puVar4 = (undefined4 *)puVar4[5];
      }
      bVar1 = *(byte *)(puVar4 + 6);
    }
    if ((*(byte *)(puVar4 + 6) & 2) != 2) {
      FUN_0046fa20(param_1,1,0);
    }
  }
  if (*pcVar2 != '\0') {
    puVar4 = *(undefined4 **)(pcVar2 + 8);
    bVar1 = *(byte *)(puVar4 + 6);
    while ((bVar1 & 2) != 2) {
      iVar3 = lstrcmpiA(param_2,(LPCSTR)*puVar4);
      if (iVar3 == 0) break;
      if (iVar3 < 0) {
        puVar4 = (undefined4 *)puVar4[4];
      }
      else {
        puVar4 = (undefined4 *)puVar4[5];
      }
      bVar1 = *(byte *)(puVar4 + 6);
    }
    if ((*(byte *)(puVar4 + 6) & 2) != 2) {
      FUN_0046fa20(param_2,1,0);
    }
  }
  MoveFileA(param_1,param_2);
  return;
}


