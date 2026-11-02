/* Module: sftrans1.dll
   Function: FUN_0049d160
   Address: 0049d160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049d160(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 == *param_2) {
    iVar6 = 0;
    if (0 < iVar1) {
      pdVar3 = (double *)param_1[1];
      pdVar4 = (double *)(param_2[1] + 0x28);
      iVar5 = param_2[1] - (int)pdVar3;
      do {
        if ((((*pdVar3 != *(double *)(iVar5 + (int)pdVar3)) || (pdVar3[1] != pdVar4[-4])) ||
            (pdVar3[5] != *pdVar4)) ||
           (((pdVar3[6] != pdVar4[1] || (pdVar3[10] != pdVar4[5])) || (pdVar3[0xb] != pdVar4[6]))))
        {
          return 0;
        }
        iVar6 = iVar6 + 1;
        pdVar4 = pdVar4 + 0xd;
        pdVar3 = pdVar3 + 0xd;
      } while (iVar6 < iVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}


