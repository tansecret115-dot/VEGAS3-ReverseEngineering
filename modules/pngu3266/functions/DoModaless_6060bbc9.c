/* Module: pngu3266.dll
   Function: DoModaless
   Address: 6060bbc9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNDialog::DoModaless(void) */

ulong __thiscall XPNDialog::DoModaless(XPNDialog *this)

{
  ulong uVar1;
  
                    /* 0x1bbc9  971  ?DoModaless@XPNDialog@@UAEKXZ */
                    /* WARNING: Could not recover jumptable at 0x6060bbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)this + 0x11c))();
  return uVar1;
}


