/* Module: sfpaplug.dll
   Function: FUN_0040f020
   Address: 0040f020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040f020(int param_1)

{
  int iVar1;
  uchar *_Dest;
  HANDLE hObject;
  uchar auStack_318 [260];
  WCHAR aWStack_214 [6];
  undefined1 local_208 [520];
  
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (*(int *)(param_1 + 0x14) != 0)) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))
                    (*(int **)(param_1 + 0x18),local_208,0x104);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = FUN_0042baa0((int *)(param_1 + 0xc),4,-1,-1,0x80000002);
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = FUN_0042baa0((int *)(param_1 + 0x10),4,-1,-1,0x80000002);
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = FUN_0042baa0((int *)(param_1 + 0x14),4,-1,-1,0x80000002);
    }
    if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffbe4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    FUN_0040ce70(*(int *)(param_1 + 0x18),(undefined4 *)&stack0xfffffbe0);
    _mbscpy(auStack_318,&stack0xfffffbe4);
    _Dest = (uchar *)FUN_00413460((LPCSTR)auStack_318);
    _mbscpy(_Dest,".SFL");
    hObject = CreateFileA((LPCSTR)auStack_318,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                          (HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      CloseHandle(hObject);
    }
  }
  return iVar1;
}


