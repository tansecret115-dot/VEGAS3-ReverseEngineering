/* Module: sftrans1.dll
   Function: FUN_005310c0
   Address: 005310c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005310c0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  iVar2 = *(int *)(*param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = FUN_00538590();
    iVar2 = FUN_00534670(uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00534b70(param_1 + 1);
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_00531105;
      }
    }
    iVar2 = 0;
  }
LAB_00531105:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar2 = 0;
  }
  return iVar2;
}


