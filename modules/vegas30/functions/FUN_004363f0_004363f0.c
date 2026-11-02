/* Module: vegas30.exe
   Function: FUN_004363f0
   Address: 004363f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004363f0(int param_1,int param_2)

{
  HANDLE hObject;
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return -0x7ffb1ff4;
  }
  if (param_2 == 0) {
    return 0;
  }
  hObject = CreateFileA((LPCSTR)(param_1 + 0x30),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,
                        0x10000080,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  iVar1 = FUN_005dffd0(hObject,DAT_0064b138,param_1);
  CloseHandle(hObject);
  if (-1 < iVar1) {
    FUN_004011a0();
    iVar1 = FUN_00432f40(DAT_0064b138);
  }
  return iVar1;
}


