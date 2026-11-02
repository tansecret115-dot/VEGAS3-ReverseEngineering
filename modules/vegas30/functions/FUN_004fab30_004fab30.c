/* Module: vegas30.exe
   Function: FUN_004fab30
   Address: 004fab30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fab30(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x5f];
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((param_3 < 0) || (iVar2 + -1 < param_3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[2] + param_3 * 4);
  }
  if (param_2 == 0x9d10) {
    FUN_004fafb0(param_1,1);
  }
  if (iVar2 != 0) {
    if ((*(byte *)(iVar2 + 0x11c) & 1) != 0) {
      InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
      return 1;
    }
    InvalidateRect((HWND)*param_1,(RECT *)(iVar2 + 0x108),0);
  }
  return 1;
}


