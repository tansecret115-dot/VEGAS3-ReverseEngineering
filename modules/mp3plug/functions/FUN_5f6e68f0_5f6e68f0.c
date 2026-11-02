/* Module: mp3plug.dll
   Function: FUN_5f6e68f0
   Address: 5f6e68f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6e68f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  uint uVar8;
  long local_1c;
  int local_18;
  
  *(int *)(param_1 + 0x1c) = param_2;
  local_18 = param_3;
  *(int *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x2c) = param_4;
  *(int *)(param_1 + 0x30) = param_5;
  FUN_5f6de860(s_padding_5f75c320,1,0,2,0x5f75d540,s_0___iso__1___never__2___always_5f75d560,
               &local_1c);
  *(long *)(param_1 + 0x34) = local_1c;
  iVar2 = (param_2 * 0x240) / local_18;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0x480;
    *(undefined4 **)(param_1 + 0x28) = &DAT_5f740f30;
    iVar2 = iVar2 * -2 + 0x1e00;
    if ((iVar2 < 1) || (iVar2 < 0xff8)) {
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0xff8;
    }
  }
  else if (param_4 == 1) {
    iVar2 = 0x1e00 - iVar2;
    *(undefined **)(param_1 + 0x28) = &DAT_5f740f70;
    *(undefined4 *)(param_1 + 0x20) = 0x240;
    if ((iVar2 < 1) || (iVar2 < 0x7f8)) {
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x7f8;
    }
  }
  else {
    if (param_4 != 2) {
      ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d580,(char *)0x14e,
                             (undefined *)0x0,s_unknown_bitstream_type_5f75d5c0);
      return ppuVar6;
    }
    iVar2 = 0x1e00 - iVar2;
    *(undefined **)(param_1 + 0x28) = &DAT_5f740fb0;
    *(undefined4 *)(param_1 + 0x20) = 0x240;
    if ((iVar2 < 1) || (iVar2 < 0x7f8)) {
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x7f8;
    }
  }
  if (param_5 == 0) {
    iVar5 = *(int *)(param_1 + 0x28);
    iVar3 = 1;
    if (*(int *)(iVar5 + 4) != -1) {
      iVar4 = *(int *)(iVar5 + 4);
      do {
        if (param_2 <= iVar4) break;
        iVar4 = *(int *)(iVar5 + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar4 != -1);
    }
    if ((iVar3 != 0xf) && (param_2 != *(int *)(iVar5 + iVar3 * 4))) {
      iVar3 = 0xf;
    }
    if (iVar3 == 0xf) {
      ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d580,(char *)0x15b,
                             (undefined *)0x0,s_non_ISO_bitrate_5f75d5e0);
      return ppuVar6;
    }
  }
  else if (param_5 == 1) {
    iVar5 = *(int *)(param_1 + 0x28);
    iVar4 = 1;
    iVar3 = *(int *)(iVar5 + 4);
    if (iVar3 != -1) {
      iVar7 = *(int *)(iVar5 + 4);
      do {
        if (param_2 <= iVar7) break;
        iVar7 = *(int *)(iVar5 + 4 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar7 != -1);
    }
    if ((iVar4 != 0xf) && (param_2 != *(int *)(iVar5 + iVar4 * 4))) {
      iVar4 = 0xf;
    }
    if (iVar4 == 0xf) {
      iVar4 = 1;
      if (iVar3 != -1) {
        iVar7 = *(int *)(iVar5 + 4);
        do {
          if (param_2 <= iVar7) break;
          iVar7 = *(int *)(iVar5 + 4 + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar7 != -1);
      }
      if ((iVar4 != 0xf) && (iVar4 = iVar4 + -1, iVar4 == 0)) {
        iVar4 = 0xf;
      }
      if (iVar4 == 0xf) {
        ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d580,(char *)0x16e,
                               (undefined *)0x0,s_bitrate_too_low_5f75d5f0);
        return ppuVar6;
      }
      iVar4 = 1;
      if (iVar3 != -1) {
        iVar3 = *(int *)(iVar5 + 4);
        do {
          if (param_2 <= iVar3) break;
          iVar3 = *(int *)(iVar5 + 4 + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar3 != -1);
      }
      if ((iVar4 != 0xf) && (*(int *)(iVar5 + iVar4 * 4) == param_2)) {
        iVar4 = iVar4 + 1;
      }
      if (iVar4 == 0xf) {
        ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d580,(char *)0x173,
                               (undefined *)0x0,s_bitrate_too_high_5f75d600);
        return ppuVar6;
      }
      FUN_5f6e6ce0(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    if (param_5 != 2) {
      ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d580,(char *)0x182,
                             (undefined *)0x0,s_unknown_bitstream_mode_5f75d620);
      return ppuVar6;
    }
    piVar1 = *(int **)(param_1 + 0x28);
    iVar5 = 1;
    if (piVar1[1] != -1) {
      iVar3 = piVar1[1];
      iVar4 = 1;
      while (iVar5 = iVar4, iVar3 < param_2) {
        iVar5 = iVar4 + 1;
        if ((piVar1[iVar4 + 1] == -1) || (param_2 <= piVar1[iVar4 + 1])) break;
        iVar5 = iVar4 + 2;
        iVar3 = piVar1[iVar5];
        iVar4 = iVar5;
        if (iVar3 == -1) break;
      }
    }
    if (iVar5 != 0xf) {
      if (param_2 < *piVar1) {
        iVar5 = 0xf;
      }
      else {
        iVar5 = 0;
      }
    }
    if (iVar5 == 0xf) {
      ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d580,(char *)0x17c,
                             (undefined *)0x0,s_bitrate_too_low_5f75d5f0);
      return ppuVar6;
    }
  }
  uVar8 = iVar2 + 7U & 0xfffffff8;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x3c) = uVar8;
  *(uint *)(param_1 + 0x18) = uVar8;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_5f6e6d60(param_1);
  return (undefined **)0x0;
}


