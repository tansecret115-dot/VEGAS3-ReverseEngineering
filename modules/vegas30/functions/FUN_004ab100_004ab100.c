/* Module: vegas30.exe
   Function: FUN_004ab100
   Address: 004ab100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ab100(int param_1,LPCSTR param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == 0) {
    pcVar2 = (char *)FUN_005ec620();
  }
  else {
    pcVar2 = (char *)FUN_005bad20(param_1);
  }
  if (pcVar2 == (char *)0x0) {
    return 0;
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
      return puVar4[1];
    }
  }
  return 0;
}


