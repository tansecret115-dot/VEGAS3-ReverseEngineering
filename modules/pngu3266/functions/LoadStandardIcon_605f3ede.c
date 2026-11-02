/* Module: pngu3266.dll
   Function: LoadStandardIcon
   Address: 605f3ede
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNIcon::LoadStandardIcon(unsigned long) */

int __thiscall CPNIcon::LoadStandardIcon(CPNIcon *this,ulong param_1)

{
  LPCSTR lpIconName;
  HICON pHVar1;
  
                    /* 0x3ede  1548  ?LoadStandardIcon@CPNIcon@@UAEHK@Z */
  if (param_1 != 0) {
    if (param_1 == 1) {
      lpIconName = (LPCSTR)0x7f04;
      goto LAB_605f3f21;
    }
    if (param_1 == 2) {
      lpIconName = (LPCSTR)0x7f03;
      goto LAB_605f3f21;
    }
    if (param_1 == 3) {
      lpIconName = (LPCSTR)0x7f01;
      goto LAB_605f3f21;
    }
    if (param_1 == 4) {
      lpIconName = (LPCSTR)0x7f02;
      goto LAB_605f3f21;
    }
    if (param_1 == 5) {
      lpIconName = (LPCSTR)0x7f05;
      goto LAB_605f3f21;
    }
  }
  lpIconName = (LPCSTR)0x7f00;
LAB_605f3f21:
  pHVar1 = ::LoadIconA((HINSTANCE)0x0,lpIconName);
  *(HICON *)(this + 0x2a) = pHVar1;
  return (uint)(pHVar1 != (HICON)0x0);
}


