/* Module: mpegin.dll
   Function: mpegSplitSeekTime
   Address: 1000a470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
mpegSplitSeekTime(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                 undefined4 *param_5,longlong *param_6,undefined4 *param_7,int param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
                    /* 0xa470  12  mpegSplitSeekTime */
  if (param_1 == (undefined4 *)0x0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 1;
  }
  if ((((param_4 == (longlong *)0x0) || (param_5 == (undefined4 *)0x0)) ||
      (param_6 == (longlong *)0x0)) || (param_7 == (undefined4 *)0x0)) {
    FUN_10007e90((int)param_1,(byte *)s_Invalid_parameter_10018fd4);
  }
  else {
    if (param_1[7] == 0) {
      FUN_10007e90((int)param_1,(byte *)s_An_MPEG_file_is_not_open_1001901c);
      return 1;
    }
    if ((param_1[0x20] == 0) && (param_1[9] == 0)) {
      FUN_10007e90((int)param_1,(byte *)s_No_audio_or_video_streams_availa_10018fe8);
      return 1;
    }
    if (param_1[0x133c] != 0) {
      *(undefined4 *)(param_1[0x4b95] + 0x1d8) = param_1[0x133c];
      *(undefined4 *)(param_1[0x4b95] + 0x2b0) = param_1[0x133c];
    }
    if (param_1[0x133d] != 0) {
      *(undefined4 *)(param_1[0x4b95] + 0x1dc) = param_1[0x133d];
      *(undefined4 *)(param_1[0x4b95] + 0x2b4) = param_1[0x133d];
    }
    if (param_8 != 0) {
      *(int *)(param_1[0x4b95] + 0x1e4) = param_8;
      *(int *)(param_1[0x4b95] + 700) = param_8;
    }
    *(undefined4 *)(*(int *)(param_1[0x4b95] + 0x128) + 0x10) = 1;
    if (((param_9 == 0) || (param_1[0x20] == 0)) && (param_1[9] != 0)) {
      lVar5 = __ftol();
      iVar3 = mpegInSeekFrame(param_1,(uint)lVar5);
      if (iVar3 == 0) {
        uVar4 = param_1[0x1341];
        uVar1 = *(uint *)(param_1[0x4b95] + 0x88);
        iVar3 = param_1[0x1342];
        iVar2 = *(int *)(param_1[0x4b95] + 0x8c);
        *(uint *)param_4 = uVar1 - uVar4;
        *(uint *)((int)param_4 + 4) = (iVar2 - iVar3) - (uint)(uVar1 < uVar4);
        iVar3 = param_1[0x4b95];
        *param_5 = *(undefined4 *)(iVar3 + 0x90);
        param_5[1] = *(undefined4 *)(iVar3 + 0x94);
        uVar4 = param_1[0x1341];
        uVar1 = *(uint *)(param_1[0x4b95] + 0x98);
        iVar3 = *(int *)(param_1[0x4b95] + 0x9c);
        iVar2 = param_1[0x1342];
        *(uint *)param_6 = uVar1 - uVar4;
        *(uint *)((int)param_6 + 4) = (iVar3 - iVar2) - (uint)(uVar1 < uVar4);
        iVar3 = param_1[0x4b95];
        *param_7 = *(undefined4 *)(iVar3 + 0xa0);
        param_7[1] = *(undefined4 *)(iVar3 + 0xa4);
        return 0;
      }
    }
    else {
      lVar5 = __ftol();
      uVar4 = mpegInSeekSample((int)param_1,(undefined4 *)0x0,(uint)lVar5,0);
      if (uVar4 == 0) {
        lVar5 = __ftol();
        *param_4 = lVar5;
        iVar3 = param_1[0x4b95];
        *param_5 = *(undefined4 *)(iVar3 + 0xc0);
        param_5[1] = *(undefined4 *)(iVar3 + 0xc4);
        lVar5 = __ftol();
        *param_6 = lVar5;
        iVar3 = param_1[0x4b95];
        *param_7 = *(undefined4 *)(iVar3 + 0xc0);
        param_7[1] = *(undefined4 *)(iVar3 + 0xc4);
        return 0;
      }
    }
  }
  return 1;
}


