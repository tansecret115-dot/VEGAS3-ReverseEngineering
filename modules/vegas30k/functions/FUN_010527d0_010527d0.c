/* Module: vegas30k.dll
   Function: FUN_010527d0
   Address: 010527d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010527d0(int param_1,LPCSTR param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  pcVar4 = (char *)(param_1 + 0x14);
  pcVar5 = param_2;
  for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  cVar2 = *param_2;
  if (cVar2 != '\0') {
    while (cVar2 != '\t') {
      param_2 = CharNextA(param_2);
      cVar2 = *param_2;
      if (cVar2 == '\0') {
        return;
      }
    }
    *param_2 = '\0';
  }
  return;
}


