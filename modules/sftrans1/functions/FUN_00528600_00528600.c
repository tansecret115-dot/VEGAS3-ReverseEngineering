/* Module: sftrans1.dll
   Function: FUN_00528600
   Address: 00528600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00528600(HDC param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  COLORREF color;
  uint uVar4;
  uint uVar5;
  int x;
  int y;
  bool bVar6;
  
  uVar5 = 0;
  iVar3 = param_2[2] - *param_2;
  iVar1 = (param_2[3] - param_2[1]) + -2 + iVar3;
  iVar2 = (param_2[3] - param_2[1]) + -3 + iVar3 * 2;
  if (iVar1 * 2 < 1) {
    return 1;
  }
  do {
    if ((int)uVar5 < iVar3 + -1) {
      y = param_2[1];
      x = *param_2 + uVar5;
    }
    else if ((int)uVar5 < iVar1) {
      x = param_2[2] + -1;
      y = (param_2[1] - (iVar3 + -1)) + uVar5;
    }
    else if ((int)uVar5 < iVar2) {
      x = (iVar1 - uVar5) + -1 + param_2[2];
      y = param_2[3] + -1;
    }
    else {
      x = *param_2;
      y = (param_2[3] - uVar5) + -1 + iVar2;
    }
    uVar4 = uVar5 & 0x80000001;
    bVar6 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar6) {
      color = 0;
    }
    else {
      color = GetSysColor(0xf);
    }
    SetPixel(param_1,x,y,color);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < iVar1 * 2);
  return 1;
}


