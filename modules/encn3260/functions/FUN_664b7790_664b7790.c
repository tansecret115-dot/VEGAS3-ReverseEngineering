/* Module: encn3260.dll
   Function: FUN_664b7790
   Address: 664b7790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664b7790(int param_1,uint param_2)

{
  if (param_2 < 0x52474234) {
    if ((param_2 == 0x52474233) || (param_2 == 0x20524742)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0xe) = 0x18;
      return;
    }
  }
  else if (param_2 == 0x52474235) {
    *(undefined4 *)(param_1 + 0x10) = 3;
    *(undefined2 *)(param_1 + 0xe) = 0x10;
    *(undefined4 *)(param_1 + 0x28) = 0x7c00;
    *(undefined4 *)(param_1 + 0x2c) = 0x3e0;
    *(undefined4 *)(param_1 + 0x30) = 0x1f;
  }
  else if (param_2 == 0x52474236) {
    *(undefined4 *)(param_1 + 0x10) = 3;
    *(undefined2 *)(param_1 + 0xe) = 0x10;
    *(undefined4 *)(param_1 + 0x28) = 0xf800;
    *(undefined4 *)(param_1 + 0x2c) = 0x7e0;
    *(undefined4 *)(param_1 + 0x30) = 0x1f;
    return;
  }
  return;
}


