/* Module: sfppack1.dll
   Function: FUN_5ce04bc0
   Address: 5ce04bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5ce04bc0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return 1;
  }
  iVar4 = *(int *)(iVar3 + 0x18);
  if (iVar4 == 0) {
    uVar2 = FUN_5ce0c0c0(iVar3);
    iVar3 = FUN_5ce08170(param_1,uVar2 & 0xffff);
    if (iVar3 == 0) {
      bVar1 = FUN_5ce08670(param_1,(char *)(param_1 + 1));
      if (CONCAT31(extraout_var,bVar1) == 0) {
        iVar4 = 1;
        goto LAB_5ce04c05;
      }
    }
    iVar4 = 0;
  }
LAB_5ce04c05:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar4 = 0;
  }
  return iVar4;
}


