/* Module: vegas30k.dll
   Function: FUN_0118e3d0
   Address: 0118e3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118e3d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0xc) & 2) != 0) && (*(int *)(param_1 + 0xac) != 0)) {
    uVar3 = FUN_0118e3a0(param_2,param_3);
    uVar2 = (uint)uVar3 / 6;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x48))
                      (*(int **)(param_1 + 0x18),((uVar2 & 0x3f80) << 1 | uVar2 & 0x7f) << 8 | 0xf2)
    ;
    uVar3 = FUN_0118e360(uVar3);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  return uVar1;
}


