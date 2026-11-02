/* Module: rmme3260.dll
   Function: FUN_6621c0d0
   Address: 6621c0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6621c0d0(void *this,undefined1 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return 0x80070057;
  }
  uVar1 = FUN_6621c830((int)this + 8);
  if (param_2 < uVar1) {
    return 0x80070057;
  }
  FUN_6621c130((void *)((int)this + 8),param_1,&local_8);
  return 0;
}


