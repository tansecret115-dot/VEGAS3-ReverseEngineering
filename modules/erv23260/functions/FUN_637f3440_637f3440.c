/* Module: erv23260.dll
   Function: FUN_637f3440
   Address: 637f3440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637f3440(void *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  while (pvVar3 = param_1, pvVar3 != (void *)0x0) {
    param_1 = *(void **)((int)pvVar3 + 0x90);
    if (param_1 == pvVar3) {
      param_1 = (void *)0x0;
    }
    else {
      iVar1 = *(int *)((int)pvVar3 + 0x8c);
      *(int *)((int)param_1 + 0x8c) = iVar1;
      *(void **)(iVar1 + 0x90) = param_1;
    }
    do {
      pvVar2 = *(void **)((int)pvVar3 + 0x88);
      FUN_637f1080(pvVar3);
      pvVar3 = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}


