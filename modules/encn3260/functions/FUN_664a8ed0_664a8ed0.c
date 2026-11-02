/* Module: encn3260.dll
   Function: FUN_664a8ed0
   Address: 664a8ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a8ed0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x30))(iVar1 + 0x1c,param_2);
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  FUN_664aa6d0((void *)(param_1 + -0x1c),0,0);
  return 0;
}


