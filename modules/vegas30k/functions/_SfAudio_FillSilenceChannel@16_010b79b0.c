/* Module: vegas30k.dll
   Function: _SfAudio_FillSilenceChannel@16
   Address: 010b79b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudio_FillSilenceChannel_16(ushort *param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
                    /* 0xb79b0  738  _SfAudio_FillSilenceChannel@16 */
  uVar7 = (uint)param_1[1];
  uVar1 = param_1[7];
  if (uVar7 - 1 < param_3) {
    return 0x80004005;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (uVar7 < 2) {
    uVar3 = _SfAudio_FillSilence_12(param_1,param_2,param_4);
    return uVar3;
  }
  uVar2 = *param_1;
  if (uVar2 < 4) {
    if (uVar2 == 3) {
      if (uVar1 == 0x20) {
        puVar6 = (undefined4 *)(param_2 + param_3 * 4);
        if (param_4 != 0) {
          do {
            *puVar6 = 0;
            puVar6 = puVar6 + uVar7;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
          return 0;
        }
        return 0;
      }
      if (uVar1 != 0x40) {
        return 0x80004005;
      }
      puVar6 = (undefined4 *)(param_2 + param_3 * 8);
      if (param_4 != 0) {
        do {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = puVar6 + uVar7 * 2;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return 0;
      }
      return 0;
    }
    if (uVar2 != 1) {
      return 0x80004005;
    }
  }
  else {
    if (uVar2 < 0xfe00) {
      return 0x80004005;
    }
    if (0xfe02 < uVar2) {
      return 0x80004005;
    }
  }
  if ((uVar1 == 8) && (uVar2 != 0xfe01)) {
    puVar4 = (undefined1 *)(param_3 + param_2);
    if (param_4 != 0) {
      do {
        *puVar4 = 0x80;
        puVar4 = puVar4 + uVar7;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    return 0;
  }
  switch(uVar1) {
  case 8:
    break;
  default:
    return 0x80004005;
  case 0x10:
    puVar5 = (undefined2 *)(param_2 + param_3 * 2);
    if (param_4 != 0) {
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + uVar7;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    return 0;
  case 0x18:
    if (param_4 != 0) {
      puVar5 = (undefined2 *)(param_2 + param_3 * 3);
      do {
        param_4 = param_4 + -1;
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 1) = 0;
        puVar5 = (undefined2 *)((int)puVar5 + uVar7 * 3);
      } while (param_4 != 0);
      return 0;
    }
    return 0;
  case 0x20:
    puVar6 = (undefined4 *)(param_2 + param_3 * 4);
    if (param_4 != 0) {
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + uVar7;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    return 0;
  }
  puVar4 = (undefined1 *)(param_3 + param_2);
  if (param_4 != 0) {
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + uVar7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    return 0;
  }
  return 0;
}


