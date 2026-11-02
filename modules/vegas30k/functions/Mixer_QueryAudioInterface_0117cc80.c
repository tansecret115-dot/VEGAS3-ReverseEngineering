/* Module: vegas30k.dll
   Function: Mixer_QueryAudioInterface
   Address: 0117cc80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_QueryAudioInterface(struct _GUID const &,void * *) */

long Mixer_QueryAudioInterface(_GUID *param_1,void **param_2)

{
  long lVar1;
  int iVar2;
  
                    /* 0x17cc80  213  ?Mixer_QueryAudioInterface@@YGJABU_GUID@@PAPAX@Z */
  *param_2 = (void *)0x0;
  lVar1 = -0x7fffbffe;
  if (DAT_012b09c4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_012b09c4 + 0x10))(DAT_012b09c4,param_1,param_2);
    if (-1 < iVar2) {
      return iVar2;
    }
    lVar1 = (**(code **)*DAT_012b09c4)(DAT_012b09c4,param_1,param_2);
    if (-1 < lVar1) {
      return lVar1;
    }
  }
  if ((DAT_012b09c8 != (int *)0x0) &&
     (lVar1 = (**(code **)(*DAT_012b09c8 + 0x10))(DAT_012b09c8,param_1,param_2), lVar1 < 0)) {
    lVar1 = (**(code **)*DAT_012b09c8)(DAT_012b09c8,param_1,param_2);
  }
  return lVar1;
}


