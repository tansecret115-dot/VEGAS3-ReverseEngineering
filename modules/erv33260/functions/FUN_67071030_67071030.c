/* Module: erv33260.dll
   Function: FUN_67071030
   Address: 67071030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_67071030(uint param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  puVar1 = malloc(param_1);
  if ((puVar1 != (undefined4 *)0x0) && (param_2 != 0)) {
    puVar3 = puVar1;
    for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return puVar1;
}


