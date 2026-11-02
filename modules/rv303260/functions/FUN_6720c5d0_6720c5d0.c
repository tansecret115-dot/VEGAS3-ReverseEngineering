/* Module: rv303260.dll
   Function: FUN_6720c5d0
   Address: 6720c5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_6720c5d0(uint param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  pvVar1 = malloc(param_1 * 0x3d);
  if (pvVar1 != (void *)0x0) {
    uVar3 = 0;
    if (param_1 != 0) {
      puVar2 = (undefined4 *)((int)pvVar1 + 8);
      do {
        puVar2[-2] = uVar3;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 1;
        puVar2[6] = 0;
        *(undefined1 *)(puVar2 + 7) = 0;
        *(undefined4 *)((int)puVar2 + 0x1d) = 0;
        *(undefined4 *)((int)puVar2 + 0x21) = 0;
        *(undefined4 *)((int)puVar2 + 0x25) = 0;
        *(undefined4 *)((int)puVar2 + 0x29) = 0;
        *(undefined4 *)((int)puVar2 + 0x2d) = 0;
        *(undefined4 *)((int)puVar2 + 0x31) = 0;
        uVar3 = uVar3 + 1;
        puVar2 = (undefined4 *)((int)puVar2 + 0x3d);
      } while (uVar3 < param_1);
    }
    return pvVar1;
  }
  return (void *)0x0;
}


