/* Module: vegas30.exe
   Function: FUN_0059d020
   Address: 0059d020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0059d020(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10,
                undefined4 param_11,int param_12,undefined4 param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  param_2 = (uint)*(ushort *)(param_1 + 0xc) * param_3 + param_2;
  if ((*(int *)(param_4 + 0x1c) <= param_6) &&
     ((*(int *)(param_4 + 0x1c) < param_6 || (*(uint *)(param_4 + 0x18) <= param_5)))) {
    iVar3 = param_5 - *(int *)(param_4 + 0x18);
    iVar1 = *(int *)(param_4 + 0x100);
    iVar2 = *(int *)(param_4 + 0x2c) - iVar3;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (uint)*(ushort *)(param_1 + 0xc) * iVar3 + iVar1;
    }
    if (param_9 < iVar2) {
      iVar2 = param_9;
    }
    if (iVar1 == 0) {
      if (param_12 == 0) {
        _SfAudio_FillSilence_12(param_1,param_2,iVar2);
        return iVar2;
      }
    }
    else {
      local_10 = param_11;
      local_c = 0;
      local_14 = param_10;
      local_8 = 0;
      local_4 = 0;
      FUN_0059dc60(&local_14,local_24,param_13,0);
      FUN_0059aef0(param_2,iVar3,iVar2,local_24,param_12);
    }
  }
  return iVar2;
}


