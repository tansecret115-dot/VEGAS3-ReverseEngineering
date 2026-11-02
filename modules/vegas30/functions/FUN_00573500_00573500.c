/* Module: vegas30.exe
   Function: FUN_00573500
   Address: 00573500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00573500(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = *(int *)(DAT_0064762c + 0x74);
  if ((iVar1 != 0) && (*(int **)(iVar1 + 0x80) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x80) + 0x80))(DAT_0064b138);
    (**(code **)(**(int **)(iVar1 + 0x80) + 0x84))(unaff_retaddr,param_1);
  }
  return;
}


