/* Module: vegas30k.dll
   Function: _SfDibCustomBlend@44
   Address: 0109da60
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibCustomBlend_44
              (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6
              ,int param_7,int param_8,int param_9,code *param_10,undefined4 param_11)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x9da60  845  _SfDibCustomBlend@44 */
  pcVar1 = param_10;
  if (param_10 != (code *)0x0) {
    iVar3 = _SfDibPrepareCopy_52
                      (&param_6,&param_4,&param_10,&param_8,param_1,param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,param_9);
    uVar2 = param_11;
    if ((-1 < iVar3) && (param_5 = 0, iVar4 = param_6, 0 < param_4)) {
      do {
        if (param_9 == 4) {
          iVar5 = 0;
          if (0 < iVar4) {
            do {
              (*pcVar1)(param_8 + iVar5 * 4,param_10 + iVar5 * 4,uVar2);
              iVar5 = iVar5 + 1;
              iVar4 = param_6;
            } while (iVar5 < param_6);
          }
        }
        else {
          iVar5 = 0;
          if (0 < iVar4) {
            iVar6 = 0;
            do {
              (*pcVar1)(iVar6 + param_8,param_10 + iVar6,uVar2);
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + 0x10;
              iVar4 = param_6;
            } while (iVar5 < param_6);
          }
        }
        param_10 = param_10 + param_7;
        param_8 = param_8 + param_3;
        param_5 = param_5 + 1;
      } while (param_5 < param_4);
    }
    return iVar3;
  }
  return -0x7fffbffd;
}


