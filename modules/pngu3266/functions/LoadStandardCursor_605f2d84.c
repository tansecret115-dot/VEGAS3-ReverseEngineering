/* Module: pngu3266.dll
   Function: LoadStandardCursor
   Address: 605f2d84
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCursor::LoadStandardCursor(long) */

int __thiscall CPNCursor::LoadStandardCursor(CPNCursor *this,long param_1)

{
  LPCSTR lpCursorName;
  HCURSOR pHVar1;
  
                    /* 0x2d84  1547  ?LoadStandardCursor@CPNCursor@@UAEHJ@Z */
  switch(param_1) {
  case 0:
    lpCursorName = (LPCSTR)0x7f8a;
    break;
  default:
    lpCursorName = (LPCSTR)0x7f00;
    break;
  case 2:
    lpCursorName = (LPCSTR)0x7f03;
    break;
  case 3:
    lpCursorName = (LPCSTR)0x7f01;
    break;
  case 4:
    lpCursorName = (LPCSTR)0x7f81;
    break;
  case 5:
    lpCursorName = (LPCSTR)0x7f88;
    break;
  case 6:
    lpCursorName = (LPCSTR)0x7f80;
    break;
  case 7:
    lpCursorName = (LPCSTR)0x7f86;
    break;
  case 8:
    lpCursorName = (LPCSTR)0x7f83;
    break;
  case 9:
    lpCursorName = (LPCSTR)0x7f85;
    break;
  case 10:
    lpCursorName = (LPCSTR)0x7f82;
    break;
  case 0xb:
    lpCursorName = (LPCSTR)0x7f84;
    break;
  case 0xc:
    lpCursorName = (LPCSTR)0x7f04;
    break;
  case 0xd:
    lpCursorName = (LPCSTR)0x7f02;
  }
  pHVar1 = ::LoadCursorA((HINSTANCE)0x0,lpCursorName);
  *(HCURSOR *)(this + 8) = pHVar1;
  return (uint)(pHVar1 != (HCURSOR)0x0);
}


