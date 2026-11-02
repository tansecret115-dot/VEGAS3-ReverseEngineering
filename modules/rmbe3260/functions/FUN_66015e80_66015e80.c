/* Module: rmbe3260.dll
   Function: FUN_66015e80
   Address: 66015e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66015e80(int *param_1)

{
  int *piVar1;
  
  param_1[0x2b] = 0;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
    param_1[0x22] = 0;
  }
  if (param_1[0x21] != 0) {
    piVar1 = FUN_6602f6d0(FUN_66015ab0,param_1);
    param_1[0x22] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      return 0x80004005;
    }
  }
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
    param_1[0x24] = 0;
  }
  if (param_1[0x23] != 0) {
    piVar1 = FUN_6602f640((char *)param_1[0x12]);
    param_1[0x24] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      return 0x80004005;
    }
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1);
  return 0;
}


