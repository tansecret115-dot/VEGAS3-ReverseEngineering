/* Module: encn3260.dll
   Function: FUN_6649c890
   Address: 6649c890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649c890(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  void *this;
  int *piVar1;
  
  if ((((*param_2 == DAT_664dcda0) && (param_2[1] == DAT_664dcda4)) && (param_2[2] == DAT_664dcda8))
     && (param_2[3] == DAT_664dcdac)) {
    this = operator_new(0x11d);
    if (this != (void *)0x0) {
      piVar1 = FUN_6649eeb0(this,*(int **)(param_1 + 8),param_4);
      *param_3 = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      return 0;
    }
    *param_3 = 0;
    (**(code **)(iRam00000000 + 4))(0);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


