/* Module: vegas30.exe
   Function: FUN_0051e1d0
   Address: 0051e1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051e1d0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  FUN_0051ddc0(param_1,0);
  FUN_0051df70(param_1);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    ShowWindow(*(HWND *)(param_1 + 0x180),0);
    ShowWindow(*(HWND *)(param_1 + 0x168),0);
    iVar3 = 0;
  }
  else {
    ShowWindow(*(HWND *)(param_1 + 0x180),5);
    ShowWindow(*(HWND *)(param_1 + 0x168),5);
    iVar3 = 5;
  }
  ShowWindow(*(HWND *)(param_1 + 0x210),iVar3);
  puVar2 = (uint *)(param_1 + 0xac);
  iVar3 = 0x10;
  do {
    uVar1 = ((*(int *)(param_1 + 0xa8) << 0x1f) >> 0x1f ^ *puVar2) & 1 ^ *puVar2;
    *puVar2 = uVar1;
    if (((HWND)puVar2[5] != (HWND)0x0) && ((uVar1 & 4) == 0)) {
      EnableWindow((HWND)puVar2[5],(int)(uVar1 << 0x1f) >> 0x1f);
    }
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
  return;
}


