/* Module: vegas30.exe
   Function: FUN_00500190
   Address: 00500190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00500190(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)GetWindowLongA(*(HWND *)(param_1 + 0x84),0);
  piVar1 = (int *)puVar2[0x5e];
  iVar5 = puVar2[0x60];
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(piVar1[2] + iVar5 * 4);
  }
  FUN_004fece0(puVar2);
  uVar3 = 0;
  if (iVar5 != 0) {
    uVar3 = *(undefined4 *)(iVar5 + 0x150);
  }
  FUN_004fb050(puVar2,0,uVar3,0,1,1);
  FUN_004fa690(puVar2);
  FUN_004fa690(puVar2);
  InvalidateRect((HWND)*puVar2,(RECT *)0x0,0);
  return;
}


