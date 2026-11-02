/* Module: sfcd.cdd
   Function: cdrInterfaceProc
   Address: 00401030
   Source: Ghidra pseudocode (Stage 10 batch) */


int cdrInterfaceProc(undefined *param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined **ppuVar3;
  
                    /* 0x1030  1  cdrInterfaceProc */
  if (0x19 < param_2) {
    return -0x7ffb1f3f;
  }
  if (param_2 == 0) {
    *param_3 = 0x12;
    return 0;
  }
  if (param_2 == 0xe) {
    param_2 = 0;
    ppuVar3 = &PTR_PTR_0043c010;
    do {
      if (*(code **)(*ppuVar3 + 0x38) != (code *)0x0) {
        iVar2 = (**(code **)(*ppuVar3 + 0x38))(param_1,param_3,param_4);
        if (-1 < iVar2) {
          return param_2;
        }
      }
      ppuVar3 = ppuVar3 + 1;
      param_2 = param_2 + 1;
    } while (ppuVar3 < &DAT_0043c048);
    return -0x7ffb1f3f;
  }
  iVar2 = FUN_00401000(param_1);
  if (iVar2 == 0) {
    return -0x7ffb1f40;
  }
  pcVar1 = *(code **)(iVar2 + param_2 * 4);
  if (pcVar1 == (code *)0x0) {
    return -0x7ffb1f3f;
  }
  iVar2 = (*pcVar1)(param_1,param_3,param_4);
  return iVar2;
}


