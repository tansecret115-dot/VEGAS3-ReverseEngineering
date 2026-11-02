/* Module: rmto3260.dll
   Function: FUN_662d7160
   Address: 662d7160
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d7160(int param_1,int *param_2,undefined1 *param_3,uint param_4,int *param_5,
                char *param_6)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  char *local_c;
  int local_8;
  
  iVar8 = 0;
  local_8 = 0;
  pcVar3 = strtok((char *)0x0,&DAT_6630ad88);
  if (pcVar3 == (char *)0x0) {
    local_8 = -0x7ffbfc32;
    iVar8 = -0x7ffbfc32;
  }
  pcVar4 = param_6;
  if (-1 < iVar8) {
    local_10 = FUN_662f3f80(pcVar3);
    pcVar4 = strtok((char *)0x0,&DAT_6630ad88);
    if (pcVar4 == (char *)0x0) {
      local_8 = -0x7ffbfc32;
      iVar8 = -0x7ffbfc32;
    }
  }
  pcVar3 = param_6;
  if (-1 < iVar8) {
    pcVar3 = (char *)FUN_662f3f80(pcVar4);
    local_c = strtok((char *)0x0,&DAT_6630ad9c);
    if (local_c == (char *)0x0) {
      local_8 = -0x7ffbfc32;
      iVar8 = -0x7ffbfc32;
    }
  }
  if (-1 < iVar8) {
    uVar5 = 0xffffffff;
    pcVar4 = local_c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (param_4 < ~uVar5 + 0xd) {
      local_8 = -0x7ffbfff3;
      iVar8 = -0x7ffbfff3;
    }
    if (-1 < iVar8) {
      uVar5 = 0xffffffff;
      pcVar4 = local_c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar2 = *(undefined2 *)(param_1 + 0x20);
      uVar6 = ~uVar5 - 1;
      *param_3 = (char)((ushort)uVar2 >> 8);
      param_3[1] = (char)uVar2;
      param_3[2] = (char)((uint)local_10 >> 0x18);
      param_3[3] = (char)((uint)local_10 >> 0x10);
      param_3[4] = (char)((uint)local_10 >> 8);
      param_3[5] = (char)local_10;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0xffffffff;
      }
      param_3[6] = (char)((uint)pcVar3 >> 0x18);
      param_3[7] = (char)((uint)pcVar3 >> 0x10);
      param_3[8] = (char)((uint)pcVar3 >> 8);
      param_3[9] = (char)pcVar3;
      iVar8 = ~uVar5 + 1;
      param_3[10] = (char)((uint)iVar8 >> 8);
      param_3[0xb] = (char)iVar8;
      param_3[0xc] = (char)((uint)param_6 >> 8);
      param_3[0xd] = (char)param_6;
      uVar5 = uVar6 & 0xffff;
      pcVar3 = param_3 + 0xe;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)local_c;
        local_c = local_c + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *local_c;
        local_c = local_c + 1;
        pcVar3 = pcVar3 + 1;
      }
      *param_5 = uVar5 + 0xe;
      iVar8 = local_8;
    }
  }
  if (-1 < iVar8) {
    *param_2 = local_10 * 100;
    *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)(param_1 + 0x20);
    *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 2) = 2;
  }
  return iVar8;
}


