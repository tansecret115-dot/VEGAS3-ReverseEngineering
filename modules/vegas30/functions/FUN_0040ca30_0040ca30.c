/* Module: vegas30.exe
   Function: FUN_0040ca30
   Address: 0040ca30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ca30(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  (**(code **)(*param_2 + 4))(param_2);
  *(int **)(unaff_retaddr + 0xc) = param_2;
  iVar1 = FUN_0040c980(param_2);
  if (iVar1 < 0) {
    return -0x7ff8fff2;
  }
  iVar2 = FUN_0040c3e0(*(undefined4 *)(unaff_retaddr + 8),*(undefined4 *)(unaff_retaddr + 0x10),
                       0xffffffff);
  if (iVar2 != 0) {
    *param_5 = 1;
    return iVar1;
  }
  *param_5 = 0;
  FUN_004ec820(*(undefined4 *)(unaff_retaddr + 0x10));
  *(undefined4 *)(unaff_retaddr + 0x10) = 0;
  return iVar1;
}


