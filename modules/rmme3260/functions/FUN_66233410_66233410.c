/* Module: rmme3260.dll
   Function: FUN_66233410
   Address: 66233410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66233410(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  void *this;
  int *piVar1;
  
  if ((((*param_2 == DAT_6626abe8) && (param_2[1] == DAT_6626abec)) && (param_2[2] == DAT_6626abf0))
     && (param_2[3] == DAT_6626abf4)) {
    this = operator_new(0x11d);
    if (this != (void *)0x0) {
      piVar1 = FUN_66234b90(this,*(int **)(param_1 + 8),param_4);
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


