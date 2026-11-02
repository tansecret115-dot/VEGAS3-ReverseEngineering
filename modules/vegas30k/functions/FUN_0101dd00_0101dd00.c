/* Module: vegas30k.dll
   Function: FUN_0101dd00
   Address: 0101dd00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0101dd00(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  CHAR aCStack_584 [259];
  undefined1 uStack_481;
  undefined4 auStack_480 [14];
  WCHAR aWStack_448 [284];
  WCHAR aWStack_210 [264];
  
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0x18))();
    puVar2 = auStack_480;
    for (iVar1 = 0x9c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_480[0] = 0x270;
    iVar1 = FUN_0101f870();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_3 + 0x28))(param_3,0);
      if (iVar1 < 0) {
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
      _SfGetFileNamePtrA_4();
    }
    _SfGetString2_8();
    SfMEditPrintF();
  }
  return;
}


