/* Module: sctplug.dll
   Function: FUN_004073a0
   Address: 004073a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004073a0(int param_1)

{
  int *piVar1;
  int iVar2;
  uchar *hObject;
  int iVar3;
  uchar *hObject_00;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  uchar auStack_41c [8];
  int *local_414;
  undefined1 uStack_319;
  uchar auStack_318 [260];
  WCHAR aWStack_214 [6];
  undefined1 local_208 [520];
  
  piVar1 = (int *)(param_1 + 0xc);
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (*(int *)(param_1 + 0x14) != 0)) {
    return 0;
  }
  local_414 = piVar1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x34))
                    (*(int **)(param_1 + 0x1c0),local_208,0x104);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (*piVar1 == 0) {
    FUN_0041cba0(piVar1,4,-1,-1,0x80000002);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0041cba0((int *)(param_1 + 0x10),4,-1,-1,0x80000002);
  }
  piVar1 = (int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_0041cba0(piVar1,4,-1,-1,0x80000002);
  }
  if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_214,-1,(LPSTR)auStack_41c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x41c) {
    auStack_41c[0] = '\0';
  }
  uStack_319 = 0;
  FUN_00404ef0(*(int *)(param_1 + 0x1c0),(undefined4 *)&stack0xfffffbd8);
  if (unaff_ESI == 0) {
    unaff_ESI = 0xac44;
  }
  hObject = CreateFileA((LPCSTR)auStack_41c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                        (HANDLE)0x0);
  if (hObject == (uchar *)0xffffffff) {
    return -0x7ffb1ff9;
  }
  FUN_004072e0(hObject,(undefined4 *)(param_1 + 0x18));
  FUN_0041d190(hObject,unaff_ESI,(int *)*unaff_EBX);
  iVar2 = FUN_0041e730(auStack_41c,auStack_318,0x104,1);
  if (-1 < iVar2) {
    iVar3 = FUN_0041e640((LPCSTR)auStack_41c,(LPCSTR)auStack_318);
    if (iVar3 == 0) {
      FUN_0041e730(auStack_41c,auStack_318,0x104,0);
      iVar3 = FUN_0041e640((LPCSTR)auStack_41c,(LPCSTR)auStack_318);
      if (iVar3 == 0) goto LAB_004075d7;
    }
    hObject_00 = CreateFileA((LPCSTR)auStack_318,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000
                             ,(HANDLE)0x0);
    if (hObject_00 != (uchar *)0xffffffff) {
      FUN_0041d190(hObject_00,unaff_ESI,(int *)*unaff_EBX);
      FUN_0041d660(hObject_00,(int *)*piVar1);
      CloseHandle(hObject_00);
    }
  }
LAB_004075d7:
  FUN_0041d660(hObject,(int *)*piVar1);
  CloseHandle(hObject);
  return iVar2;
}


