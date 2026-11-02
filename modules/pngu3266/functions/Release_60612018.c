/* Module: pngu3266.dll
   Function: Release
   Address: 60612018
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __stdcall XPNTimer::Release(void) */

ulong XPNTimer::Release(void)

{
  LONG LVar1;
  ulong uVar2;
  int in_stack_00000004;
  
                    /* 0x22018  1744  ?Release@XPNTimer@@UAGKXZ */
  LVar1 = InterlockedDecrement((LONG *)(in_stack_00000004 + 0x14));
  if (LVar1 < 1) {
    if (in_stack_00000004 != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000004 + 4))(1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(in_stack_00000004 + 0x14);
  }
  return uVar2;
}


