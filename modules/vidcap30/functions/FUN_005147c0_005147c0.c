/* Module: vidcap30.exe
   Function: FUN_005147c0
   Address: 005147c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005147c0(HDC param_1,HANDLE param_2,int param_3,int param_4,int param_5)

{
  HDC hdc;
  HGDIOBJ h;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    h = SelectObject(hdc,param_2);
    if (param_5 == 0) {
      BitBlt(param_1,0,0,param_3,param_4,hdc,0,0,0xcc0020);
    }
    else {
      GetObjectA(param_2,0x18,local_18);
      StretchBlt(param_1,0,0,param_3,param_4,hdc,0,0,local_14,local_10,0xcc0020);
    }
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  return;
}


