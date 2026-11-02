/* Module: vidcap30.exe
   Function: _SfAudio_CopyChannelToChannel@20
   Address: 0053da90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudio_CopyChannelToChannel_20(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  
                    /* 0x13da90  225  _SfAudio_CopyChannelToChannel@20 */
  uVar3 = _SfAudio_GetSampleType_4(param_2);
  uVar2 = *(ushort *)(param_2 + 2);
  iVar4 = (int)((ulonglong)*(ushort *)(param_2 + 0xc) / (ulonglong)(longlong)(int)(uint)uVar2) *
          (uint)uVar2;
  if (uVar2 == 1) {
    return 0;
  }
  switch(uVar3) {
  case 0x10:
    if (0 < param_5) {
      do {
        *(undefined1 *)(param_1 + param_4) = *(undefined1 *)(param_1 + param_3);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_5) {
      do {
        *(undefined2 *)(param_1 + param_4 * 2) = *(undefined2 *)(param_1 + param_3 * 2);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_5) {
      do {
        puVar1 = (undefined2 *)(param_3 * 3 + param_1);
        puVar5 = (undefined2 *)(param_4 * 3 + param_1);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
        *puVar5 = *puVar1;
        *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar1 + 1);
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_5) {
      do {
        *(undefined4 *)(param_1 + param_4 * 4) = *(undefined4 *)(param_1 + param_3 * 4);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_5) {
      do {
        *(undefined4 *)(param_1 + param_4 * 4) = *(undefined4 *)(param_1 + param_3 * 4);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
  }
  return 0;
}


