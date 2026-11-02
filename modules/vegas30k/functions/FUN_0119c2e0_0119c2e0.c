/* Module: vegas30k.dll
   Function: FUN_0119c2e0
   Address: 0119c2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119c2e0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = 1;
  puVar3 = *(undefined4 **)(param_1 + 0x640);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      iVar1 = (**(code **)(*(int *)*puVar3 + 0x15c))(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      puVar3 = (undefined4 *)puVar3[0xd];
    } while (puVar3 != (undefined4 *)0x0);
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffffffef);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
    iVar1 = 0;
  }
  return iVar1;
}


