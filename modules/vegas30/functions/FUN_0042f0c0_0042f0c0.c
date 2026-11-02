/* Module: vegas30.exe
   Function: FUN_0042f0c0
   Address: 0042f0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0042f0c0(int *param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  char *lpString2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = 0;
  lpString2 = "Samples";
  while (iVar1 = lstrcmpiA(param_2,lpString2), iVar1 != 0) {
    lpString2 = lpString2 + 0x14;
    iVar2 = iVar2 + 1;
    if ("" <= lpString2) {
      return (int *)0x0;
    }
  }
  piVar3 = &DAT_0064b110;
  piVar4 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar2 = (&DAT_006108a8)[iVar2 * 5];
  *param_1 = iVar2;
  if (iVar2 < 6) {
    return param_1;
  }
  if (10 < iVar2) {
    return param_1;
  }
  param_1[2] = 0;
  param_1[3] = 0x403e0000;
  *param_1 = 6;
  switch(iVar2) {
  case 1:
    param_1[2] = 0;
    param_1[3] = 0x403e0000;
    *param_1 = 7;
    return param_1;
  case 2:
    param_1[2] = -0x1daa94d8;
    param_1[3] = 0x403df853;
    *param_1 = 8;
    return param_1;
  case 3:
    param_1[2] = 0;
    param_1[3] = 0x40390000;
    *param_1 = 9;
    return param_1;
  case 4:
    param_1[2] = 0;
    param_1[3] = 0x40380000;
    *param_1 = 10;
    return param_1;
  case 5:
    param_1[2] = -0x1daa94d8;
    param_1[3] = 0x403df853;
    *param_1 = 6;
    return param_1;
  default:
    return param_1;
  }
}


