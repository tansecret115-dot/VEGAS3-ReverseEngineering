/* Module: vegas30k.dll
   Function: Mixer_GetBusRoute
   Address: 0117e100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetBusRoute(unsigned long,unsigned long *) */

long Mixer_GetBusRoute(ulong param_1,ulong *param_2)

{
  long lVar1;
  undefined1 local_200 [504];
  undefined1 *puStack_8;
  
                    /* 0x17e100  163  ?Mixer_GetBusRoute@@YGJKPAK@Z */
  Mixer_GetNumHardwareBuses((ISFMixer *)0x0);
  *param_2 = 0xffffffff;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x60))(DAT_012b09c8);
  if ((-1 < lVar1) && (puStack_8 < local_200)) {
    if ((*(uint *)(local_200 + (int)puStack_8 * 4 + -0xc) & 0x80000000) != 0) {
      *param_2 = *(uint *)(local_200 + (int)puStack_8 * 4 + -0xc) & 0x7fffffff;
      return 0;
    }
    lVar1 = 1;
  }
  return lVar1;
}


