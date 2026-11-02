/* Module: vegas30.exe
   Function: FUN_006004e0
   Address: 006004e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_006004e0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  iVar2 = *(int *)(*param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = FUN_00607f70();
    iVar2 = FUN_00603a90(uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00603f90(param_1 + 1);
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_00600525;
      }
    }
    iVar2 = 0;
  }
LAB_00600525:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar2 = 0;
  }
  return iVar2;
}


