/* Module: vegas30.exe
   Function: FUN_004e85b0
   Address: 004e85b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e85b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uchar local_30 [48];
  
  if (param_1 < DAT_0064d9f4) {
    uVar1 = _SfVPrintF_12(local_30,param_4,&stack0x00000014);
    iVar2 = param_1 * 0x50;
    iVar3 = lstrcmpA((LPCSTR)(iVar2 + 0x64d010),(LPCSTR)local_30);
    if (iVar3 != 0) {
      _mbscpy((uchar *)(iVar2 + 0x64d010),local_30);
      *(undefined4 *)(&DAT_0064d040 + iVar2) = param_3;
      iVar3 = MulDiv(param_2,*(int *)(&DAT_0064d004 + iVar2),100);
      *(int *)(&DAT_0064d008 + param_1 * 0x50) = iVar3;
      if (DAT_0064ce28 != (HWND)0x0) {
        InvalidateRect(DAT_0064ce28,(RECT *)(iVar2 + 0x64cff4),0);
      }
    }
    return uVar1;
  }
  return param_4;
}


