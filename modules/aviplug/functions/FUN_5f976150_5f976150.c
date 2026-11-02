/* Module: aviplug.dll
   Function: FUN_5f976150
   Address: 5f976150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f976150(uint *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  char *local_8;
  
  local_1c = param_2 + 0x1e8;
  local_18 = 0;
  iVar4 = 5;
  pcVar5 = param_2;
  puVar2 = param_1;
  local_14 = param_3 + 0xe280;
  do {
    *(char **)(pcVar5 + 0x44) = param_2 + (local_18 + 0x1f >> 5) * 4 + 0x1e8;
    FUN_5f975ff0((int)puVar2,pcVar5,(int *)&local_1c);
    pcVar5 = pcVar5 + 0x48;
    puVar2 = puVar2 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(local_14 + 8) = 0;
  if (0 < local_18) {
    local_c = local_18;
    local_8 = local_1c;
    local_10 = 0;
    local_14 = param_3 + 0xe280;
    FUN_5f975750((int)&local_1c,&local_10);
  }
  iVar4 = 5;
  do {
    iVar3 = 0x13;
    puVar2 = param_1 + 1;
    do {
      uVar1 = *puVar2;
      param_1 = puVar2 + 1;
      iVar3 = iVar3 + -1;
      *puVar2 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
      puVar2 = param_1;
    } while (iVar3 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


