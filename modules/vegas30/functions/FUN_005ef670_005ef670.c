/* Module: vegas30.exe
   Function: FUN_005ef670
   Address: 005ef670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ef670(LPCSTR param_1,undefined4 param_2,int param_3)

{
  UINT uMode;
  HANDLE hObject;
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  uMode = SetErrorMode(1);
  SfPrintF(param_1,"%s.sfap%d",param_3 + 0x170,param_2);
  hObject = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    iVar1 = lstrlenA(&DAT_006479a0);
    if (iVar1 != 0) {
      uVar2 = _SfGetFileNamePtrA_4(param_3 + 0x170);
      SfPrintF(param_1,"%s%s.sfap%d",&DAT_006479a0,uVar2,param_2);
      hObject = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) goto LAB_005ef71e;
    }
    *param_1 = '\0';
    DVar3 = GetLastError();
    uVar2 = _SfErrorHandler_TranslateWin32Error_4(DVar3);
  }
  else {
LAB_005ef71e:
    CloseHandle(hObject);
    uVar2 = 0;
  }
  SetErrorMode(uMode);
  return uVar2;
}


