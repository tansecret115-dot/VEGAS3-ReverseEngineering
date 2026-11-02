/* Module: mp3plug.dll
   Function: FUN_5f712b54
   Address: 5f712b54
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f712b54(void *this,int param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  pvVar4 = this;
  do {
    *(undefined1 *)((int)pvVar4 + 0x7c) = 0;
    pvVar4 = (void *)((int)pvVar4 + 1);
  } while (pvVar4 < (void *)((int)this + 100U));
  iVar5 = (int)(uint)*(byte *)(param_1 + 3) >> 6;
  uVar3 = *(uint *)(&DAT_5f76483c + ((int)(uint)*(byte *)(param_1 + 2) >> 2 & 3U) * 4);
  uVar8 = (int)(uint)*(byte *)(param_1 + 1) >> 4 & 1;
  if (((int)(uint)*(byte *)(param_1 + 1) >> 3 & 1U) == 0) {
    if (uVar8 == 1) {
      uVar3 = (int)(uVar3 + (0x7fffffff < uVar3)) >> 1;
    }
    else if (uVar8 == 0) {
      uVar3 = (int)(uVar3 + ((uint)((int)uVar3 >> 1) >> 0x1e)) >> 2;
    }
  }
  if ((int)uVar3 < 32000) {
    if ((int)uVar3 < 16000) {
      return 0;
    }
    if (iVar5 == 3) {
      iVar5 = 0xd;
    }
    else {
      iVar5 = 0x15;
    }
  }
  else if (iVar5 == 3) {
    iVar5 = 0x15;
  }
  else {
    iVar5 = 0x24;
  }
  if ((((iVar5 + 0x78U <= param_2) && (pcVar1 = (char *)(iVar5 + param_1), *pcVar1 == 'X')) &&
      (pcVar1[1] == 'i')) && ((pcVar1[2] == 'n' && (pcVar1[3] == 'g')))) {
    pbVar6 = (byte *)(pcVar1 + 8);
    *(undefined1 *)((int)this + 5) = 1;
    bVar2 = pcVar1[7];
    uVar3 = (uint)bVar2 |
            (uint)(byte)pcVar1[4] << 0x18 | (uint)(byte)pcVar1[5] << 0x10 |
            (uint)(byte)pcVar1[6] << 8;
    *(uint *)((int)this + 0x70) = uVar3;
    if ((bVar2 & 1) != 0) {
      uVar3 = *(uint *)((int)this + 0x70);
      bVar2 = *pbVar6;
      pbVar6 = (byte *)(pcVar1 + 0xc);
      *(uint *)((int)this + 0x74) =
           (uint)bVar2 << 0x18 | (uint)(byte)pcVar1[9] << 0x10 | (uint)(byte)pcVar1[10] << 8 |
           (uint)(byte)pcVar1[0xb];
    }
    pbVar7 = pbVar6;
    if ((uVar3 & 2) != 0) {
      pbVar7 = pbVar6 + 4;
      uVar3 = *(uint *)((int)this + 0x70);
      *(uint *)((int)this + 0x78) =
           (uint)*pbVar6 << 0x18 | (uint)pbVar6[1] << 0x10 | (uint)pbVar6[2] << 8 | (uint)pbVar6[3];
    }
    if ((uVar3 & 4) != 0) {
      uVar3 = 0;
      do {
        *(byte *)((int)this + uVar3 + 0x7c) = pbVar7[uVar3];
        uVar3 = uVar3 + 1;
      } while (uVar3 < 100);
      pbVar7 = pbVar7 + 100;
      uVar3 = *(uint *)((int)this + 0x70);
    }
    if ((uVar3 & 8) != 0) {
      *(uint *)((int)this + 0xe0) =
           (uint)*pbVar7 << 0x18 | (uint)pbVar7[1] << 0x10 | (uint)pbVar7[2] << 8 | (uint)pbVar7[3];
    }
    return 1;
  }
  return 0;
}


