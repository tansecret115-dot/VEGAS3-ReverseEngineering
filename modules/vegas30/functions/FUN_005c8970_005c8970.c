/* Module: vegas30.exe
   Function: FUN_005c8970
   Address: 005c8970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c8970(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  void *_Memory;
  undefined4 uVar2;
  
  FUN_005b83b0(param_1,1);
  iVar1 = *(int *)(param_2 + 0x24);
  _Memory = *(void **)(*(int *)(iVar1 + 8) + param_3 * 4);
  if (_Memory == (void *)0x0) {
    FUN_005b84d0(param_1,1);
    return 0x80004005;
  }
  uVar2 = FUN_005c8870(param_1,param_2,_Memory);
  _SfList_DeleteList_16(iVar1,param_3,1,param_4);
  free(_Memory);
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200000;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
  }
  if (param_5 != 0) {
    FUN_005cbf70(param_2,0);
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x20;
  FUN_005b84d0(param_1,1);
  return uVar2;
}


