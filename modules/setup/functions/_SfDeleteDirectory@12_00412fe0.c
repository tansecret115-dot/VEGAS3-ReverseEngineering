/* Module: Setup.exe
   Function: _SfDeleteDirectory@12
   Address: 00412fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDeleteDirectory_12(uchar *param_1,uchar *param_2,int param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
                    /* 0x12fe0  98  _SfDeleteDirectory@12 */
  DVar1 = GetFileAttributesA((LPCSTR)param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    uVar2 = FUN_00412e00(param_1,param_2,param_3);
    BVar3 = RemoveDirectoryA((LPCSTR)param_1);
    if (BVar3 == 0) {
      return 0x80004005;
    }
    return uVar2;
  }
  return 0x8004e00d;
}


