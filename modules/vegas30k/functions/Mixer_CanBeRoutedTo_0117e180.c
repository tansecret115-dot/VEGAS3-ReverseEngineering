/* Module: vegas30k.dll
   Function: Mixer_CanBeRoutedTo
   Address: 0117e180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_CanBeRoutedTo(unsigned long,unsigned long) */

long Mixer_CanBeRoutedTo(ulong param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint unaff_ESI;
  undefined4 local_208;
  ulong local_204;
  undefined1 local_200 [512];
  
                    /* 0x17e180  154  ?Mixer_CanBeRoutedTo@@YGJKK@Z */
  local_208 = 0;
  if ((param_1 != param_2) && (Mixer_GetBusRoute(param_2,&local_204), local_204 == 0xffffffff)) {
    lVar1 = (**(code **)(*DAT_012b09c8 + 0x60))(DAT_012b09c8,local_200,&local_208);
    if (lVar1 < 0) {
      return lVar1;
    }
    uVar2 = 0;
    if (unaff_ESI == 0) {
      return lVar1;
    }
    puVar3 = (uint *)&stack0xfffffdf4;
    while ((uVar2 == param_1 || (*puVar3 != (param_1 | 0x80000000)))) {
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
      if (unaff_ESI <= uVar2) {
        return lVar1;
      }
    }
  }
  return 1;
}


