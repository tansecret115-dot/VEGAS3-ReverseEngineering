/* Module: vegas30k.dll
   Function: FUN_011b28c0
   Address: 011b28c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b28c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 1;
  if ((*(undefined4 **)(param_1 + 0x19c) != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x19c);
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
  return uVar1;
}


