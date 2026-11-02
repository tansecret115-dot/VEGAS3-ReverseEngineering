/* Module: vegas30k.dll
   Function: Mixer_Prepare
   Address: 011830f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_Prepare(void) */

long Mixer_Prepare(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int local_c;
  ushort local_8;
  ushort uStack_6;
  undefined2 local_4;
  
                    /* 0x1830f0  212  ?Mixer_Prepare@@YGJXZ */
  iVar3 = 1;
  iVar2 = Mixer_IsPlayPrepared();
  if (iVar2 != 0) {
    return 0;
  }
  local_14 = DAT_012b09b8;
  local_10 = DAT_012b0aec;
  uVar1 = (DAT_012b09bc >> 3) << 1;
  _local_8 = CONCAT22(DAT_012b09bc,uVar1);
  local_12 = 2;
  local_c = (uint)uVar1 * DAT_012b0aec;
  local_4 = 0;
  if (((DAT_012b0afc != 0) || (DAT_012b0b04 != 0)) &&
     (iVar3 = (**(code **)(*DAT_012b09c8 + 0xe4))
                        (DAT_012b09c8,&local_14,DAT_012b0afc,DAT_012b0b00,DAT_012b0b04,DAT_012b0b08)
     , iVar3 < 0)) {
    return iVar3;
  }
  if ((DAT_012b0b0c == 0) ||
     (iVar3 = (**(code **)(*DAT_012b09c8 + 0x184))(DAT_012b09c8,DAT_012b0b0c,DAT_012b0b10),
     -1 < iVar3)) {
    if ((DAT_012b0b14 != 0) &&
       (iVar3 = (**(code **)(*DAT_012b09c8 + 0x18c))(DAT_012b09c8,DAT_012b0b14,DAT_012b0b18),
       iVar3 < 0)) {
      if ((DAT_012b0afc != 0) || (DAT_012b0b04 != 0)) {
        (**(code **)(*DAT_012b09c8 + 0xe8))(DAT_012b09c8);
      }
      if (DAT_012b0b0c != 0) {
        (**(code **)(*DAT_012b09c8 + 0x188))(DAT_012b09c8);
      }
    }
    return iVar3;
  }
  if ((DAT_012b0afc == 0) && (DAT_012b0b04 == 0)) {
    return iVar3;
  }
  (**(code **)(*DAT_012b09c8 + 0xe8))(DAT_012b09c8);
  return iVar3;
}


