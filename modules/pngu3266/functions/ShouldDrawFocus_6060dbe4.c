/* Module: pngu3266.dll
   Function: ShouldDrawFocus
   Address: 6060dbe4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall XPNWindow::ShouldDrawFocus(void) */

int __thiscall XPNWindow::ShouldDrawFocus(XPNWindow *this)

{
  int iVar1;
  
                    /* 0x1dbe4  2059  ?ShouldDrawFocus@XPNWindow@@MAEHXZ */
                    /* WARNING: Could not recover jumptable at 0x6060dbe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(int *)this + 0x94))();
  return iVar1;
}


