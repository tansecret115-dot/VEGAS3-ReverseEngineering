/* Module: vidcap30.exe
   Function: _SfDibChannelInPlaceOp@32
   Address: 004c9c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibChannelInPlaceOp_32
              (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,code *param_7
              ,undefined4 param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
                    /* 0xc9c40  300  _SfDibChannelInPlaceOp@32 */
  iVar5 = param_5;
  iVar3 = _SfDibPrepareSet_32(&param_2,&local_4,&param_4,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar3) {
    param_6 = _GetByteOffsetFromChannelEnum_8(param_6,iVar5);
    uVar2 = param_8;
    pcVar1 = param_7;
    param_1 = 0;
    iVar3 = param_2;
    if (0 < local_4) {
      do {
        if (iVar5 == 4) {
          iVar4 = 0;
          iVar5 = param_6;
          if (0 < iVar3) {
            do {
              (*pcVar1)(iVar5 + param_4,uVar2);
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + 4;
              iVar3 = param_2;
            } while (iVar4 < param_2);
          }
        }
        else {
          iVar4 = 0;
          iVar5 = param_6;
          if (0 < iVar3) {
            do {
              (*pcVar1)(iVar5 + param_4,uVar2);
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + 0x10;
              iVar3 = param_2;
            } while (iVar4 < param_2);
          }
        }
        param_4 = param_4 + param_3;
        param_1 = param_1 + 1;
        iVar5 = param_5;
      } while (param_1 < local_4);
    }
    iVar3 = 0;
  }
  return iVar3;
}


