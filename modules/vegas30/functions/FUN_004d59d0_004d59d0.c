/* Module: vegas30.exe
   Function: FUN_004d59d0
   Address: 004d59d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004d59d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint unaff_retaddr;
  
  if (param_1[0x95] != 0) {
    iVar1 = FUN_005b87b0(param_1[0x95]);
    if (iVar1 != 0) {
      if (param_1[0x95] == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_005b87b0(param_1[0x95]);
      }
      iVar1 = *piVar2;
      goto LAB_004d5a01;
    }
  }
  iVar1 = 0;
LAB_004d5a01:
  param_1[0x94] = iVar1;
  (**(code **)(*param_1 + 0x38))(iVar1 * 0x50);
  (**(code **)(*param_1 + 0x44))(0);
  if ((unaff_retaddr & 0x200) != 0) {
    InvalidateRect((HWND)param_1[9],(RECT *)0x0,0);
  }
  return;
}


