/* Module: vegas30.exe
   Function: FUN_0059c750
   Address: 0059c750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0059c750(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10,
                undefined4 param_11,undefined4 param_12,int param_13,undefined4 param_14)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if ((*(int *)(param_4 + 0x1c) <= param_6) &&
     ((*(int *)(param_4 + 0x1c) < param_6 || (*(uint *)(param_4 + 0x18) <= param_5)))) {
    iVar1 = *(int *)(param_4 + 0x100);
    iVar3 = param_5 - *(int *)(param_4 + 0x18);
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
    if (iVar1 != 0) {
      iVar2 = FUN_0059c0d0(param_1,param_2,iVar3,param_3,param_4,param_5,param_6,param_7,param_8,
                           iVar2,param_10,param_11,param_12,param_13,param_14);
      return iVar2;
    }
    if (param_13 == 0) {
      _SfAudio_FillSilence_12(param_1,(uint)*(ushort *)(param_1 + 0xc) * param_3 + param_2,iVar2);
    }
  }
  return iVar2;
}


