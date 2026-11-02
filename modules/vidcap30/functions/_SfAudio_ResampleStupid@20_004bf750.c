/* Module: vidcap30.exe
   Function: _SfAudio_ResampleStupid@20
   Address: 004bf750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfAudio_ResampleStupid_20
              (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0xbf750  256  _SfAudio_ResampleStupid@20 */
  if (param_5 == param_3) {
    if (param_2 != param_4) {
      iVar1 = FUN_004be0d0(*param_1);
      uVar2 = iVar1 * param_1[1] * param_3;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_2 = *param_4;
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
    return param_3;
  }
  *(double *)(param_1 + 6) = (double)param_3 / (double)param_5;
  *(double *)(param_1 + 10) = _DAT_00587ad0 / ((double)param_3 / (double)param_5);
  switch(*param_1) {
  case 0x10:
    iVar1 = FUN_004c3d00(param_2,param_3,param_4,param_5,param_1);
    return iVar1;
  case 0x11:
    iVar1 = FUN_004c40b0(param_2,param_3,param_4,param_5,param_1);
    return iVar1;
  case 0x12:
    iVar1 = FUN_004c4430(param_2,param_3,param_4,param_5,param_1);
    return iVar1;
  case 0x13:
    iVar1 = FUN_004c4910(param_2,param_3,param_4,param_5,param_1);
    return iVar1;
  default:
    return -1;
  case 0x20:
    iVar1 = FUN_004c4c80(param_2,param_3,param_4,param_5,param_1,param_1[0x757] != 0);
    return iVar1;
  case 0x21:
    iVar1 = FUN_004c4fc0(param_2,param_3,param_4,param_5,param_1,param_1[0x757] != 0);
    return iVar1;
  case 0x30:
    iVar1 = FUN_004c4910(param_2,param_3,param_4,param_5,param_1);
    return iVar1;
  }
}


