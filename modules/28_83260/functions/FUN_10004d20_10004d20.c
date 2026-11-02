/* Module: 28_83260.dll
   Function: FUN_10004d20
   Address: 10004d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10004d20(undefined4 *param_1,undefined4 *param_2,short param_3,short param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 2) {
    if (0 < param_4) {
      iVar2 = (int)param_4;
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = uVar1;
        param_2[1] = 0;
        param_2 = param_2 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  else if (param_3 == 4) {
    if (0 < param_4) {
      iVar2 = (int)param_4;
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = uVar1;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2 = param_2 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  else if ((param_3 == 8) && (0 < param_4)) {
    iVar2 = (int)param_4;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2 = param_2 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}


