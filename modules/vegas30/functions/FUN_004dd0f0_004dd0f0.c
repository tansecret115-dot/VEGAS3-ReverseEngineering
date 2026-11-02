/* Module: vegas30.exe
   Function: FUN_004dd0f0
   Address: 004dd0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dd0f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd50);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x134) & 0x20) != 0) {
      SfMsgBox(DAT_00647624,0x30,"Cannot open in Viscosity, media is offline.");
      return;
    }
    if ((*(byte *)(param_1 + 0xd9c) & 2) == 0) {
      SfMsgBox(DAT_00647624,0x30,"Cannot open in Viscosity, media does not contain video.");
      return;
    }
    FUN_004053c0(iVar1 + 0x170);
  }
  return;
}


