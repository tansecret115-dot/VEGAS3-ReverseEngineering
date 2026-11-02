/* Module: encn3260.dll
   Function: FUN_664cc5f0
   Address: 664cc5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664cc5f0(int param_1,int param_2,undefined4 *param_3)

{
  void *this;
  undefined4 uVar1;
  
  *param_3 = 0;
  if (*(int **)(param_1 + 0x30) == (int *)0x0) {
    return 0x80004005;
  }
  this = (void *)FUN_664cbff0(**(int **)(param_1 + 0x30),param_2);
  if (this == (void *)0x0) {
    return 0x80004005;
  }
  uVar1 = FUN_664cf5e0(this,param_3);
  return uVar1;
}


