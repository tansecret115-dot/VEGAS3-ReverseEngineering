/* Module: vidcap30.exe
   Function: FUN_0056f700
   Address: 0056f700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0056f700(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  iVar2 = *(int *)(*param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = FUN_00577190();
    iVar2 = FUN_00572cb0(uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_005731b0(param_1 + 1);
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_0056f745;
      }
    }
    iVar2 = 0;
  }
LAB_0056f745:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar2 = 0;
  }
  return iVar2;
}


