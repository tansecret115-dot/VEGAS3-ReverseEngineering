/* Module: vegas30k.dll
   Function: FUN_0103e6d0
   Address: 0103e6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103e6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0x39c);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x388) + 8))(*(int **)(param_1 + 0x388));
      *(undefined4 *)(param_1 + 0x388) = 0;
      for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
        if (*(undefined4 **)(iVar1 + 0x224) == (undefined4 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = **(undefined4 **)(iVar1 + 0x224);
        }
        FUN_01137720(uVar2);
      }
      (**(code **)(**(int **)(param_1 + 0x390) + 8))(*(int **)(param_1 + 0x390));
      *(undefined4 *)(param_1 + 0x390) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    FUN_01136190();
    if (*(code **)(param_1 + 0x3ac) != (code *)0x0) {
      (**(code **)(param_1 + 0x3ac))(param_1,2,*(undefined4 *)(param_1 + 0x3b0),0,0,0,0);
    }
    return 0;
  }
  FUN_01136190();
  return 0;
}


