/* Module: pngu3266.dll
   Function: GetId
   Address: 605f3406
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNControl::GetId(void)const  */

ulong __thiscall CPNControl::GetId(CPNControl *this)

{
  ulong uVar1;
  
                    /* 0x3406  1214  ?GetId@CPNControl@@UBEKXZ */
  uVar1 = GetWindowLongA(*(HWND *)(this + 0xc),-0xc);
  return uVar1;
}


