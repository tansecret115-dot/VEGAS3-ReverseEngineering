/* Module: vidcap30.exe
   Function: FUN_004115e0
   Address: 004115e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004115e0(int *param_1)

{
  int *piVar1;
  void *_Memory;
  int iVar2;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = *(int *)((int)param_1 + 0x84);
  local_4 = *(undefined4 *)((int)param_1 + 0x88);
  param_1 = &local_8;
  local_c = 2;
  do {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      while (0 < iVar2) {
        iVar2 = iVar2 + -1;
        _Memory = *(void **)(piVar1[2] + iVar2 * 4);
        _SfList_DeleteList_16(piVar1,iVar2,1,0);
        free(_Memory);
      }
    }
    _SfList_Destroy_4(piVar1);
    param_1 = param_1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}


