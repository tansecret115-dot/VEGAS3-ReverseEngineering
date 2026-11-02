/* Module: Setup.exe
   Function: FUN_004038c0
   Address: 004038c0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_004038c0(HDC param_1,int param_2,int param_3,int param_4,int param_5,HGDIOBJ param_6,
                 int param_7,int param_8,DWORD param_9)

{
  HDC hdc;
  HGDIOBJ h;
  BOOL BVar1;
  
  hdc = CreateCompatibleDC(param_1);
  h = SelectObject(hdc,param_6);
  BVar1 = BitBlt(param_1,param_2,param_3,param_4,param_5,hdc,param_7,param_8,param_9);
  SelectObject(hdc,h);
  DeleteDC(hdc);
  return BVar1;
}


