/* Module: aifplug.dll
   Function: FUN_5fbd3b70
   Address: 5fbd3b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd3b70(int param_1)

{
  int iVar1;
  HANDLE hObject;
  HANDLE hObject_00;
  uchar auStack_318 [260];
  WCHAR aWStack_214 [6];
  undefined1 local_208 [520];
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))
                    (*(int **)(param_1 + 0x24),local_208,0x104);
  if (-1 < iVar1) {
    if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffbe4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    hObject = CreateFileA(&stack0xfffffbe4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                          (HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) {
      return -0x7ffb1ff9;
    }
    auStack_318[0] = '\0';
    iVar1 = FUN_5fbe9d00(&stack0xfffffbe4,auStack_318,0x104,1);
    hObject_00 = CreateFileA((LPCSTR)auStack_318,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000
                             ,(HANDLE)0x0);
    if (hObject_00 != (HANDLE)0xffffffff) {
      FUN_5fbe6400((int *)(param_1 + 0x2c),4,-1,-1,0x80000002);
      iVar1 = FUN_5fbd78c0(hObject,hObject_00,(uint *)(param_1 + 0x50),
                           (undefined4 *)(param_1 + 0x68),(int *)(param_1 + 0x30),
                           *(int **)(param_1 + 0x2c),(undefined4 *)(param_1 + 0x4c));
      CloseHandle(hObject_00);
    }
    CloseHandle(hObject);
  }
  return iVar1;
}


