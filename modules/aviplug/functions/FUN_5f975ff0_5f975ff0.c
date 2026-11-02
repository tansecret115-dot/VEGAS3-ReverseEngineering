/* Module: aviplug.dll
   Function: FUN_5f975ff0
   Address: 5f975ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f975ff0(int param_1,char *param_2,int *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  iVar4 = 2;
  local_1c = *(int *)(param_2 + 0x44);
  *(byte *)(param_1 + 3) = param_2[4] & 0xfU | *param_2 << 4;
  local_14 = (undefined4 *)param_3[2];
  pcVar2 = param_2 + 8;
  puVar3 = (uint *)(param_1 + 4);
  do {
    puVar6 = puVar3;
    pcVar5 = pcVar2;
    FUN_5f975480(puVar6,100,0,*(uint **)pcVar5,&local_1c);
    FUN_5f975480(puVar6 + 3,100,0x10,*(uint **)(pcVar5 + 4),&local_1c);
    iVar4 = iVar4 + -1;
    pcVar2 = pcVar5 + 8;
    puVar3 = puVar6 + 7;
  } while (iVar4 != 0);
  FUN_5f975480(puVar6 + 7,0x44,0,*(uint **)(pcVar5 + 8),&local_1c);
  FUN_5f975480(puVar6 + 9,0x44,0x10,*(uint **)(pcVar5 + 0xc),&local_1c);
  *(undefined4 *)((int)local_14 + 8) = 0;
  local_14 = (undefined4 *)param_3[2];
  local_10 = 0;
  local_c = local_18;
  local_8 = local_1c;
  if ((0 < local_18) && (local_14[2] != 0)) {
    FUN_5f975750((int)&local_1c,&local_10);
  }
  if (local_c != 0) {
    FUN_5f9758f0(param_3,&local_10);
    *(undefined4 *)(param_3[2] + 8) = 0;
    return;
  }
  iVar4 = local_14[2];
  while (iVar4 != 0) {
    if (0 < (int)local_14[1]) {
      puVar1 = (undefined4 *)param_3[2];
      puVar1[1] = local_14[1];
      *puVar1 = *local_14;
      puVar1[2] = local_14[2];
    }
    param_3[2] = param_3[2] + 0x10;
    iVar4 = local_14[6];
    local_14 = local_14 + 4;
  }
  *(undefined4 *)(param_3[2] + 8) = 0;
  return;
}


