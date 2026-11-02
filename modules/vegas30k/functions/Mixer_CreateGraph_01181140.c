/* Module: vegas30k.dll
   Function: Mixer_CreateGraph
   Address: 01181140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_CreateGraph(struct ISFGraphBuilder * *) */

long Mixer_CreateGraph(ISFGraphBuilder **param_1)

{
  ISFGraphBuilder **ppIVar1;
  int iVar2;
  ISFGraphBuilder *unaff_ESI;
  int *local_4;
  
                    /* 0x181140  157  ?Mixer_CreateGraph@@YGJPAPAUISFGraphBuilder@@@Z */
  ppIVar1 = param_1;
  local_4 = (int *)0x0;
  *param_1 = (ISFGraphBuilder *)0x0;
  iVar2 = _SfAudio_CreateGraphObject_4(&local_4);
  if (-1 < iVar2) {
    param_1 = (ISFGraphBuilder **)0x0;
    iVar2 = (**(code **)*local_4)(local_4,&DAT_011f0eb0,&param_1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
      if (-1 < iVar2) {
        (**(code **)(*param_1 + 8))(param_1);
        *ppIVar1 = unaff_ESI;
        return 0;
      }
    }
  }
  if (param_1 != (ISFGraphBuilder **)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  return iVar2;
}


