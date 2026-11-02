/* Module: rmbe3260.dll
   Function: FUN_66017f00
   Address: 66017f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66017f00(int param_1,int param_2,ushort param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  iVar1 = FUN_66017d60((void *)(param_1 + -0x14),param_2);
  if (iVar1 < 0) {
    return 0x80070057;
  }
  if ((param_3 != 0) && (param_4 == 0)) {
    return 0x80070057;
  }
  if (param_3 == *(ushort *)(param_2 + 10)) {
    if (param_3 != 0) {
      iVar1 = 0;
      uVar3 = (uint)param_3;
      do {
        *(undefined2 *)(*(int *)(param_2 + 0xc) + iVar1) = *(undefined2 *)(param_4 + iVar1);
        iVar1 = iVar1 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return 0;
    }
  }
  else {
    if (*(void **)(param_2 + 0xc) != (void *)0x0) {
      FUN_66017ce0((void *)(param_1 + -0x14),*(void **)(param_2 + 0xc));
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    if (param_3 != 0) {
      uVar3 = (uint)param_3;
      pvVar2 = operator_new(uVar3 * 2);
      *(void **)(param_2 + 0xc) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return 0x8007000e;
      }
      FUN_6605cf30((void *)(param_1 + 0x48),*(int *)(param_1 + 0x4c),pvVar2);
      *(ushort *)(param_2 + 10) = param_3;
      if (param_3 != 0) {
        iVar1 = 0;
        do {
          *(undefined2 *)(*(int *)(param_2 + 0xc) + iVar1) = *(undefined2 *)(param_4 + iVar1);
          iVar1 = iVar1 + 2;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return 0;
}


