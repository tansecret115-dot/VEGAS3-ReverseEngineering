/* Module: aviplug.dll
   Function: FUN_5f94bed0
   Address: 5f94bed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f94bed0(short *param_1,int param_2,int param_3)

{
  short *psVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  psVar1 = param_1;
  if (param_3 != 1) {
    if (*param_1 == -0x8000) {
      sVar3 = param_1[param_2];
      if (sVar3 == -0x8000) {
        sVar3 = 0;
      }
      *param_1 = sVar3;
    }
    iVar4 = param_2;
    if (0 < param_3 + -2) {
      param_1 = param_1 + param_2 * 2;
      iVar4 = (param_3 + -1) * param_2;
      iVar5 = param_2 * 2;
      param_3 = param_3 + -2;
      do {
        if (*(short *)(iVar5 + (int)psVar1) == -0x8000) {
          if (*param_1 == -0x8000) {
            uVar2 = 0;
          }
          else {
            uVar2 = (undefined2)
                    (((int)*(short *)(iVar5 + param_2 * -2 + (int)psVar1) + (int)*param_1) / 2);
          }
          *(undefined2 *)(iVar5 + (int)psVar1) = uVar2;
        }
        iVar5 = iVar5 + param_2 * 2;
        param_1 = param_1 + param_2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (psVar1[iVar4] == -0x8000) {
      psVar1[iVar4] = psVar1[iVar4 - param_2];
    }
    return;
  }
  *param_1 = 0;
  return;
}


