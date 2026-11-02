/* Module: vegas30k.dll
   Function: FUN_0119b910
   Address: 0119b910
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119b910(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x638);
  *(undefined4 *)(param_1 + 0x628) = 0;
  while( true ) {
    while( true ) {
      if (puVar1 == (undefined4 *)0x0) {
        return iVar3;
      }
      if ((puVar1[9] != 0) || (*(int *)(param_1 + 0x24) != 1)) break;
      puVar1 = (undefined4 *)puVar1[0x19];
    }
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x164))(param_1,param_2,param_3);
    if (iVar3 != 0) break;
    puVar1 = (undefined4 *)puVar1[0x19];
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 | 0x40);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
    iVar3 = 0;
  }
  return iVar3;
}


