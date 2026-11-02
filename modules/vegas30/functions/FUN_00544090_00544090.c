/* Module: vegas30.exe
   Function: FUN_00544090
   Address: 00544090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00544090(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *_Memory;
  
  *param_3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 4) + 0xc));
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if (iVar4 + -1 < 0) {
    _Memory = (undefined4 *)0x0;
  }
  else {
    _Memory = *(undefined4 **)piVar1[2];
  }
  if (_Memory != (undefined4 *)0x0) {
    _SfList_DeleteList_16(piVar1,0,1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 4) + 0xc));
  if (_Memory != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_00543f50(param_1,_Memory[4],*_Memory,_Memory[1]);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = *_Memory;
      *(undefined4 *)(param_1 + 0x44) = _Memory[1];
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        iVar4 = (**(code **)(param_1 + 0x48))
                          (*(undefined4 *)(param_1 + 0x4c),*_Memory,_Memory[1],*puVar3,puVar3[1],
                           _Memory[5]);
        if ((iVar4 == 0) || (iVar4 < 0)) {
          puVar3[2] = *_Memory;
          puVar3[3] = _Memory[1];
          puVar3[6] = _Memory[4];
          puVar3[7] = 0;
          FUN_00544060(param_1,puVar3);
          if (((*(code **)(param_1 + 0x50) != (code *)0x0) && (*(int *)(param_1 + 0x60) == 0)) &&
             ((*(uint *)(param_1 + 0x5c) < param_2 || (iVar2 < 2)))) {
            (**(code **)(param_1 + 0x50))
                      (*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
            *param_3 = 1;
          }
          *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          free(_Memory);
          return 1;
        }
      }
      FUN_00544060(param_1,puVar3);
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      free(_Memory);
      return 0;
    }
    free(_Memory);
  }
  return 0;
}


