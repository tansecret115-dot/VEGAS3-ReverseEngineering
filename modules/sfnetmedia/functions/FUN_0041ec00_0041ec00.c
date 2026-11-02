/* Module: sfnetmedia.dll
   Function: FUN_0041ec00
   Address: 0041ec00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041ec00(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  BYTE *pBVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_retaddr;
  CHAR aCStack_584 [259];
  undefined1 uStack_481;
  undefined4 auStack_480 [14];
  WCHAR aWStack_448 [284];
  WCHAR aWStack_210 [262];
  HWND pHStack_4;
  
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0x18))();
    puVar4 = auStack_480;
    for (iVar3 = 0x9c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    auStack_480[0] = 0x270;
    piVar1 = FUN_00420770(unaff_retaddr);
    if ((int)piVar1 < 0) {
      iVar3 = (**(code **)(*param_3 + 0x28))(param_3,0);
      if (iVar3 < 0) {
        return;
      }
      if ((&stack0x00000000 == (undefined1 *)0x210) || (aWStack_210[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_210,-1,aCStack_584,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x584) {
        aCStack_584[0] = '\0';
      }
      uStack_481 = 0;
    }
    else {
      if ((&stack0x00000000 == (undefined1 *)0x448) || (aWStack_448[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_448,-1,aCStack_584,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x584) {
        aCStack_584[0] = '\0';
      }
      uStack_481 = 0;
      FUN_00413050(aCStack_584);
    }
    pBVar2 = FUN_00419120(DAT_00441d60,0x1126);
    FUN_00417320(pHStack_4,pBVar2);
  }
  return;
}


