/* Module: sfmarket2.dll
   Function: FUN_004216a0
   Address: 004216a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004216a0(uchar *param_1,uchar *param_2,int param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
  DVar1 = GetFileAttributesA((LPCSTR)param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    uVar2 = FUN_004214c0(param_1,param_2,param_3);
    BVar3 = RemoveDirectoryA((LPCSTR)param_1);
    if (BVar3 == 0) {
      return 0x80004005;
    }
    return uVar2;
  }
  return 0x8004e00d;
}


