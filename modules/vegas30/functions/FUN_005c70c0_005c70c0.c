/* Module: vegas30.exe
   Function: FUN_005c70c0
   Address: 005c70c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c70c0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  void *local_4;
  
  local_4 = (void *)0x0;
  iVar1 = FUN_005c6a40(param_2,param_3,param_4,param_5,&local_4);
  if (-1 < iVar1) {
    iVar1 = FUN_005c6f40(param_1,param_2,local_4,param_6,param_7);
    if (param_7 != 0) {
      iVar2 = *(int *)(param_2 + 0x3c) + 1;
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_2 + 0x3c) = iVar2;
      if (((*(int *)(param_2 + 4) == 3) && (param_3 != 0)) &&
         ((*(uint *)(param_3 + 0x134) & 0x400) != 0)) {
        FUN_005c90e0(param_1,param_2,7,1);
      }
    }
    *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
    if (((*(uint *)(param_2 + 0x10) & 0x400) != 0) ||
       ((*(int *)(param_2 + 8) != 0 && ((*(uint *)(*(int *)(param_2 + 8) + 0x10) & 0x200) != 0)))) {
      *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
    }
    if (-1 < iVar1) {
      iVar2 = FUN_004e4ed0(*(undefined4 *)(param_2 + 8));
      if (iVar2 == 0) {
        iVar2 = FUN_005bad20(param_1);
      }
      else {
        iVar2 = FUN_005ec620();
      }
      if (iVar2 == 0) {
        return iVar1;
      }
      FUN_005ed3f0(*(undefined4 *)((int)local_4 + 0x18));
      return iVar1;
    }
  }
  if (local_4 != (void *)0x0) {
    _Memory = *(void **)((int)local_4 + 0x20);
    if ((_Memory != (void *)0x0) && (_Memory != (void *)((int)local_4 + 0x28))) {
      free(_Memory);
    }
    free(local_4);
  }
  return iVar1;
}


