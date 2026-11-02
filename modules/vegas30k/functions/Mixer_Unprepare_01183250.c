/* Module: vegas30k.dll
   Function: Mixer_Unprepare
   Address: 01183250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_Unprepare(void) */

long Mixer_Unprepare(void)

{
  int iVar1;
  int iVar2;
  
                    /* 0x183250  250  ?Mixer_Unprepare@@YGJXZ */
  iVar1 = Mixer_IsPlayPrepared();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_012b09c8 + 0xe8))(DAT_012b09c8);
  iVar1 = 0;
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  iVar2 = (**(code **)(*DAT_012b09c8 + 0x188))(DAT_012b09c8);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  iVar2 = (**(code **)(*DAT_012b09c8 + 400))(DAT_012b09c8);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  (**(code **)(*DAT_012b09c8 + 0x10c))(DAT_012b09c8,0);
  return iVar1;
}


