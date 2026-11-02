/* Module: vegas30.exe
   Function: FUN_00428f30
   Address: 00428f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428f30(int param_1,undefined4 param_2)

{
  int iVar1;
  tagRECT local_10;
  
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) {
    GetClientRect(*(HWND *)(iVar1 + 8),&local_10);
    FUN_00426140(iVar1,local_10.right - local_10.left,local_10.bottom - local_10.top,0,0);
    FUN_00427a70(0,0);
    if (param_1 != 0) {
      FUN_00424100(iVar1,param_2);
    }
  }
  return;
}


