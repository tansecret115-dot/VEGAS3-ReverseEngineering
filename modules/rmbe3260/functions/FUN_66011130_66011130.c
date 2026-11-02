/* Module: rmbe3260.dll
   Function: FUN_66011130
   Address: 66011130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66011130(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_66065988 == *param_2) && (DAT_6606598c == param_2[1])) && (DAT_66065990 == param_2[2]))
     && (DAT_66065994 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x23);
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  uVar1 = FUN_66014d40(param_1,param_2,param_3);
  return uVar1;
}


