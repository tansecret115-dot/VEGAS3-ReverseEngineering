/* Module: sftrans1.dll
   Function: FUN_00414090
   Address: 00414090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00414090(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (0x20 < param_3) {
    param_3 = 0x20;
  }
  puVar2 = (undefined4 *)(param_1 + 0x24);
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return 0;
}


