/* Module: vegas30k.dll
   Function: Mixer_SetRouting
   Address: 0117e540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetRouting(enum EMIXERTYPE,unsigned long *,unsigned long) */

long Mixer_SetRouting(EMIXERTYPE param_1,ulong *param_2,ulong param_3)

{
  EMIXERTYPE EVar1;
  uint *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 local_200 [508];
  int iStack_4;
  
                    /* 0x17e540  240  ?Mixer_SetRouting@@YGJW4EMIXERTYPE@@PAKK@Z */
  lVar4 = 0;
  Mixer_Unprepare();
  EVar1 = Mixer_GetMixerType((ISFMixer *)0x0);
  if (EVar1 == param_1) {
    puVar5 = local_200;
    (**(code **)(*(int *)DAT_012b09c8 + 0x60))(DAT_012b09c8);
    if (puVar5 != (undefined1 *)0x0) {
      puVar2 = (uint *)&stack0xfffffdf4;
      puVar3 = puVar5;
      do {
        if ((*puVar2 & 0x80000000) == 0) {
          *puVar2 = *(uint *)((iStack_4 - (int)&stack0xfffffdf4) + (int)puVar2);
        }
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + -1;
      } while (puVar3 != (undefined1 *)0x0);
    }
    lVar4 = (**(code **)(*(int *)DAT_012b09c8 + 100))(DAT_012b09c8,&stack0xfffffdf4,puVar5);
    Mixer_AssignMetronomePort(DAT_012b09c8,DAT_012b0998);
  }
  Mixer_Prepare();
  return lVar4;
}


