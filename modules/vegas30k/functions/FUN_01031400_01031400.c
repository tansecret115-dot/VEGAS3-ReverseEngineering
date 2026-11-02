/* Module: vegas30k.dll
   Function: FUN_01031400
   Address: 01031400
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01031400(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  int local_4;
  
  iVar1 = param_3;
  if (param_1 < 1) {
    return param_3;
  }
  local_8 = param_2;
  param_2 = param_4;
  local_4 = param_1;
  do {
    if (iVar1 < param_5) {
      param_3 = 0;
      iVar2 = param_5 / 2;
      puVar3 = local_8;
      puVar4 = param_2;
      if (0 < param_5) {
        param_4 = (undefined4 *)param_5;
        do {
          iVar2 = iVar2 - iVar1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + param_5;
            *puVar3 = *puVar4;
            puVar3 = puVar3 + param_1;
            param_3 = param_3 + 1;
          }
          puVar4 = puVar4 + param_1;
          param_4 = (undefined4 *)((int)param_4 + -1);
        } while (param_4 != (undefined4 *)0x0);
      }
      if (param_3 < iVar1) {
        param_3 = iVar1 - param_3;
        do {
          *puVar3 = puVar4[-param_1];
          puVar3 = puVar3 + param_1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else {
      iVar2 = 0;
      param_3 = iVar1 / 2;
      param_4 = (undefined4 *)0x0;
      puVar3 = param_2 + (param_5 + -1) * param_1;
      puVar4 = local_8 + (iVar1 + -1) * param_1;
      if (0 < param_5) {
        do {
          *puVar4 = *puVar3;
          puVar4 = puVar4 + -param_1;
          while (iVar2 = iVar2 + 1, iVar2 < iVar1) {
            param_3 = param_3 - param_5;
            if (param_3 < 0) goto LAB_01031505;
            *puVar4 = *puVar3;
            puVar4 = puVar4 + -param_1;
          }
          param_4 = (undefined4 *)param_5;
LAB_01031505:
          puVar3 = puVar3 + -param_1;
          param_3 = param_3 + iVar1;
          param_4 = (undefined4 *)((int)param_4 + 1);
        } while ((int)param_4 < param_5);
      }
      if (iVar2 < iVar1) {
        iVar2 = iVar1 - iVar2;
        do {
          *puVar4 = puVar3[param_1];
          puVar4 = puVar4 + -param_1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    param_2 = param_2 + 1;
    local_8 = local_8 + 1;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      return iVar1;
    }
  } while( true );
}


