/* Module: encn3260.dll
   Function: FUN_664cc660
   Address: 664cc660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664cc660(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((((*param_2 == DAT_664dced0) && (param_2[1] == DAT_664dced4)) && (param_2[2] == DAT_664dced8))
     && (param_2[3] == DAT_664dcedc)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = FUN_664cdc80(*(int *)(param_1 + 0xc));
      *param_3 = uVar1;
      return 0;
    }
  }
  else if (((*param_2 == DAT_664dd960) && (param_2[1] == DAT_664dd964)) &&
          ((param_2[2] == DAT_664dd968 &&
           ((param_2[3] == DAT_664dd96c && (*(int *)(param_1 + 0x14) != 0)))))) {
    uVar1 = FUN_664cdc80(*(int *)(param_1 + 0x14));
    *param_3 = uVar1;
    return 0;
  }
  return 0x80004005;
}


