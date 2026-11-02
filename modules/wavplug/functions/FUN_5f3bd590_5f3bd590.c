/* Module: wavplug.dll
   Function: FUN_5f3bd590
   Address: 5f3bd590
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f3bd590(int *param_1)

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
    uVar2 = FUN_5f3c4a60(iVar3);
    iVar3 = FUN_5f3c0b40(param_1,uVar2 & 0xffff);
    if (iVar3 == 0) {
      bVar1 = FUN_5f3c1040(param_1,(char *)(param_1 + 1));
      if (CONCAT31(extraout_var,bVar1) == 0) {
        iVar4 = 1;
        goto LAB_5f3bd5d5;
      }
    }
    iVar4 = 0;
  }
LAB_5f3bd5d5:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar4 = 0;
  }
  return iVar4;
}


