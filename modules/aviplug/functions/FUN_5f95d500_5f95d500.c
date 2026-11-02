/* Module: aviplug.dll
   Function: FUN_5f95d500
   Address: 5f95d500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f95d500(void *this,int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined2 **)(param_1 + 0x424);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 2;
    *(undefined4 *)(puVar1 + 2) = 0xac44;
    puVar1[7] = 0x10;
    puVar1[6] = 4;
    *(undefined4 *)(puVar1 + 4) = 0x2b110;
    puVar1[8] = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x424) + 0x16);
    if (iVar2 != 0) {
      (**(code **)(**(int **)((int)this + 0x30) + 0x24))(*(int **)((int)this + 0x30),iVar2);
      *(undefined4 *)(*(int *)(param_1 + 0x424) + 0x16) = 0;
    }
    *(undefined4 *)((int)this + 0x24) = 1;
  }
  return 1;
}


