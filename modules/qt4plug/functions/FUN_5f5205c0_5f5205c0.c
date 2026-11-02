/* Module: qt4plug.dll
   Function: FUN_5f5205c0
   Address: 5f5205c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f5205c0(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0x80004005;
  }
  if (*(int *)(*(int *)(param_1 + 0x30) + 0x424) != 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar4 = 0x80004005;
  if (piVar1 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x42,0x42);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x424) = uVar3;
    puVar2 = *(undefined2 **)(*(int *)(param_1 + 0x30) + 0x424);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 1;
      puVar2[1] = 2;
      *(undefined4 *)(puVar2 + 2) = 0xac44;
      puVar2[7] = 0x10;
      puVar2[6] = 4;
      *(undefined4 *)(puVar2 + 4) = 0x2b110;
      puVar2[8] = 0;
      uVar4 = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x12) = 0;
    }
  }
  return uVar4;
}


