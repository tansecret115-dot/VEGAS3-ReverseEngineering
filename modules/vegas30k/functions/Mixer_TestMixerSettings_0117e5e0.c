/* Module: vegas30k.dll
   Function: Mixer_TestMixerSettings
   Address: 0117e5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0117e684) */
/* WARNING: Removing unreachable block (ram,0x0117e698) */
/* WARNING: Removing unreachable block (ram,0x0117e69a) */
/* long __stdcall Mixer_TestMixerSettings(struct _tmixerprops *) */

long Mixer_TestMixerSettings(_tmixerprops *param_1)

{
  ushort uVar1;
  long lVar2;
  uint *puVar3;
  uint unaff_ESI;
  uint uVar4;
  DWORD local_218;
  WORD local_214;
  WORD local_212;
  int local_210;
  uint local_20c;
  ushort local_208;
  ushort uStack_206;
  undefined2 local_204;
  undefined1 local_200 [512];
  
                    /* 0x17e5e0  246  ?Mixer_TestMixerSettings@@YGJPAU_tmixerprops@@@Z */
  local_214 = DAT_012b09b4;
  local_210 = *(int *)(param_1 + 0x324);
  uVar1 = (*(ushort *)(param_1 + 0x328) >> 3) << 1;
  _local_208 = CONCAT22(*(ushort *)(param_1 + 0x328),uVar1);
  local_20c = (uint)uVar1 * local_210;
  local_218 = 0;
  local_212 = 2;
  local_204 = 0;
  (**(code **)(*DAT_012b09c8 + 0x60))(DAT_012b09c8,local_200,&local_218);
  uVar4 = 0;
  if (unaff_ESI != 0) {
    puVar3 = &local_20c;
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        Mixer_GetHardwareBus((ISFMixerIn **)&stack0xfffffdd8,*puVar3,(ISFMixer *)0x0);
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < unaff_ESI);
  }
  lVar2 = Mixer_TestPreviewPortSettings((tWAVEFORMATEX *)&stack0xfffffde0);
  if (-1 < lVar2) {
    lVar2 = 0;
  }
  return lVar2;
}


