/* Module: vegas30k.dll
   Function: FUN_0119aac0
   Address: 0119aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119aac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = 1;
  puVar4 = *(undefined4 **)(param_1 + 0x640);
  iVar3 = *(int *)(param_1 + 0x624) + 1;
  *(int *)(param_1 + 0x624) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x61c)) {
    *(undefined4 *)(param_1 + 0x628) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      do {
        iVar1 = (**(code **)(*(int *)*puVar4 + 0x174))(param_1,param_2,param_3);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + -1;
          return iVar1;
        }
        uVar2 = FUN_011aaf10(param_1);
        FUN_011aaee0(param_1,uVar2 | 0x20);
        puVar4 = (undefined4 *)puVar4[0xd];
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
      } while (puVar4 != (undefined4 *)0x0);
      return 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


