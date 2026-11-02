/* Module: tokr3260.dll
   Function: tkInitDecoder
   Address: 68051490
   Source: Ghidra pseudocode (Stage 10 batch) */


int tkInitDecoder(int *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
                    /* 0x1490  9  tkInitDecoder */
  if (param_1 != (int *)0x0) {
    if (((param_2 == param_3 << 10) && (0 < param_3)) && (param_3 < 3)) {
      uVar3 = (int)param_5 >> 0x1f;
      if (((param_5 ^ uVar3) - uVar3 & 7 ^ uVar3) == uVar3) {
        iVar4 = ((int)(param_6 * param_5 * param_3) / param_2 + 500) / 1000;
        if (iVar4 == 0xbb) {
          iVar4 = 0xbc;
        }
        else if (iVar4 == 0xd1) {
          iVar4 = 0xd2;
        }
        else if (iVar4 == 0x109) {
          iVar4 = 0x108;
        }
        else if (iVar4 == 0x161) {
          iVar4 = 0x160;
        }
        *param_1 = param_3;
        param_1[1] = 0;
        param_1[2] = (int)(param_5 + (uVar3 & 7)) >> 3;
        param_1[3] = param_3 * param_2 * 2;
        param_1[5] = 0;
        if (param_3 == 1) {
          pvVar1 = malloc(param_2 * 4);
          param_1[5] = (int)pvVar1;
          if (pvVar1 == (void *)0x0) {
            return -0x7ff8fff2;
          }
        }
        piVar5 = param_1 + 6;
        for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        iVar4 = FUN_68052940(iVar4,param_4,param_1 + 6);
        if (((iVar4 == 0) && (param_6 == param_1[7])) && (param_5 == param_1[0xd] * 8)) {
          pvVar1 = calloc(1,param_1[0xd]);
          param_1[4] = (int)pvVar1;
          return (-(uint)(pvVar1 != (void *)0x0) & 0x7ff8fff2) + 0x8007000e;
        }
      }
    }
  }
  return -0x7ff8ffa9;
}


