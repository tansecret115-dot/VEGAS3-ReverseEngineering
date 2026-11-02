/* Module: vidcap30.exe
   Function: FUN_00411090
   Address: 00411090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00411090(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 < 4) {
    iVar1 = param_1 * 0x84;
    uVar2 = _SfVPrintF_12(iVar1 + 0x5bc008,param_4,&stack0x00000014);
    *(undefined4 *)(&DAT_005bc06c + iVar1) = param_3;
    iVar3 = MulDiv(param_2,*(int *)(&DAT_005bbffc + iVar1),100);
    *(int *)(&DAT_005bc000 + iVar1) = iVar3;
    if (DAT_005bbe30 != (HWND)0x0) {
      InvalidateRect(DAT_005bbe30,(RECT *)(iVar1 + 0x5bbfec),0);
    }
    return uVar2;
  }
  return param_4;
}


