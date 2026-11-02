/* Module: vidcap30.exe
   Function: FUN_00405960
   Address: 00405960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405960(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_retaddr;
  
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  (**(code **)(*param_2 + 4))(param_2);
  *(int **)(unaff_retaddr + 0xc) = param_2;
  iVar1 = FUN_004058b0(param_2);
  if (iVar1 < 0) {
    return -0x7ff8fff2;
  }
  if (*(int *)(DAT_005ba4c0 + 0xbc) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(DAT_005ba4c0 + 0xbc) + 0x18);
  }
  iVar3 = FUN_00404f50(*(undefined4 *)(unaff_retaddr + 8),*(undefined4 *)(unaff_retaddr + 0x10),
                       uVar2);
  if (iVar3 != 0) {
    *param_5 = 1;
    *(uint *)(unaff_retaddr + 0x14) = (uint)param_2 & 2;
    return iVar1;
  }
  *param_5 = 0;
  FUN_00417990(*(undefined4 *)(unaff_retaddr + 0x10));
  *(undefined4 *)(unaff_retaddr + 0x10) = 0;
  return iVar1;
}


