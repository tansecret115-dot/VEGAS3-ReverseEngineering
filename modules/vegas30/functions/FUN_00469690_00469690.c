/* Module: vegas30.exe
   Function: FUN_00469690
   Address: 00469690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00469690(int param_1)

{
  void *pvVar1;
  void *_Memory;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  pvVar1 = *(void **)(param_1 + 0x8c);
  if ((pvVar1 != (void *)0x0) &&
     (pvVar1 != (void *)(param_1 + 0x220 + *(int *)(param_1 + 0x84) * 4))) {
    free(pvVar1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (0 < *(int *)(param_1 + 0x84)) {
    puVar2 = (undefined4 *)(param_1 + 0x220);
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        *puVar2 = 0;
        _Memory = *(void **)((int)pvVar1 + 0x20);
        if ((_Memory != (void *)0x0) && (_Memory != (void *)((int)pvVar1 + 0x28))) {
          free(_Memory);
        }
        free(pvVar1);
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 4) == 3) {
    if (*(int *)(param_1 + 0x148) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x148) = 0;
    }
    if (*(int *)(param_1 + 0x208) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_1 + 0x208));
      *(undefined4 *)(param_1 + 0x208) = 0;
    }
    if (*(int *)(param_1 + 0x20c) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_1 + 0x20c));
      *(undefined4 *)(param_1 + 0x20c) = 0;
    }
    FUN_00522050(param_1 + 0x14c,0);
  }
  FUN_0047c430(param_1 + 0x90);
  return;
}


