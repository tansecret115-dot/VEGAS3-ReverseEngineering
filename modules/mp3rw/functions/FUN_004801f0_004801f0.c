/* Module: mp3rw.dll
   Function: FUN_004801f0
   Address: 004801f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004801f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x3d);
  *(undefined4 **)(param_1 + 0x1c1) = puVar1;
  *puVar1 = &LAB_00480260;
  *(undefined4 *)((int)puVar1 + 0x29) = 0;
  *(undefined4 *)((int)puVar1 + 0x2d) = 0;
  *(undefined4 *)((int)puVar1 + 0x31) = 0;
  *(undefined4 *)((int)puVar1 + 0x35) = 0;
  puVar1 = (undefined4 *)
           (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x5d) << 8);
  *(undefined4 **)(param_1 + 0xbe) = puVar1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5d)) {
    do {
      puVar4 = puVar1;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0x5d));
  }
  return;
}


