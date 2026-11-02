/* Module: vegas30k.dll
   Function: FUN_0116ad00
   Address: 0116ad00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0116ad00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x45);
  *(undefined4 **)(param_1 + 0x1c1) = puVar1;
  *puVar1 = &LAB_0116ad40;
  puVar1[1] = &LAB_0116ae80;
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


