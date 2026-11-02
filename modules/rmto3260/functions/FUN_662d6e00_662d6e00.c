/* Module: rmto3260.dll
   Function: FUN_662d6e00
   Address: 662d6e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d6e00(char *param_1,undefined4 *param_2,undefined1 *param_3,uint param_4,int *param_5)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *local_10;
  int local_c;
  undefined1 local_5;
  
  iVar9 = 0;
  local_c = 0;
  pcVar3 = strtok((char *)0x0,&DAT_6630ad88);
  if (pcVar3 == (char *)0x0) {
    local_c = -0x7ffbfc32;
    iVar9 = -0x7ffbfc32;
  }
  iVar4 = FUN_662f3f80(pcVar3);
  pcVar3 = param_1;
  if ((-1 < iVar9) && (pcVar3 = strtok((char *)0x0,&DAT_6630ad88), pcVar3 == (char *)0x0)) {
    local_c = -0x7ffbfc32;
    iVar9 = -0x7ffbfc32;
  }
  if (-1 < iVar9) {
    iVar5 = atoi(pcVar3);
    local_5 = (undefined1)iVar5;
    local_10 = strtok((char *)0x0,&DAT_6630ad90);
    if (local_10 == (char *)0x0) {
      local_c = -0x7ffbfc32;
      iVar9 = -0x7ffbfc32;
    }
  }
  if (-1 < iVar9) {
    uVar6 = 0xffffffff;
    pcVar3 = local_10;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (param_4 < ~uVar6 + 0x12) {
      local_c = -0x7ffbfff3;
      iVar9 = -0x7ffbfff3;
    }
    if (-1 < iVar9) {
      uVar6 = 0xffffffff;
      pcVar3 = local_10;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar6 - 1;
      uVar2 = *(undefined2 *)(param_1 + 0x20);
      *param_3 = (char)((ushort)uVar2 >> 8);
      param_3[1] = (char)uVar2;
      param_3[2] = 0;
      iVar9 = ~uVar6 + 6;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0xff;
      param_3[7] = 0xff;
      param_3[8] = 0xff;
      param_3[9] = 0xff;
      param_3[10] = (char)((uint)iVar9 >> 8);
      param_3[0xb] = (char)iVar9;
      param_3[0xc] = 0;
      param_3[0xd] = 0x30;
      param_3[0xe] = local_5;
      param_3[0xf] = (char)((uint)iVar4 >> 0x18);
      param_3[0x10] = (char)((uint)iVar4 >> 0x10);
      param_3[0x11] = (char)((uint)iVar4 >> 8);
      param_3[0x12] = (char)iVar4;
      uVar8 = uVar7 & 0xffff;
      pcVar3 = param_3 + 0x13;
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)local_10;
        local_10 = local_10 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar3 = *local_10;
        local_10 = local_10 + 1;
        pcVar3 = pcVar3 + 1;
      }
      *param_5 = uVar8 + 0x13;
      iVar9 = local_c;
      if (-1 < local_c) {
        *param_2 = 0;
        *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)(param_1 + 0x20);
        *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
        *(undefined2 *)(param_2 + 1) = 0;
        *(undefined2 *)(param_2 + 2) = 2;
      }
    }
  }
  return iVar9;
}


