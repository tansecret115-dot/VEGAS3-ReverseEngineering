/* Module: sfs4rw.dll
   Function: FUN_00408770
   Address: 00408770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408770(int param_1,int param_2,int param_3)

{
  void *this;
  int iVar1;
  
  iVar1 = param_1;
  this = DAT_004a8128;
  *(undefined4 *)(param_1 + 0x234) = 0;
  if (param_2 == -2) {
    return 0;
  }
  if ((param_2 != -1) && (FUN_00411410(this,(byte *)&param_2,&param_1,param_2), param_1 == 0)) {
    return 0;
  }
  if (param_3 != -2) {
    if (param_3 == -1) {
      return 1;
    }
    FUN_00411580(this,(byte *)&param_2,&param_1,param_3);
    FUN_00411620(this,1);
    if (param_1 == 0) {
      return 1;
    }
  }
  *(undefined4 *)(iVar1 + 0x234) = 1;
  return 1;
}


