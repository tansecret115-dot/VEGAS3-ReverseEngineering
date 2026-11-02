/* Module: vegas30k.dll
   Function: Mixer_GetPreviewPort
   Address: 0117e3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetPreviewPort(unsigned long &) */

long Mixer_GetPreviewPort(ulong *param_1)

{
  int iVar1;
  int *unaff_retaddr;
  
                    /* 0x17e3e0  194  ?Mixer_GetPreviewPort@@YGJAAK@Z */
  iVar1 = (**(code **)(*DAT_012b09c8 + 0xac))(DAT_012b09c8);
  *unaff_retaddr = iVar1;
  return (uint)(iVar1 == -1);
}


