/* Module: vegas30.exe
   Function: FUN_00583800
   Address: 00583800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583800(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000018;
  
  iVar2 = ftol();
  iVar2 = 0xff - iVar2;
  for (iVar3 = iVar2; -1 < iVar3; iVar3 = iVar3 + -1) {
    uVar1 = ftol();
    *(undefined1 *)(iVar3 + param_1) = uVar1;
  }
  for (; iVar2 < 0x100; iVar2 = iVar2 + 1) {
    uVar1 = ftol();
    *(undefined1 *)(iVar2 + param_1) = uVar1;
  }
  if (in_stack_00000018 != 0) {
    iVar3 = 0;
    do {
      *(char *)(iVar3 + param_1) = -1 - *(char *)(iVar3 + param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
  }
  return;
}


