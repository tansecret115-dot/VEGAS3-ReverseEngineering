/* Module: wmfplug2.dll
   Function: FUN_0040a860
   Address: 0040a860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0040a860(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)
                      (puVar1,param_1,param_2,*(undefined4 *)((int)this + 0x14),param_3,param_4,0,0)
    ;
    return uVar2;
  }
  return 0;
}


