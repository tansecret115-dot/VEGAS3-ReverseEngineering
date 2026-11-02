/* Module: mp3plug.dll
   Function: FUN_5f6cf000
   Address: 5f6cf000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6cf000(int *param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  size_t _Size_00;
  int local_1c;
  int local_18;
  size_t local_14;
  
  pvVar1 = calloc(0x20,1);
  *param_1 = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    if (param_3 == 1) {
      _Size_00 = 0;
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
    }
    else {
      if (param_2 == 1) {
        _Size_00 = param_3 - 1;
        local_1c = 1;
        local_14 = 0;
        local_18 = 0;
      }
      else {
        FUN_5f6cef10(param_2,param_3,&local_1c,&local_18);
        local_14 = (param_3 + -1) * local_18;
        _Size_00 = (param_3 + -1) * local_1c;
        pvVar1 = calloc(4,local_14);
        *(void **)(*param_1 + 0x18) = pvVar1;
        if (*(int *)(*param_1 + 0x18) == 0) {
          return 0;
        }
      }
      pvVar1 = calloc(4,_Size_00);
      *(void **)(*param_1 + 0x14) = pvVar1;
      if (*(int *)(*param_1 + 0x14) == 0) {
        return 0;
      }
    }
    *(int *)*param_1 = local_1c;
    _Size = param_3 * param_2;
    *(int *)(*param_1 + 4) = local_18;
    *(size_t *)(*param_1 + 8) = _Size_00;
    *(size_t *)(*param_1 + 0xc) = local_14;
    *(size_t *)(*param_1 + 0x10) = _Size;
    pvVar1 = calloc(4,_Size);
    *(void **)(*param_1 + 0x1c) = pvVar1;
    if (*(int *)(*param_1 + 0x1c) != 0) {
      if (0 < (int)_Size) {
        iVar3 = 0;
        do {
          iVar2 = FUN_5f6d3ca0((int *)(*(int *)(*param_1 + 0x1c) + iVar3),param_4 - 1);
          if (iVar2 == 0) {
            return 0;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < (int)(_Size * 4));
      }
      return 1;
    }
  }
  return 0;
}


