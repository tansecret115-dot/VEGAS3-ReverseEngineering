/* Module: vegas30.exe
   Function: FUN_0055df80
   Address: 0055df80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0055df80(uchar *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0055df30();
  if (iVar1 == 0) {
    _mbscpy(param_1,(uchar *)**(undefined4 **)(DAT_00659524 + 8));
    iVar1 = _SfList_DeleteList_16(DAT_00659524,0,1,1);
    return -1 < iVar1;
  }
  return false;
}


