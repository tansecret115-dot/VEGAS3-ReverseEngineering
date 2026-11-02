/* Module: vidcap30.exe
   Function: FUN_00434920
   Address: 00434920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00434920(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x1c34) & 0x200) == 0) {
    iVar2 = *(int *)(DAT_005ba4c0 + 0x6c);
    pbVar1 = (byte *)(iVar2 + 0x1ae8);
    if ((*(byte *)(iVar2 + 0x1ae8) & 4) == 0) {
      FUN_0043b8d0(iVar2,3,1);
    }
    if ((*pbVar1 & 0x40) == 0) {
      SfMsgBox(*(undefined4 *)(iVar2 + 8),0x40,
               "The selected clips could not be batch captured.\n\nNo capture device is present.");
      return;
    }
    PostMessageA(*(HWND *)(iVar2 + 8),0x410,1,0);
    FUN_00409c30(DAT_005ba4c0,1);
    FUN_0043fe90(iVar2,pbVar1);
    FUN_00440040(iVar2,pbVar1,iVar2 + 0x1aec);
    FUN_0043efc0(iVar2);
  }
  return;
}


