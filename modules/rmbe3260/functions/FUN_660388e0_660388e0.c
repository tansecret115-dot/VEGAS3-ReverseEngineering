/* Module: rmbe3260.dll
   Function: FUN_660388e0
   Address: 660388e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660388e0(void *this,undefined1 *param_1,uint param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return 0x80070057;
  }
  uVar1 = FUN_660390f0((int)this + 8);
  if (param_2 < uVar1) {
    return 0x80070057;
  }
  FUN_66038940((void *)((int)this + 8),param_1,&local_8);
  return 0;
}


