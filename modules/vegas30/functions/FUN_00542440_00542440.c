/* Module: vegas30.exe
   Function: FUN_00542440
   Address: 00542440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00542440(int param_1)

{
  HANDLE h;
  int c;
  LOGFONTA *pv;
  LOGFONTA local_3c;
  
  pv = &local_3c;
  c = 0x3c;
  h = (HANDLE)_SfGetUIFont_4(0x6e);
  GetObjectA(h,c,pv);
  local_3c.lfEscapement = 0;
  if (param_1 != 0) {
    local_3c.lfEscapement = -900;
  }
  local_3c.lfOrientation = local_3c.lfEscapement;
  _mbscpy((uchar *)local_3c.lfFaceName,&DAT_00647ab4);
  CreateFontIndirectA(&local_3c);
  return;
}


