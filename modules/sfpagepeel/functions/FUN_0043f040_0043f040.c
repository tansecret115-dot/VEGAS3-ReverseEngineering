/* Module: sfpagepeel.dll
   Function: FUN_0043f040
   Address: 0043f040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f040(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined1 **)(param_1 + 0xc);
  iVar5 = param_3;
  if (*(int *)(*(int *)(param_1 + 4) + 0xb0) == 0x1c) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar1 = ftol();
      *puVar4 = uVar1;
      uVar1 = ftol();
      puVar4[1] = uVar1;
      uVar1 = ftol();
      puVar4[2] = uVar1;
      uVar1 = ftol();
      puVar4[3] = uVar1;
      puVar4 = puVar4 + 4;
    }
  }
  else if (param_3 != 0) {
    puVar2 = (undefined4 *)(puVar4 + 4);
    puVar3 = (undefined4 *)(param_2 + 0xc);
    do {
      puVar2[-1] = puVar3[-3];
      *puVar2 = *(undefined4 *)((param_2 - (int)puVar4) + (int)puVar2);
      puVar2[1] = puVar3[-1];
      puVar2[2] = *puVar3;
      puVar2 = puVar2 + 4;
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar5 != 0);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x24) * param_3;
  return;
}


