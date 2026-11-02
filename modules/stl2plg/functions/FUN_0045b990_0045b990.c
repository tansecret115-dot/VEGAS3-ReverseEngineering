/* Module: stl2plg.dll
   Function: FUN_0045b990
   Address: 0045b990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045b990(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54);
  *(undefined4 **)(param_1 + 0x1c5) = puVar1;
  *puVar1 = &LAB_0045ba10;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x5d)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xf6) + 0x4d);
    puVar1 = puVar1 + 0xb;
    do {
      puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
      iVar5 = iVar5 + 1;
      *puVar3 = puVar2;
      puVar3 = (undefined4 *)((int)puVar3 + 0x51);
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x5d));
  }
  return;
}


