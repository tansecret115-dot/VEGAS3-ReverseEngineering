/* Module: gifplug.dll
   Function: FUN_5f6c3ff0
   Address: 5f6c3ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f6c3ff0(void *this,int param_1,char param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,byte param_11,int param_12)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  uint local_4;
  
  iVar2 = FUN_5f6c2fb0(this,&local_8);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_5f6c2fd0(this,&local_4);
  if (-1 < iVar2) {
    iVar2 = *(int *)((int)this + 0x331);
    uVar6 = local_8;
    if (iVar2 != 0) {
      uVar6 = local_8 * 4;
    }
    uVar6 = uVar6 + 3 & 0xfffffffc;
    if (param_9 != 0) {
      iVar8 = (int)(param_8 + 7 + (param_8 + 7 >> 0x1f & 7U)) >> 3;
      iVar7 = ((int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 7U)) >> 3) + iVar8;
      iVar3 = ((int)(param_8 + 1 + (param_8 + 1 >> 0x1f & 3U)) >> 2) + iVar7;
      if (param_3 < iVar8) {
        param_3 = param_3 << 3;
      }
      else if (param_3 < iVar7) {
        param_3 = (param_3 - iVar8) * 8 + 4;
      }
      else if (param_3 < iVar3) {
        param_3 = (param_3 - iVar7) * 4 + 2;
      }
      else {
        param_3 = (param_3 - iVar3) * 2 + 1;
      }
    }
    iVar3 = param_3 + param_6;
    if (iVar3 < (int)local_4) {
      if ((int)local_8 < param_5 + param_7) {
        param_7 = local_8 - param_5;
      }
      if (param_10 == 0) {
        if (iVar2 == 0) {
          pcVar5 = (char *)(((local_4 - iVar3) + -1) * uVar6 + param_1 + param_5);
          iVar2 = 0;
          if (0 < param_7) {
            do {
              *pcVar5 = *(char *)(iVar2 + param_4) + param_2;
              pcVar5 = pcVar5 + 1;
              iVar2 = iVar2 + 1;
            } while (iVar2 < param_7);
          }
        }
        else {
          puVar4 = (undefined1 *)(param_1 + ((local_4 - iVar3) + -1) * uVar6 + param_5 * 4);
          iVar2 = 0;
          if (0 < param_7) {
            do {
              *puVar4 = *(undefined1 *)((uint)*(byte *)(iVar2 + param_4) * 3 + 2 + param_12);
              puVar4[1] = *(undefined1 *)((uint)*(byte *)(iVar2 + param_4) * 3 + 1 + param_12);
              pbVar1 = (byte *)(iVar2 + param_4);
              iVar2 = iVar2 + 1;
              puVar4[2] = *(undefined1 *)(param_12 + (uint)*pbVar1 * 3);
              puVar4[3] = 0xff;
              puVar4 = puVar4 + 4;
            } while (iVar2 < param_7);
            return 0;
          }
        }
      }
      else if (iVar2 == 0) {
        pcVar5 = (char *)(((local_4 - iVar3) + -1) * uVar6 + param_1 + param_5);
        iVar2 = 0;
        if (0 < param_7) {
          do {
            if (*(byte *)(iVar2 + param_4) != param_11) {
              *pcVar5 = *(byte *)(iVar2 + param_4) + param_2;
            }
            pcVar5 = pcVar5 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_7);
          return 0;
        }
      }
      else {
        puVar4 = (undefined1 *)(param_1 + ((local_4 - iVar3) + -1) * uVar6 + param_5 * 4);
        iVar2 = 0;
        if (0 < param_7) {
          do {
            if (*(byte *)(iVar2 + param_4) != param_11) {
              *puVar4 = *(undefined1 *)((uint)*(byte *)(iVar2 + param_4) * 3 + 2 + param_12);
              puVar4[1] = *(undefined1 *)((uint)*(byte *)(iVar2 + param_4) * 3 + 1 + param_12);
              puVar4[2] = *(undefined1 *)(param_12 + (uint)*(byte *)(iVar2 + param_4) * 3);
              puVar4[3] = 0xff;
            }
            puVar4 = puVar4 + 4;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_7);
          return 0;
        }
      }
    }
    return 0;
  }
  return 0xffffffff;
}


