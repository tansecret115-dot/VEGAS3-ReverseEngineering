/* Module: pngu3266.dll
   Function: GetSingleInstanceId
   Address: 6060bbb8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNDialog::GetSingleInstanceId(void) */

ulong __thiscall XPNDialog::GetSingleInstanceId(XPNDialog *this)

{
                    /* 0x1bbb8  1350  ?GetSingleInstanceId@XPNDialog@@UAEKXZ
                       0x1bbb8  1383  ?GetTemplateId@XPNDialog@@UBEKXZ */
  return *(ulong *)(this + 0xb8);
}


