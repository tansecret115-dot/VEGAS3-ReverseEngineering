/* Module: sfcdi.dll
   Function: FUN_5bf48b70
   Address: 5bf48b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf48b70(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(*(int *)(param_1 + 0x34c) + 0x56);
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x34c) + 0x76);
  pcVar1 = pcVar5 + (uVar3 - 1 & 1) + uVar3 + 0x21;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[6] = 'X';
  pcVar1[7] = 'A';
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    pcVar1[4] = -0x73;
    pcVar1[5] = 'U';
    *pcVar5 = *pcVar5 + '\x0e';
    return;
  }
  iVar4 = lstrcmpiA((LPCSTR)(*(int *)(param_1 + 0x21c) + 0x110),"MPEGAV");
  if (iVar4 == 0) {
    cVar2 = *(char *)(param_1 + 0x220);
    pcVar1[4] = '\x15';
    pcVar1[5] = 'U';
    pcVar1[8] = cVar2 + '\x01';
    *pcVar5 = *pcVar5 + '\x0e';
    return;
  }
  iVar4 = lstrcmpiA((LPCSTR)(param_1 + 0x110),"CDI_IMAG.RTF");
  if (iVar4 == 0) {
    pcVar1[4] = '\x15';
    pcVar1[5] = 'U';
    *pcVar5 = *pcVar5 + '\x0e';
    return;
  }
  pcVar1[4] = '\r';
  pcVar1[5] = 'U';
  *pcVar5 = *pcVar5 + '\x0e';
  return;
}


