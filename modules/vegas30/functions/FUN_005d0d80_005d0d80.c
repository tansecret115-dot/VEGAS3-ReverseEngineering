/* Module: vegas30.exe
   Function: FUN_005d0d80
   Address: 005d0d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d0d80(int *param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  undefined1 *puStack_18;
  undefined1 local_10 [16];
  
  puStack_18 = local_10;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (-1 < iVar1) {
    iVar1 = _SfPlugIn_FindNode_8(DAT_0064b468,&puStack_18);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 4) != 0)) {
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&DAT_0060f788,unaff_retaddr);
      return iVar1;
    }
    iVar1 = -0x7fffbffe;
  }
  return iVar1;
}


