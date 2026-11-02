/* Module: rmme3260.dll
   Function: FUN_66206440
   Address: 66206440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66206440(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = (**(code **)*param_1)(param_1,&DAT_6626a7d8,(int)this + 0x5a);
  }
  return uVar1;
}


