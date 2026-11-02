/* Module: sftrkfx1.dll
   Function: FUN_5cbf5c33
   Address: 5cbf5c33
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbf5c33(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_8;
  
  local_8 = this;
  local_8 = (void *)FUN_5cbf5af5(param_1);
  do {
    if (local_8 == (void *)0x0) {
      return 1;
    }
    uVar1 = FUN_5cbf5b00((int *)&local_8);
    iVar2 = FUN_5cbf5bb0(this,uVar1);
  } while (iVar2 != 0);
  return 0;
}


