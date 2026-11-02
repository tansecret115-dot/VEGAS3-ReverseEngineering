/* Module: vegas30k.dll
   Function: Mixer_RemoveAllBusFX
   Address: 011813d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_RemoveAllBusFX(struct ISFMixer *) */

long Mixer_RemoveAllBusFX(ISFMixer *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
                    /* 0x1813d0  215  ?Mixer_RemoveAllBusFX@@YGJPAUISFMixer@@@Z */
  if (param_1 == (ISFMixer *)0x0) {
    param_1 = DAT_012b09c8;
  }
  uVar1 = Mixer_GetNumMainBuses(param_1);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = Mixer_SetDeviceGraph((ISFGraphBuilder *)0x0,1,uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    return lVar2;
  }
  return 1;
}


