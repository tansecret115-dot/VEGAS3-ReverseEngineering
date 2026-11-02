/* Module: pngu3266.dll
   Function: GetDefaultButtonId
   Address: 605fc008
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNDialog::GetDefaultButtonId(void)const  */

ulong __thiscall CPNDialog::GetDefaultButtonId(CPNDialog *this)

{
  uint uVar1;
  
                    /* 0xc008  1180  ?GetDefaultButtonId@CPNDialog@@UBEKXZ */
  uVar1 = SendMessageA(*(HWND *)(this + 0xc),0x400,0,0);
  return uVar1 & 0xffff;
}


