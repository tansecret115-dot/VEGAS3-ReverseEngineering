/* Module: vidcap30.exe
   Function: _SfAudio_MuteChannel@16
   Address: 0053dc00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudio_MuteChannel_16(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* 0x13dc00  239  _SfAudio_MuteChannel@16 */
  uVar2 = _SfAudio_GetSampleType_4(param_2);
  uVar1 = *(ushort *)(param_2 + 2);
  iVar3 = (int)((ulonglong)*(ushort *)(param_2 + 0xc) / (ulonglong)(longlong)(int)(uint)uVar1) *
          (uint)uVar1;
  if (uVar1 == 1) {
    return 0;
  }
  switch(uVar2) {
  case 0x10:
    if (0 < param_4) {
      do {
        *(undefined1 *)(param_1 + param_3) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_1 + param_3 * 2) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 * 3 + param_1) = 0;
        *(undefined1 *)(param_3 * 3 + 2 + param_1) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_1 + param_3 * 4) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_1 + param_3 * 4) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
  }
  return 0;
}


