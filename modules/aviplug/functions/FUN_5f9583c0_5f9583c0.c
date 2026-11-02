/* Module: aviplug.dll
   Function: FUN_5f9583c0
   Address: 5f9583c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9583c0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar5 = 0;
  if ((((*(int *)(param_2 + 4) == 0x2d0) &&
       ((((iVar4 = *(int *)(param_2 + 0x10), iVar4 == 0x64737664 || (iVar4 == 0x6e76645f)) ||
         (iVar4 == 0x6e766477)) || ((iVar4 == 0x7076645f || (iVar4 == 0x70766477)))))) &&
      (*(short *)(param_2 + 0xe) == 0x18)) &&
     ((*(int *)(param_3 + 0x10) == 0 &&
      ((sVar1 = *(short *)(param_3 + 0xe), sVar1 == 0x18 || (sVar1 == 0x20)))))) {
    iVar4 = param_2;
    if (*(int *)(param_3 + 4) == 0x2d0) {
      iVar3 = *(int *)(param_3 + 8);
      if (iVar3 == 0x240) {
        if (sVar1 == 0x18) {
          iVar5 = 0x23280;
          iVar4 = *(int *)PTR_PTR_5f9f2c04;
        }
        else if (sVar1 == 0x20) {
          iVar5 = 0x23280;
          iVar4 = *(int *)(PTR_PTR_5f9f2c04 + 8);
        }
        else {
          iVar5 = 0x23280;
        }
      }
      else if (iVar3 == 0x1e0) {
        if (sVar1 == 0x18) {
          iVar5 = 120000;
          iVar4 = *(int *)PTR_PTR_5f9f2c00;
        }
        else if (sVar1 == 0x20) {
          iVar5 = 120000;
          iVar4 = *(int *)(PTR_PTR_5f9f2c00 + 8);
        }
        else {
          iVar5 = 120000;
        }
      }
      if (iVar5 == 0) {
        return 0;
      }
    }
    else {
      if (*(int *)(param_3 + 4) != 0x168) {
        return 0;
      }
      if (*(int *)(param_3 + 8) == 0x120) {
        if (sVar1 == 0x18) {
          iVar5 = 0x23280;
          iVar3 = 0x240;
          iVar4 = *(int *)(PTR_PTR_5f9f2c04 + 4);
        }
        else if (sVar1 == 0x20) {
          iVar5 = 0x23280;
          iVar3 = 0x240;
          iVar4 = *(int *)(PTR_PTR_5f9f2c04 + 0xc);
        }
        else {
          iVar5 = 0x23280;
          iVar3 = 0x240;
        }
      }
      else {
        if (*(int *)(param_3 + 8) != 0xf0) {
          return 0;
        }
        if (sVar1 == 0x18) {
          iVar5 = 120000;
          iVar3 = 0x1e0;
          iVar4 = *(int *)(PTR_PTR_5f9f2c00 + 4);
        }
        else if (sVar1 == 0x20) {
          iVar5 = 120000;
          iVar3 = 0x1e0;
          iVar4 = *(int *)(PTR_PTR_5f9f2c00 + 0xc);
        }
        else {
          iVar5 = 120000;
          iVar3 = 0x1e0;
        }
      }
    }
    if (iVar3 == *(int *)(param_2 + 8)) {
      if (param_4 != (int *)0x0) {
        *param_4 = iVar5;
        return iVar4;
      }
      if (iVar5 == *(int *)(param_2 + 0x14)) {
        iVar2 = iVar4;
      }
    }
  }
  return iVar2;
}


