/* Module: sfs4rw.dll
   Function: FUN_00485ff0
   Address: 00485ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00485ff0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x69);
  *(undefined4 **)(param_1 + 0x189) = puVar1;
  *puVar1 = &LAB_00486030;
  puVar2 = (undefined4 *)((int)puVar1 + 0x59);
  iVar3 = 4;
  do {
    puVar2[-4] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)puVar1 + 0x3d) = 0;
  return;
}


