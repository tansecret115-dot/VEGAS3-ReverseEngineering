/* Module: pngu3266.dll
   Function: AddRef
   Address: 60612007
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __stdcall XPNTimer::AddRef(void) */

ulong XPNTimer::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
                    /* 0x22007  768  ?AddRef@XPNTimer@@UAGKXZ */
  uVar1 = InterlockedIncrement((LONG *)(in_stack_00000004 + 0x14));
  return uVar1;
}


