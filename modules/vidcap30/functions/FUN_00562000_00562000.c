/* Module: vidcap30.exe
   Function: FUN_00562000
   Address: 00562000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00562000(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x45);
  *(undefined4 **)(param_1 + 0x1c1) = puVar1;
  *puVar1 = &LAB_00562040;
  puVar1[1] = &LAB_00562180;
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


