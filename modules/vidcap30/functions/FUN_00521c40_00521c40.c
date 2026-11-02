/* Module: vidcap30.exe
   Function: FUN_00521c40
   Address: 00521c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00521c40(HDC param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == (HDC)0x0;
  if (bVar2) {
    param_1 = GetDC((HWND)0x0);
  }
  iVar1 = GetDeviceCaps(param_1,0x58);
  iVar1 = MulDiv(iVar1,param_2,0x9ec);
  if (bVar2) {
    ReleaseDC((HWND)0x0,param_1);
  }
  return iVar1;
}


