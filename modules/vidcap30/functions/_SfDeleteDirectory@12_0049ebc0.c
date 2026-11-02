/* Module: vidcap30.exe
   Function: _SfDeleteDirectory@12
   Address: 0049ebc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDeleteDirectory_12(LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
                    /* 0x9ebc0  283  _SfDeleteDirectory@12 */
  DVar1 = GetFileAttributesA(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    uVar2 = FUN_0049e9e0(param_1,param_2,param_3);
    BVar3 = RemoveDirectoryA(param_1);
    if (BVar3 == 0) {
      return 0x80004005;
    }
    return uVar2;
  }
  return 0x8004e00d;
}


