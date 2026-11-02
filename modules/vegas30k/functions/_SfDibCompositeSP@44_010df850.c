/* Module: vegas30k.dll
   Function: _SfDibCompositeSP@44
   Address: 010df850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfDibCompositeSP_44
          (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int *param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  uint uVar1;
  int iVar2;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_78 [120];
  
                    /* 0xdf850  837  _SfDibCompositeSP@44 */
  if (param_10 == 0) {
    return &DAT_80070057;
  }
  uVar1 = *(uint *)(param_10 + 4);
  if ((uVar1 != 0xffffffff) && (((int)uVar1 < 0 || (0xc < uVar1)))) {
    return (undefined1 *)0x80004001;
  }
  local_80 = param_6[2] - *param_6;
  local_7c = param_6[3] - param_6[1];
  local_88 = param_2[2] - *param_2;
  local_84 = param_2[3] - param_2[1];
  iVar2 = _SfPrepareSubpixelParam_36
                    (local_78,param_1,&local_88,param_3,param_4,param_5,&local_80,param_7,param_8);
  if (iVar2 != 0) {
    if (*(int *)(param_10 + 4) == -1) {
      if (param_9 == 4) {
        FUN_010de9b0(local_78,param_10,4);
        return (undefined1 *)0x0;
      }
    }
    else if (param_9 == 4) {
      (*(code *)(&PTR_FUN_011e2e98)[*(int *)(param_10 + 4)])(local_78,param_10,4);
    }
  }
  return (undefined1 *)0x0;
}


