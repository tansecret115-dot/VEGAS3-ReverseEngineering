/* Module: sfpaplug.dll
   Function: FUN_00409ab0
   Address: 00409ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409ab0(int param_1)

{
  int *piVar1;
  int iVar2;
  uchar *hObject;
  int iVar3;
  uchar *hObject_00;
  undefined4 *unaff_EBP;
  int unaff_EDI;
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
  iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))
                    (*(int **)(param_1 + 0x18),local_208,0x104);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (*piVar1 == 0) {
    FUN_0042baa0(piVar1,4,-1,-1,0x80000002);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0042baa0((int *)(param_1 + 0x10),4,-1,-1,0x80000002);
  }
  piVar1 = (int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_0042baa0(piVar1,4,-1,-1,0x80000002);
  }
  if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_214,-1,(LPSTR)auStack_41c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x41c) {
    auStack_41c[0] = '\0';
  }
  uStack_319 = 0;
  FUN_00406840(*(int *)(param_1 + 0x18),(undefined4 *)&stack0xfffffbd8);
  if (unaff_EDI == 0) {
    unaff_EDI = 0xac44;
  }
  hObject = CreateFileA((LPCSTR)auStack_41c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                        (HANDLE)0x0);
  if (hObject == (uchar *)0xffffffff) {
    return -0x7ffb1ff9;
  }
  FUN_0042c090(hObject,unaff_EDI,(int *)*unaff_EBP);
  iVar2 = FUN_0042d630(auStack_41c,auStack_318,0x104,1);
  if (-1 < iVar2) {
    iVar3 = FUN_0042d540((LPCSTR)auStack_41c,(LPCSTR)auStack_318);
    if (iVar3 == 0) {
      FUN_0042d630(auStack_41c,auStack_318,0x104,0);
      iVar3 = FUN_0042d540((LPCSTR)auStack_41c,(LPCSTR)auStack_318);
      if (iVar3 == 0) goto LAB_00409cd2;
    }
    hObject_00 = CreateFileA((LPCSTR)auStack_318,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000
                             ,(HANDLE)0x0);
    if (hObject_00 != (uchar *)0xffffffff) {
      FUN_0042c090(hObject_00,unaff_EDI,(int *)*unaff_EBP);
      FUN_0042c560(hObject_00,(int *)*piVar1);
      CloseHandle(hObject_00);
    }
  }
LAB_00409cd2:
  FUN_0042c560(hObject,(int *)*piVar1);
  CloseHandle(hObject);
  return iVar2;
}


