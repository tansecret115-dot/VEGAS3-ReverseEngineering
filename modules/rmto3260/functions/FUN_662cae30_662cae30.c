/* Module: rmto3260.dll
   Function: FUN_662cae30
   Address: 662cae30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662cae30(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  piVar1 = param_1;
  iVar2 = 0;
  bVar3 = true;
  if ((*(int *)((int)param_1 + 0x16) == 0) &&
     ((iVar2 = FUN_662d0dc0((void *)*param_1,*param_1,(char *)&param_1,
                            s_application_x_pn_multirate_reale_6630a094), param_1 != (int *)0x0 ||
      (iVar2 = FUN_662d0dc0((void *)0x0,*piVar1,(char *)&param_1,
                            s_application_x_pn_multirate_image_6630a0d8), param_1 != (int *)0x0))))
  {
    bVar3 = false;
  }
  if ((*(int *)((int)piVar1 + 0x1a) != 0) && (*(int *)((int)piVar1 + 0x1e) == 0)) {
    bVar3 = false;
  }
  if (-1 < iVar2) {
    uVar4 = 0;
    if (bVar3) {
      if ((*(int *)((int)piVar1 + 0x16) == 0) && (*(int *)((int)piVar1 + 0x22) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    if (-1 < iVar2) {
      return uVar4;
    }
  }
  return 0;
}


