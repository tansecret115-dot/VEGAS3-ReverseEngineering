/* Module: rmbe3260.dll
   Function: FUN_66018020
   Address: 66018020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66018020(int param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  ushort uVar5;
  
  iVar2 = FUN_66017d60((void *)(param_1 + -0x14),param_2);
  if (iVar2 < 0) {
    return 0x80070057;
  }
  uVar1 = *(ushort *)(param_2 + 10) + 1;
  if (uVar1 < *(ushort *)(param_2 + 10)) {
    return 0x8007000e;
  }
  pvVar3 = operator_new((uint)uVar1 * 2);
  if (pvVar3 == (void *)0x0) {
    return 0x8007000e;
  }
  FUN_6605cf30((void *)(param_1 + 0x48),*(int *)(param_1 + 0x4c),pvVar3);
  if ((*(short *)(param_2 + 10) != 0) && (*(int *)(param_2 + 0xc) != 0)) {
    uVar5 = 0;
    if (*(short *)(param_2 + 10) != 0) {
      do {
        uVar4 = (uint)uVar5;
        uVar5 = uVar5 + 1;
        *(undefined2 *)((int)pvVar3 + uVar4 * 2) =
             *(undefined2 *)(*(int *)(param_2 + 0xc) + uVar4 * 2);
      } while (uVar5 < *(ushort *)(param_2 + 10));
    }
  }
  *(undefined2 *)((int)pvVar3 + ((uint)uVar1 * 2 - 2)) = param_3;
  FUN_66017ce0((void *)(param_1 + -0x14),*(void **)(param_2 + 0xc));
  *(void **)(param_2 + 0xc) = pvVar3;
  *(ushort *)(param_2 + 10) = uVar1;
  return 0;
}


