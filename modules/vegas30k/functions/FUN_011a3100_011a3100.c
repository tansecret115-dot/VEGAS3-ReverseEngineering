/* Module: vegas30k.dll
   Function: FUN_011a3100
   Address: 011a3100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a3100(int param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = *(int *)(param_1 + 0xc);
  _Memory = *(int **)(param_1 + 0x10);
  iVar1 = iVar6 + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    (**(code **)(*(int *)*_Memory + 8))((int *)*_Memory);
    free(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 0;
  }
  pvVar3 = calloc(1,iVar1 * 4);
  *(void **)(param_1 + 0x10) = pvVar3;
  piVar4 = _Memory;
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    piVar2 = (int *)*piVar4;
    if (piVar2 == param_2) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    else {
      iVar5 = iVar5 + 4;
      *(int **)(*(int *)(param_1 + 0x10) + -4 + iVar5) = piVar2;
    }
    piVar4 = piVar4 + 1;
  }
  if (_Memory != (int *)0x0) {
    free(_Memory);
  }
  return 0;
}


