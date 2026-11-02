/* Module: mp3rw.dll
   Function: FUN_0047fbb0
   Address: 0047fbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047fbb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x45);
  *(undefined4 **)(param_1 + 0x1c1) = puVar1;
  *puVar1 = &LAB_0047fbf0;
  puVar1[1] = &LAB_0047fd30;
  puVar1 = (undefined4 *)((int)puVar1 + 0x25);
  iVar2 = 4;
  do {
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


