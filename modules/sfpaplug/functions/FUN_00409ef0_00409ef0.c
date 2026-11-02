/* Module: sfpaplug.dll
   Function: FUN_00409ef0
   Address: 00409ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409ef0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *hObject;
  WCHAR aWStack_214 [6];
  undefined1 local_208 [520];
  
  piVar1 = (int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))
                    (*(int **)(param_1 + 0x18),local_208,0x104);
  if (-1 < iVar2) {
    if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffce8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    hObject = CreateFileA(&stack0xfffffce8,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                          (HANDLE)0x0);
    if (hObject == (undefined4 *)0xffffffff) {
      return -0x7ffb1ff9;
    }
    if (*piVar1 == 0) {
      FUN_0042baa0(piVar1,4,-1,-1,0x80000002);
    }
    iVar2 = FUN_0042e4a0(hObject,(uint *)(param_1 + 0x4c),(undefined4 *)(param_1 + 100),
                         (int *)(param_1 + 0x2c),(int *)*piVar1,(undefined4 *)(param_1 + 0x48),
                         param_1 + 0x70,*(uint *)(param_1 + 0x68),*(int *)(param_1 + 0x6c));
    CloseHandle(hObject);
  }
  return iVar2;
}


