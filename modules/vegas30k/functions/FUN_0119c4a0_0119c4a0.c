/* Module: vegas30k.dll
   Function: FUN_0119c4a0
   Address: 0119c4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119c4a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 1;
  puVar3 = *(undefined4 **)(param_1 + 0x638);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      if (((puVar3[9] != 0) || (*(int *)(param_1 + 0x24) != 1)) &&
         (iVar2 = (**(code **)(*(int *)*puVar3 + 0x15c))(param_1), iVar2 != 0)) {
        return iVar2;
      }
      puVar3 = (undefined4 *)puVar3[0x19];
    } while (puVar3 != (undefined4 *)0x0);
    if (iVar2 == 0) {
      uVar1 = FUN_011aaf10(param_1);
      FUN_011aaee0(param_1,uVar1 & 0xffffffef);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
    }
  }
  return iVar2;
}


