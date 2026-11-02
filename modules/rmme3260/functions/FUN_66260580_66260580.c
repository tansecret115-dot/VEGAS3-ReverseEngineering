/* Module: rmme3260.dll
   Function: FUN_66260580
   Address: 66260580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66260580(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((((*param_2 == DAT_6626aa88) && (param_2[1] == DAT_6626aa8c)) && (param_2[2] == DAT_6626aa90))
     && (param_2[3] == DAT_6626aa94)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = FUN_66261cc0(*(int *)(param_1 + 0xc));
      *param_3 = uVar1;
      return 0;
    }
  }
  else if (((*param_2 == DAT_6626b0d8) && (param_2[1] == DAT_6626b0dc)) &&
          ((param_2[2] == DAT_6626b0e0 &&
           ((param_2[3] == DAT_6626b0e4 && (*(int *)(param_1 + 0x14) != 0)))))) {
    uVar1 = FUN_66261cc0(*(int *)(param_1 + 0x14));
    *param_3 = uVar1;
    return 0;
  }
  return 0x80004005;
}


