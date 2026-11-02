/* Module: wavplug.dll
   Function: FUN_5f38e9f0
   Address: 5f38e9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38e9f0(int param_1)

{
  int iVar1;
  int iVar2;
  uchar *hObject;
  undefined4 *unaff_ESI;
  int unaff_EDI;
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
      FUN_5f3a2b90((int *)(param_1 + 0xc),4,-1,-1,0x80000002);
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_5f3a2b90((int *)(param_1 + 0x10),4,-1,-1,0x80000002);
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_5f3a2b90((int *)(param_1 + 0x14),4,-1,-1,0x80000002);
    }
    if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffbe4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    FUN_5f38cfe0(*(int *)(param_1 + 0x18),(undefined4 *)&stack0xfffffbdc);
    if (unaff_EDI == 0) {
      unaff_EDI = 0xac44;
    }
    iVar1 = FUN_5f3a4dc0(&stack0xfffffbe4,auStack_318,0x104,1);
    if (-1 < iVar1) {
      iVar2 = FUN_5f3a4cd0(&stack0xfffffbe4,(LPCSTR)auStack_318);
      if (iVar2 == 0) {
        FUN_5f3a4dc0(&stack0xfffffbe4,auStack_318,0x104,0);
        iVar2 = FUN_5f3a4cd0(&stack0xfffffbe4,(LPCSTR)auStack_318);
        if (iVar2 == 0) {
          return iVar1;
        }
      }
      hObject = CreateFileA((LPCSTR)auStack_318,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                            (HANDLE)0x0);
      if (hObject != (uchar *)0xffffffff) {
        FUN_5f3a3820(hObject,unaff_EDI,(int *)*unaff_ESI);
        FUN_5f3a3cf0(hObject,*(int **)(param_1 + 0x14));
        CloseHandle(hObject);
      }
    }
  }
  return iVar1;
}


