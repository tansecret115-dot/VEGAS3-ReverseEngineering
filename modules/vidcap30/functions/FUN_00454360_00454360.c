/* Module: vidcap30.exe
   Function: FUN_00454360
   Address: 00454360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454360(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Memory;
  void *_Memory_00;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  iVar2 = *piVar1;
  if (param_3 == 0) {
    if (param_2 < iVar2) {
      _Memory = *(void **)(piVar1[2] + param_2 * 4);
      _Memory_00 = *(void **)((int)_Memory + 4);
      if (_Memory_00 != (void *)0x0) {
        free(_Memory_00);
      }
      free(_Memory);
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2c),param_2,1,0);
      if (param_2 == *(int *)(param_1 + 0x30)) {
LAB_004543fe:
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < iVar2) {
      puVar3 = (undefined4 *)piVar1[2];
      do {
        piVar1 = (int *)*puVar3;
        if (*piVar1 == param_2) {
          if ((void *)piVar1[1] != (void *)0x0) {
            free((void *)piVar1[1]);
          }
          free(piVar1);
          _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2c),iVar4,1,0);
          if (iVar4 == *(int *)(param_1 + 0x30)) goto LAB_004543fe;
          break;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < iVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  FUN_004544d0(param_1,0);
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return;
}


