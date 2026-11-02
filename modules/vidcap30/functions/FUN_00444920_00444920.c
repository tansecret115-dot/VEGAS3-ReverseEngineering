/* Module: vidcap30.exe
   Function: FUN_00444920
   Address: 00444920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444920(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *_Memory;
  
  FUN_0042f4b0(param_1,1);
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    _Memory = *(void **)(*(int *)(*(int *)(param_2 + 0x10) + 8) + param_3 * 4);
    FUN_00444990(param_1,_Memory);
    _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x10),param_3,1,param_4);
    free(_Memory);
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x200;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


