/* Module: vegas30k.dll
   Function: _SfDibChannelOp@52
   Address: 0109de50
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibChannelOp_52(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                      int param_7,int param_8,int param_9,undefined4 param_10,int param_11,
                      code *param_12,undefined4 param_13)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x9de50  834  _SfDibChannelOp@52 */
  iVar6 = param_11;
  if (param_12 == (code *)0x0) {
    return -0x7fffbffd;
  }
  iVar2 = _SfDibPrepareCopy_52
                    (&param_4,&param_1,&param_9,&param_7,param_1,param_2,param_3,param_4,param_6,
                     param_7,param_8,param_9,param_11);
  if (-1 < iVar2) {
    iVar3 = _GetByteOffsetFromChannelEnum_8(param_5,iVar6);
    param_6 = iVar3;
    param_5 = _GetByteOffsetFromChannelEnum_8(param_10,iVar6);
    uVar1 = param_13;
    param_2 = 0;
    iVar4 = param_4;
    if (0 < param_1) {
      do {
        if (iVar6 == 4) {
          iVar6 = 0;
          if (0 < iVar4) {
            iVar5 = param_5 - param_6;
            do {
              (*param_12)(iVar3 + param_7,iVar5 + iVar3 + param_9,uVar1);
              iVar6 = iVar6 + 1;
              iVar3 = iVar3 + 4;
              iVar4 = param_4;
            } while (iVar6 < param_4);
          }
        }
        else {
          iVar6 = 0;
          if (0 < iVar4) {
            iVar5 = param_5 - param_6;
            do {
              (*param_12)(iVar3 + param_7,iVar3 + iVar5 + param_9,uVar1);
              iVar6 = iVar6 + 1;
              iVar3 = iVar3 + 0x10;
              iVar4 = param_4;
            } while (iVar6 < param_4);
          }
        }
        param_7 = param_7 + param_3;
        param_9 = param_9 + param_8;
        param_2 = param_2 + 1;
        iVar3 = param_6;
        iVar6 = param_11;
      } while (param_2 < param_1);
    }
    return iVar2;
  }
  return iVar2;
}


