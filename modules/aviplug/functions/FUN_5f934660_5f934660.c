/* Module: aviplug.dll
   Function: FUN_5f934660
   Address: 5f934660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f934660(int param_1)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined1 *apuStack_3c [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  
  apuStack_3c[1] = (undefined1 *)&local_30;
  local_30 = 0;
  apuStack_3c[0] = (undefined1 *)0x1;
  uVar3 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))(*(int **)(param_1 + 0x18),0);
  if (-1 < iVar1) {
    ppuVar2 = apuStack_3c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar2 = (undefined1 *)0x0;
      ppuVar2 = ppuVar2 + 1;
    }
    apuStack_3c[1] = (undefined1 *)(param_1 + 0x70);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x44))
                      (*(int **)(param_1 + 0x18),apuStack_3c,uVar3,1);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x68) = local_30;
      *(undefined4 *)(param_1 + 0x6c) = uStack_2c;
    }
  }
  return 0;
}


