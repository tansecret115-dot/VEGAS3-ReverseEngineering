/* Module: vegas30k.dll
   Function: FUN_0103e790
   Address: 0103e790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0103e790(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01136100();
  if (iVar1 == 0) {
    for (iVar1 = *(int *)(param_1 + 0x39c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
      FUN_01137760();
      FUN_01137740();
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    iVar1 = 0;
  }
  return iVar1;
}


