/* Module: tokr3260.dll
   Function: tkInitEncoder
   Address: 680511f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 tkInitEncoder(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x11f0  10  tkInitEncoder */
  if ((((param_1 != (int *)0x0) && (param_2 == param_3 << 10)) && (0 < param_3)) &&
     ((param_3 < 3 && (param_5 != 0)))) {
    piVar3 = param_1;
    for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    iVar2 = ((param_6 * param_5 * param_3) / param_2 + 500) / 1000;
    if (iVar2 == 0xbb) {
      iVar2 = 0xbc;
    }
    else if (iVar2 == 0xd1) {
      iVar2 = 0xd2;
    }
    else if (iVar2 == 0x109) {
      iVar2 = 0x108;
    }
    else if (iVar2 == 0x161) {
      iVar2 = 0x160;
    }
    *param_1 = param_3;
    param_1[1] = 0;
    param_1[2] = param_2;
    pvVar1 = malloc(0x800);
    param_1[3] = (int)pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x8007000e;
    }
    param_1[4] = 0;
    if (param_3 == 1) {
      pvVar1 = malloc(param_2 * 4);
      param_1[4] = (int)pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0x8007000e;
      }
    }
    iVar2 = FUN_68052d30(iVar2,param_4,(int)(param_1 + 5));
    if (((iVar2 == 0) && (param_6 == param_1[6])) && (param_5 == param_1[0xc] << 3)) {
      return 0;
    }
  }
  return 0x80040245;
}


