/* Module: sftrkfx1.dll
   Function: FUN_5cbf8070
   Address: 5cbf8070
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5cbf8070(int *param_1)

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
    uVar2 = FUN_5cbff570(iVar3);
    iVar3 = FUN_5cbfb620(param_1,uVar2 & 0xffff);
    if (iVar3 == 0) {
      bVar1 = FUN_5cbfbb20(param_1,(char *)(param_1 + 1));
      if (CONCAT31(extraout_var,bVar1) == 0) {
        iVar4 = 1;
        goto LAB_5cbf80b5;
      }
    }
    iVar4 = 0;
  }
LAB_5cbf80b5:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar4 = 0;
  }
  return iVar4;
}


