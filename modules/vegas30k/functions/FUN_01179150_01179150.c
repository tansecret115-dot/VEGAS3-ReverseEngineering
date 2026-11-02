/* Module: vegas30k.dll
   Function: FUN_01179150
   Address: 01179150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01179150(void)

{
  int iVar1;
  
  iVar1 = Mixer_IsRenderingPrepared();
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*DAT_012b09c8 + 0x1d4))(DAT_012b09c8);
  (**(code **)(*DAT_012b09c8 + 0x1dc))(DAT_012b09c8);
  return;
}


