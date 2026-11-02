/* Module: sftrans1.dll
   Function: FUN_0045fdc0
   Address: 0045fdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0045fdc0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_3);
    uVar2 = FUN_0045fbe0(param_2,uVar2,param_3);
    return uVar2;
  }
  return 0x8007000e;
}


