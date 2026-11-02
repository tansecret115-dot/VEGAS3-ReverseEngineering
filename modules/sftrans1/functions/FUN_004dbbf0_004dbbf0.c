/* Module: sftrans1.dll
   Function: FUN_004dbbf0
   Address: 004dbbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004dbbf0(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    if ((undefined4 *)(param_1 + 0x94) != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0x3ff00000;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    return 0;
  }
  if (0x18 < param_3) {
    param_3 = 0x18;
  }
  puVar2 = (undefined4 *)(param_1 + 0x94);
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return 0;
}


