/* Module: vegas30.exe
   Function: FUN_004d56c0
   Address: 004d56c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d56c0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  
  param_2 = ((int)param_2 < 1) - 1 & param_2;
  uVar3 = ((int)param_3 < 1) - 1 & param_3;
  uVar1 = param_1[0x51];
  if ((int)uVar1 < 1) {
    uVar5 = 0;
    param_2 = 0;
  }
  else {
    uVar5 = param_1[0x8c];
    if (((int)uVar5 <= (int)uVar3) && (uVar5 = uVar3, (int)uVar1 < (int)uVar3)) {
      uVar5 = uVar1;
    }
    if ((int)uVar1 < (int)(uVar5 + param_2)) {
      param_2 = ((int)(uVar1 - uVar5) < 1) - 1 & uVar1 - uVar5;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x3c))(uVar5);
  param_1[0x52] = iVar2;
  bVar4 = true;
  if ((param_3 & 1) == 0) {
    param_1[0xc] = param_1[0xc] | 1;
  }
  if ((((param_3 & 2) == 0) || (param_1[0x89] != param_2)) || (param_1[0x8a] != uVar5)) {
    iVar2 = param_1[0x4f];
    if ((((param_1[0x49] & 0x100U) != 0) && (param_2 == 0)) && (param_1[0x51] <= (int)uVar5)) {
      bVar4 = false;
    }
    param_1[0x89] = param_2;
    param_1[0x8a] = uVar5;
    InvalidateRect((HWND)param_1[9],(RECT *)0x0,0);
    if (0 < iVar2 != bVar4) {
      FUN_004d5e70(0,param_1[10],param_1[0xb]);
    }
  }
  return;
}


