/* Module: sfmarket2.dll
   Function: FUN_004877c0
   Address: 004877c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004877c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x45);
  *(undefined4 **)(param_1 + 0x1c1) = puVar1;
  *puVar1 = &LAB_00487800;
  puVar1[1] = &LAB_00487940;
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


