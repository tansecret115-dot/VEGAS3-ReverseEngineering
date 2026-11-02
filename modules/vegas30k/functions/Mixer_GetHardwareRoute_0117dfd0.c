/* Module: vegas30k.dll
   Function: Mixer_GetHardwareRoute
   Address: 0117dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetHardwareRoute(unsigned long,unsigned long *) */

long Mixer_GetHardwareRoute(ulong param_1,ulong *param_2)

{
  long lVar1;
  undefined1 local_200 [504];
  undefined1 *puStack_8;
  
                    /* 0x17dfd0  178  ?Mixer_GetHardwareRoute@@YGJKPAK@Z */
  Mixer_GetNumHardwareBuses((ISFMixer *)0x0);
  *param_2 = 0xffffffff;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x60))(DAT_012b09c8);
  if (((-1 < lVar1) && (puStack_8 < local_200)) &&
     ((*(uint *)(local_200 + (int)puStack_8 * 4 + -0xc) & 0x80000000) == 0)) {
    *param_2 = *(uint *)(local_200 + (int)puStack_8 * 4 + -0xc);
    return lVar1;
  }
  return 1;
}


