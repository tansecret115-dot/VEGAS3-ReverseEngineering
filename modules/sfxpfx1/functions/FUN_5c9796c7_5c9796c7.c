/* Module: sfxpfx1.dll
   Function: FUN_5c9796c7
   Address: 5c9796c7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5c9796c7(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x90) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x58))
                      (param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}


