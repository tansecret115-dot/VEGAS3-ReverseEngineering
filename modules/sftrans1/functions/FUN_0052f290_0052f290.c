/* Module: sftrans1.dll
   Function: FUN_0052f290
   Address: 0052f290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0052f290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0052f1c0(param_1 + 0x4f0,param_5);
  puVar2 = (undefined4 *)(param_1 + 0x500);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x484) = 1;
  FUN_0052f2e0(param_2,param_3,param_4);
  return;
}


