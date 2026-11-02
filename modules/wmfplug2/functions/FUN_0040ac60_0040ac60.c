/* Module: wmfplug2.dll
   Function: FUN_0040ac60
   Address: 0040ac60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0040ac60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)
                      (puVar1,param_1,param_2,param_3,
                       param_4 / (int)(uint)*(ushort *)(*(int *)((int)this + 0x18) + 0xc));
    return uVar2;
  }
  return 0;
}


