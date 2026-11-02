/* Module: mcplug.dll
   Function: FUN_004032a0
   Address: 004032a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004032a0(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x26c);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x18) = iVar1 + *(int *)(param_1 + 0x2c8);
    if (*(int *)(param_1 + 0x2c8) != 0) {
      lVar2 = __allmul(*(uint *)(param_1 + 0x2cc),0,10000000,0);
      uVar3 = __alldiv((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),*(uint *)(param_1 + 0x2d4),0);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
    }
    if (iVar1 != 0) {
      __allmul(*(uint *)(param_1 + 0x270),(int)*(uint *)(param_1 + 0x270) >> 0x1f,10000000,0);
      uVar3 = ftol();
      iVar1 = (int)((ulonglong)uVar3 >> 0x20);
      if ((*(int *)(param_1 + 0x24) <= iVar1) &&
         ((*(int *)(param_1 + 0x24) < iVar1 || (*(uint *)(param_1 + 0x20) < (uint)uVar3)))) {
        *(undefined8 *)(param_1 + 0x20) = uVar3;
      }
    }
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  return 0x8004e007;
}


