/* Module: sfs4rw.dll
   Function: FUN_00475990
   Address: 00475990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00475990(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_1 == 2) {
    uVar3 = 0xa7;
  }
  else {
    if (param_1 != 1) {
      return (undefined4 *)0x0;
    }
    uVar3 = 0x1ff;
  }
  puVar1 = malloc(uVar3);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return puVar1;
}


