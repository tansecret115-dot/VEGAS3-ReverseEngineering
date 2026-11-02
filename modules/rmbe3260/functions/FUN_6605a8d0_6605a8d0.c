/* Module: rmbe3260.dll
   Function: FUN_6605a8d0
   Address: 6605a8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6605a8d0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,ushort param_5)

{
  undefined4 uVar1;
  void *pvVar2;
  
  uVar1 = 0x80004005;
  if (*(int *)(param_1 + 4) == 0) {
    *(uint *)(param_1 + 8) = param_2;
    pvVar2 = operator_new(param_2);
    *(void **)(param_1 + 4) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      *(uint *)(param_1 + 0xc) = param_2;
      *(undefined4 *)(param_1 + 0x10) = param_3;
      *(undefined4 *)(param_1 + 0x14) = param_4;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(uint *)(param_1 + 0x4e) = (uint)param_5;
      if (param_5 == 8) {
        *(undefined2 *)(param_1 + 0x4c) = 0x80;
        return 0;
      }
      if (param_5 == 0x10) {
        *(undefined2 *)(param_1 + 0x4c) = 0;
        return 0;
      }
      return 0x80040243;
    }
    uVar1 = 0x8007000e;
  }
  return uVar1;
}


