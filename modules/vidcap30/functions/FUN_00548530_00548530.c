/* Module: vidcap30.exe
   Function: FUN_00548530
   Address: 00548530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00548530(int param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = param_1;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 8);
  iVar3 = (**(code **)*puVar1)(puVar1,&DAT_005a5c48);
  if (iVar3 == 0) {
    piVar4 = (int *)0xffffffff;
    (**(code **)(param_1 + 0x24))(&param_1,1,0xffffffff,0,*(int *)(iVar2 + 8) + 0x18);
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  hWnd = *(HWND *)(*(int *)(*(int *)(iVar2 + 8) + 0x94) + 0x28);
  if (hWnd != (HWND)0x0) {
    InvalidateRect(hWnd,(RECT *)0x0,1);
  }
  return;
}


