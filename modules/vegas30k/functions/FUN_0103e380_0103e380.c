/* Module: vegas30k.dll
   Function: FUN_0103e380
   Address: 0103e380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103e380(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*(int *)(param_1 + 0x3a4) == 1) {
      iVar2 = FUN_011384b0(param_2);
      if ((iVar2 != 0) && (param_3 != (undefined4 *)0x0)) {
        if (*(int *)(param_1 + 0x3a0) != 0) {
          puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x39c) + 0x218);
          (**(code **)*puVar1)(puVar1,&DAT_011d9c20,param_3);
          return 0;
        }
        *param_3 = 0;
        return 0;
      }
    }
    else {
      iVar2 = FUN_01139350(param_2);
      if ((iVar2 != 0) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 0;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


