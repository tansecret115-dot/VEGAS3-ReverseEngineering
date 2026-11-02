/* Module: vidpcore.dll
   Function: FUN_5df0b880
   Address: 5df0b880
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5df0b880(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  iVar2 = *(int *)(*param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = FUN_5df12d80();
    iVar2 = FUN_5df0ee30(uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_5df0f330(param_1 + 1);
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_5df0b8c5;
      }
    }
    iVar2 = 0;
  }
LAB_5df0b8c5:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar2 = 0;
  }
  return iVar2;
}


