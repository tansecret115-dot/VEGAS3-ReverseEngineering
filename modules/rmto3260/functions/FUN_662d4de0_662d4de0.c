/* Module: rmto3260.dll
   Function: FUN_662d4de0
   Address: 662d4de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d4de0(int param_1,char *param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_8;
  
  puVar3 = (undefined4 *)0x0;
  iVar4 = 0;
  local_8 = (void *)0x0;
  if (*(int *)(param_1 + 0x34) == 0) {
    puVar1 = operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_662ed6f0(puVar1);
    }
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    puVar3 = operator_new(0x12);
    if (puVar3 == (undefined4 *)0x0) {
      iVar4 = -0x7ff8fff2;
    }
    if (-1 < iVar4) {
      *(undefined2 *)(puVar3 + 1) = param_3;
      *(undefined4 *)((int)puVar3 + 6) = param_4;
      *(undefined4 *)((int)puVar3 + 10) = param_5;
      *(undefined4 *)((int)puVar3 + 0xe) = 0;
      iVar4 = FUN_662d08f0(&local_8,param_2);
      if ((-1 < iVar4) && (*puVar3 = local_8, -1 < iVar4)) {
        FUN_662ed8a0(*(void **)(param_1 + 0x34),puVar3);
        return iVar4;
      }
    }
  }
  if (local_8 != (void *)0x0) {
    operator_delete(local_8);
  }
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete(puVar3);
  }
  return iVar4;
}


