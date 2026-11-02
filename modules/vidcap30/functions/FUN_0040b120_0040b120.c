/* Module: vidcap30.exe
   Function: FUN_0040b120
   Address: 0040b120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b120(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  tagRECT local_10;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x4c) != 3) {
      return 0;
    }
    if (DAT_005ba52c == *(int *)(param_1 + 8)) {
      DAT_005ba52c = 0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x4c) == 3) {
      return 0;
    }
    DAT_005ba52c = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x4c) = 3;
  }
  puVar2 = (undefined4 *)(param_1 + 8);
  GetWindowRect((HWND)*puVar2,&local_10);
  iVar1 = GetSystemMetrics(4);
  if ((iVar1 * 7) / 0xc < 10) {
    iVar1 = 9;
  }
  else {
    iVar1 = GetSystemMetrics(4);
    iVar1 = (iVar1 * 7) / 0xc;
  }
  local_10.bottom = iVar1 + 4 + local_10.top;
  MapWindowPoints((HWND)0x0,(HWND)*puVar2,(LPPOINT)&local_10,2);
  RedrawWindow((HWND)*puVar2,&local_10,(HRGN)0x0,0x501);
  return 1;
}


