/* Module: vegas30k.dll
   Function: FUN_011790d0
   Address: 011790d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011790d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Mixer_IsRenderingPrepared();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_012b09c8 + 0x1d0))
                    (DAT_012b09c8,DAT_012b0afc,param_1,DAT_012b0b00,param_2);
  if ((-1 < iVar1) && (DAT_012b0b0c != 0)) {
    iVar1 = (**(code **)(*DAT_012b09c8 + 0x1d8))(DAT_012b09c8,DAT_012b0b0c,DAT_012b0b10);
    if (iVar1 < 0) {
      (**(code **)(*DAT_012b09c8 + 0x1d4))(DAT_012b09c8);
    }
  }
  return iVar1;
}


