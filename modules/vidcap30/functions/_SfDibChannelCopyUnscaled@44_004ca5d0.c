/* Module: vidcap30.exe
   Function: _SfDibChannelCopyUnscaled@44
   Address: 004ca5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibChannelCopyUnscaled_44
              (undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
              int param_6,int param_7,int param_8,int param_9,undefined4 param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0xca5d0  299  _SfDibChannelCopyUnscaled@44 */
  iVar6 = param_11;
  iVar1 = _SfDibPrepareCopy_52
                    (&param_6,&param_4,&param_9,&param_7,param_1,param_2,param_3,param_4,param_6,
                     param_7,param_8,param_9,param_11);
  if (-1 < iVar1) {
    iVar2 = _GetByteOffsetFromChannelEnum_8(param_5,iVar6);
    iVar3 = _GetByteOffsetFromChannelEnum_8(param_10,iVar6);
    iVar4 = 0;
    if (0 < param_4) {
      do {
        if (iVar6 == 4) {
          iVar6 = 0;
          if (0 < param_6) {
            iVar5 = iVar2;
            do {
              iVar6 = iVar6 + 1;
              *(undefined1 *)(iVar5 + param_7) = *(undefined1 *)((iVar3 - iVar2) + iVar5 + param_9);
              iVar5 = iVar5 + 4;
            } while (iVar6 < param_6);
          }
        }
        else {
          iVar6 = 0;
          if (0 < param_6) {
            iVar5 = iVar2;
            do {
              iVar6 = iVar6 + 1;
              *(undefined4 *)(iVar5 + param_7) = *(undefined4 *)(iVar5 + (iVar3 - iVar2) + param_9);
              iVar5 = iVar5 + 0x10;
            } while (iVar6 < param_6);
          }
        }
        param_9 = param_9 + param_8;
        param_7 = param_7 + param_3;
        iVar4 = iVar4 + 1;
        iVar6 = param_11;
      } while (iVar4 < param_4);
    }
    return iVar1;
  }
  return iVar1;
}


