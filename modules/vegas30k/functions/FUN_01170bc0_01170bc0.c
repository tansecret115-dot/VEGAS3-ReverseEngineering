/* Module: vegas30k.dll
   Function: FUN_01170bc0
   Address: 01170bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1
FUN_01170bc0(undefined4 param_1,short *param_2,int param_3,int *param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_3 = *param_2 - param_3;
  iVar2 = param_3;
  if (param_3 < 0) {
    iVar2 = -param_3;
    param_3 = param_3 + -1;
  }
  iVar4 = 0;
  for (; iVar2 != 0; iVar2 = iVar2 >> 1) {
    iVar4 = iVar4 + 1;
  }
  cVar1 = FUN_01170d10(param_1,*(undefined4 *)((int)param_4 + iVar4 * 4),
                       (int)*(char *)(iVar4 + 0x400 + (int)param_4));
  if (cVar1 == '\0') {
    return 0;
  }
  if ((iVar4 != 0) && (cVar1 = FUN_01170d10(param_1,param_3,iVar4), cVar1 == '\0')) {
    return 0;
  }
  iVar2 = 0;
  param_4 = &DAT_011e9bf4;
  do {
    param_3 = (int)param_2[*param_4];
    if (param_3 == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      for (; 0xf < iVar2; iVar2 = iVar2 + -0x10) {
        cVar1 = FUN_01170d10(param_1,param_5[0xf0],(int)*(char *)(param_5 + 0x13c));
        if (cVar1 == '\0') {
          return 0;
        }
      }
      iVar4 = param_3;
      if (param_3 < 0) {
        iVar4 = -param_3;
        param_3 = param_3 + -1;
      }
      iVar3 = 1;
      while (iVar4 = iVar4 >> 1, iVar4 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 * 0x10 + iVar3;
      cVar1 = FUN_01170d10(param_1,param_5[iVar2],(int)*(char *)(iVar2 + 0x400 + (int)param_5));
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_01170d10(param_1,param_3,iVar3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = 0;
    }
    param_4 = param_4 + 1;
    if (0x11e9cef < (int)param_4) {
      if ((0 < iVar2) &&
         (cVar1 = FUN_01170d10(param_1,*param_5,(int)*(char *)(param_5 + 0x100)), cVar1 == '\0')) {
        return 0;
      }
      return 1;
    }
  } while( true );
}


