/* Module: vegas30.exe
   Function: FUN_004c7920
   Address: 004c7920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c7920(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1;
  iVar2 = param_1 + (param_1 >> 0x1f & 0x1fU);
  iVar3 = 0;
  iVar4 = ((iVar2 >> 5) - (iVar2 >> 0x1f) >> 1) + -1;
  iVar2 = 1;
  iVar5 = 0;
  if (-1 < iVar4) {
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar1;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          iVar3 = (int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 3U)) >> 2;
        }
        else {
          iVar3 = iVar1 / iVar5;
        }
      }
      if (iVar3 < param_3) goto LAB_004c79cb;
      if (param_3 < iVar3) {
        param_1 = iVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
  }
  iVar1 = iVar3 + -0x10;
  if (iVar1 < 0x41) {
    iVar3 = ((int)(iVar3 + -8 + (iVar3 + -8 >> 0x1f & 0xfU)) >> 4) << 4;
  }
  else {
    iVar3 = ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 5;
  }
  for (; (0x18 < iVar3 && (iVar2 = iVar2 + 1, param_3 <= iVar3)); iVar3 = iVar3 + iVar1) {
    if (param_3 < iVar3) {
      param_1 = iVar3;
    }
    if (iVar3 < 0x41) {
      iVar1 = -0x10;
    }
    else {
      iVar1 = -0x20;
    }
  }
LAB_004c79cb:
  if (param_2 != 0) {
    if (param_2 == 1) {
      return param_1;
    }
    if (param_2 == 2) {
      return iVar2;
    }
    iVar3 = 0;
  }
  return iVar3;
}


