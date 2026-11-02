/* Module: sfs4rw.dll
   Function: FUN_0047b790
   Address: 0047b790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047b790(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x11e;
  puVar1 = (undefined2 *)(param_1 + 0x8a);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0x97e);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0xa72);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x169f) = 0;
  *(undefined4 *)(param_1 + 0x169b) = 0;
  *(undefined4 *)(param_1 + 0x16a3) = 0;
  *(undefined4 *)(param_1 + 0x1693) = 0;
  *(undefined2 *)(param_1 + 0x48a) = 1;
  return;
}


