/* Module: vegas30k.dll
   Function: _SfAudio_SwapStereoChannels@12
   Address: 010b9300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudio_SwapStereoChannels_12(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  
                    /* 0xb9300  777  _SfAudio_SwapStereoChannels@12 */
  uVar4 = _SfAudio_GetSampleType_4(param_2);
  uVar2 = *(ushort *)(param_2 + 2);
  iVar5 = (int)((ulonglong)*(ushort *)(param_2 + 0xc) / (ulonglong)(longlong)(int)(uint)uVar2) *
          (uint)uVar2;
  if (uVar2 == 1) {
    return 0;
  }
  switch(uVar4) {
  case 0x10:
    if (0 < param_3) {
      do {
        uVar1 = *(undefined1 *)param_1;
        *(undefined1 *)param_1 = *(undefined1 *)((int)param_1 + 1);
        *(undefined1 *)((int)param_1 + 1) = uVar1;
        param_1 = (undefined4 *)((int)param_1 + iVar5);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_3) {
      do {
        uVar3 = *(undefined2 *)param_1;
        *(undefined2 *)param_1 = *(undefined2 *)((int)param_1 + 2);
        *(undefined2 *)((int)param_1 + 2) = uVar3;
        param_1 = (undefined4 *)((int)param_1 + iVar5);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_3) {
      param_2 = param_3;
      do {
        uVar3 = *(undefined2 *)param_1;
        uVar1 = *(undefined1 *)((int)param_1 + 2);
        *(undefined2 *)param_1 = *(undefined2 *)((int)param_1 + 3);
        *(undefined2 *)((int)param_1 + 3) = uVar3;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_1 + 5);
        *(undefined1 *)((int)param_1 + 5) = uVar1;
        param_2 = param_2 + -1;
        param_1 = (undefined4 *)((int)param_1 + iVar5);
      } while (param_2 != 0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_3) {
      do {
        uVar4 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = uVar4;
        param_1 = (undefined4 *)((int)param_1 + iVar5);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_3) {
      do {
        uVar4 = param_1[1];
        param_1[1] = *param_1;
        *param_1 = uVar4;
        param_1 = (undefined4 *)((int)param_1 + iVar5);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  return 0;
}


