/* Module: rmme3260.dll
   Function: FUN_66260510
   Address: 66260510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66260510(int param_1,int param_2,undefined4 *param_3)

{
  void *this;
  undefined4 uVar1;
  
  *param_3 = 0;
  if (*(int **)(param_1 + 0x30) == (int *)0x0) {
    return 0x80004005;
  }
  this = (void *)FUN_6625ff00(**(int **)(param_1 + 0x30),param_2);
  if (this == (void *)0x0) {
    return 0x80004005;
  }
  uVar1 = FUN_66263580(this,param_3);
  return uVar1;
}


