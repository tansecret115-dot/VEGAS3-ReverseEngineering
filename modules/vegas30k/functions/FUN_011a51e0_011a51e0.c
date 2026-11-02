/* Module: vegas30k.dll
   Function: FUN_011a51e0
   Address: 011a51e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_011a51e0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_EBP;
  int iVar3;
  int unaff_retaddr;
  
  iVar3 = 0;
  if (param_3 == 0) {
    param_3 = 0;
    iVar1 = (**(code **)(*(int *)param_1[10] + 0x58))((int *)param_1[10]);
    if (iVar1 < 0) {
      return 1;
    }
    if (unaff_retaddr == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,unaff_retaddr);
      if (iVar1 != 0) goto LAB_011a52e3;
    }
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,1,&stack0xfffffff4,0);
    iVar3 = unaff_retaddr;
    if (iVar2 == 0) {
      iVar3 = unaff_retaddr + 1;
      (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,param_2,param_3);
      (**(code **)(param_3 + 8))(&param_3);
    }
  }
  else {
    param_3 = 0;
    iVar1 = (**(code **)(*(int *)param_1[10] + 0x54))((int *)param_1[10]);
    if (iVar1 < 0) {
      return 1;
    }
    if (unaff_retaddr == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,unaff_retaddr);
      if (iVar1 != 0) goto LAB_011a52e3;
    }
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,1,&stack0xfffffff4,0);
    iVar3 = unaff_retaddr;
    if (iVar2 == 0) {
      (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,param_2,param_3);
      (**(code **)(param_3 + 8))(&param_3);
      iVar3 = unaff_retaddr + 1;
    }
  }
LAB_011a52e3:
  (**(code **)(*param_1 + 8))(param_1);
  if (iVar3 == 0) {
    return 1;
  }
  return iVar1;
}


