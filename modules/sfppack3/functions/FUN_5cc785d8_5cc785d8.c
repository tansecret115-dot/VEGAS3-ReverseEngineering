/* Module: sfppack3.dll
   Function: FUN_5cc785d8
   Address: 5cc785d8
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc785d8(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_8;
  
  local_8 = this;
  local_8 = (void *)FUN_5cc7849a(param_1);
  do {
    if (local_8 == (void *)0x0) {
      return 1;
    }
    uVar1 = FUN_5cc784a5((int *)&local_8);
    iVar2 = FUN_5cc78555(this,uVar1);
  } while (iVar2 != 0);
  return 0;
}


