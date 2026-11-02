/* Module: vegas30.exe
   Function: FUN_005ea020
   Address: 005ea020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ea020(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  void *_Memory;
  int iVar1;
  undefined4 uVar2;
  
  _Memory = calloc(1,param_2 * 4);
  if (_Memory == (void *)0x0) {
    return 0x8007000e;
  }
  iVar1 = 0;
  if (0 < param_2) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)((int)_Memory + iVar1 * 4 + -4) =
           *(undefined4 *)(*(int *)(*(int *)(param_3 + 8) + -4 + iVar1 * 4) + 0x1c);
    } while (iVar1 < param_2);
  }
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,_Memory,param_2 * 4,param_4);
  free(_Memory);
  return uVar2;
}


