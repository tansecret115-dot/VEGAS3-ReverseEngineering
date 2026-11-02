/* Module: rmto3260.dll
   Function: FUN_66302a20
   Address: 66302a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66302a20(int param_1,undefined4 *param_2)

{
  void *this;
  int *piVar1;
  
  this = operator_new(0xc);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_66302ab0(this,*(char **)(param_1 + 8),*(byte **)(param_1 + 0x14),
                          *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  *param_2 = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


