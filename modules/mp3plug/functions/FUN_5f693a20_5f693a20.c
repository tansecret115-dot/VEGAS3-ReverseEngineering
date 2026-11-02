/* Module: mp3plug.dll
   Function: FUN_5f693a20
   Address: 5f693a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f693a20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uchar *hObject;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  uchar auStack_318 [260];
  WCHAR aWStack_214 [6];
  undefined1 local_208 [520];
  
  if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))
                    (*(int **)(param_1 + 0x24),local_208,0x104);
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_5f6b67c0((int *)(param_1 + 8),4,-1,-1,0x80000002);
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_5f6b67c0((int *)(param_1 + 0xc),4,-1,-1,0x80000002);
    }
    piVar1 = (int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_5f6b67c0(piVar1,4,-1,-1,0x80000002);
    }
    if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffbe4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      FUN_5f688150(*(void **)(param_1 + 0x28),aWStack_214,(int *)*piVar1);
    }
    FUN_5f692df0(*(void **)(param_1 + 0x24),(undefined4 *)&stack0xfffffbdc);
    if (unaff_EDI == 0) {
      unaff_EDI = 0xac44;
    }
    iVar2 = FUN_5f6ba9a0(&stack0xfffffbe4,auStack_318,0x104,1);
    if (-1 < iVar2) {
      iVar3 = FUN_5f6ba8b0(&stack0xfffffbe4,(LPCSTR)auStack_318);
      if (iVar3 == 0) {
        FUN_5f6ba9a0(&stack0xfffffbe4,auStack_318,0x104,0);
        iVar3 = FUN_5f6ba8b0(&stack0xfffffbe4,(LPCSTR)auStack_318);
        if (iVar3 == 0) {
          return iVar2;
        }
      }
      hObject = CreateFileA((LPCSTR)auStack_318,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                            (HANDLE)0x0);
      if (hObject != (uchar *)0xffffffff) {
        FUN_5f6b9400(hObject,unaff_EDI,(int *)*unaff_ESI);
        FUN_5f6b98d0(hObject,(int *)*piVar1);
        CloseHandle(hObject);
      }
    }
  }
  return iVar2;
}


