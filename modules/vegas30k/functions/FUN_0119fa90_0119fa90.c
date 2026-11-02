/* Module: vegas30k.dll
   Function: FUN_0119fa90
   Address: 0119fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119fa90(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == *(int *)(param_1 + 0x19c)) {
    return 0;
  }
  iVar2 = FUN_0119f8d0(param_1,param_2);
  if (-1 < iVar2) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x638); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x19]) {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x30) == 0) {
        (**(code **)(*(int *)*puVar1 + 0x1a4))(param_2);
      }
      else if (puVar1[9] != 0) {
        (**(code **)(*(int *)*puVar1 + 0x1a4))(param_2);
      }
    }
    return iVar2;
  }
  return iVar2;
}


