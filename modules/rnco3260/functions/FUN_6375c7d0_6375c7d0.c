/* Module: rnco3260.dll
   Function: FUN_6375c7d0
   Address: 6375c7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375c7d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,int param_8,int param_9,int param_10,undefined4 param_11,
            byte param_12,undefined4 param_13,int param_14,int param_15,undefined *param_16)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  iVar1 = param_15;
  local_c = param_6 + param_1;
  iVar2 = param_15 + param_8;
  param_15 = param_10;
  local_8 = param_1;
  iVar3 = iVar1 >> 1;
  param_1 = param_14 >> 1;
  param_10 = param_5;
  if (param_5 != 0) {
    iVar4 = param_8;
    param_8 = iVar2;
    if ((param_12 & 1) != 0) goto LAB_6375c95c;
    do {
      param_1 = param_1 - param_5;
      if (param_1 < 0) {
        param_1 = param_1 + param_14;
        param_10 = param_10 + -1;
        if (param_10 == 0) {
          param_10 = 1;
          goto LAB_6375c95c;
        }
        (*(code *)param_16)(local_8,local_c,param_2,param_4,iVar4,param_8,param_9,param_15,param_11,
                            param_13);
        iVar2 = param_6 * 2;
      }
      else {
        (*(code *)param_16)(local_8,&DAT_6378b758,param_2,param_4,iVar4,iVar4,param_9,param_15,
                            param_11,param_13);
        iVar2 = param_6;
      }
      local_8 = local_8 + iVar2;
      local_c = local_c + iVar2;
      param_8 = param_8 + iVar1 * 2;
      iVar4 = iVar4 + iVar1 * 2;
      iVar2 = param_1 - param_5;
      while( true ) {
        param_15 = param_15 + iVar3;
        param_9 = param_9 + iVar3;
        if (iVar2 < 0) break;
        iVar4 = iVar4 + iVar1;
        param_8 = param_8 + iVar1;
        iVar2 = iVar2 - param_5;
        if (iVar2 < 0) {
          do {
            param_1 = iVar2 + param_14;
            param_10 = param_10 + -1;
            if (param_10 == 0) {
              return;
            }
LAB_6375c95c:
            (*(code *)param_16)(local_8,&DAT_6378b758,param_2,param_4,iVar4,iVar4,param_9,param_15,
                                param_11,param_13);
            local_c = local_c + param_6;
            local_8 = local_8 + param_6;
            iVar2 = param_1 - param_5;
            while( true ) {
              param_15 = param_15 + iVar3;
              iVar4 = iVar4 + iVar1;
              param_9 = param_9 + iVar3;
              param_8 = param_8 + iVar1;
              if (iVar2 < 0) goto LAB_6375c9f7;
              iVar4 = iVar4 + iVar1;
              param_8 = param_8 + iVar1;
              iVar2 = iVar2 - param_5;
              if (iVar2 < 0) break;
              iVar2 = iVar2 - param_5;
            }
          } while( true );
        }
        iVar4 = iVar4 + iVar1;
        param_8 = param_8 + iVar1;
        iVar2 = iVar2 - param_5;
      }
LAB_6375c9f7:
      param_1 = iVar2 + param_14;
      param_10 = param_10 + -1;
    } while (param_10 != 0);
  }
  return;
}


