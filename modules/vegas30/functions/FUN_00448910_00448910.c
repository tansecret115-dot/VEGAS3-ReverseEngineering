/* Module: vegas30.exe
   Function: FUN_00448910
   Address: 00448910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448910(int param_1)

{
  LPSTR lpMultiByteStr;
  int *piVar1;
  LPCWSTR pWVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  LPCSTR lpString1;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  undefined1 uStack_211;
  WCHAR aWStack_210 [264];
  
  iVar6 = *(int *)(param_1 + 0xb4);
  if (iVar6 != 0) {
    piVar1 = *(int **)(iVar6 + 0x3c);
    iVar7 = iVar6 + 0x44;
    if ((piVar1 != (int *)0x0) && (iVar7 != 0)) {
      FUN_00448790();
      iVar3 = (**(code **)(*piVar1 + 0x30))();
      if (iVar3 < 0) {
        pWVar2 = *(LPCWSTR *)(iVar6 + 0x58);
        if (pWVar2 == (LPCWSTR)0x0) {
          _SfGetPrintFromWideString_8();
          _SfGetString_8(DAT_00647204);
          SfMsgBox(DAT_00647624,0x30);
          return;
        }
        if ((pWVar2 == (LPCWSTR)0x0) || (*pWVar2 != L'\0')) {
          WideCharToMultiByte(0,0,pWVar2,-1,&stack0xfffffcec,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        uStack_211 = 0;
        puVar4 = (undefined1 *)_SfGetFileNamePtrA_4();
        if (puVar4 == &stack0xfffffcec) {
          if ((&stack0x00000000 == (undefined1 *)0x210) || (aWStack_210[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_210,-1,&stack0xfffffcec,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          uStack_211 = 0;
          _SfAddSlashToPathName_8(&stack0xfffffcec);
          uVar5 = lstrlenA(&stack0xfffffcec);
          if (uVar5 < 0x104) {
            pWVar2 = *(LPCWSTR *)(iVar6 + 0x58);
            lpMultiByteStr = &stack0xfffffcec + uVar5;
            if ((pWVar2 == (LPCWSTR)0x0) || (*pWVar2 != L'\0')) {
              WideCharToMultiByte(0,0,pWVar2,-1,lpMultiByteStr,0x104 - uVar5,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
            }
            else if (lpMultiByteStr != (LPSTR)0x0) {
              *lpMultiByteStr = '\0';
            }
            (&uStack_211)[(0x104 - uVar5) + uVar5 + -0x104] = 0;
            uStack_211 = 0;
            iVar7 = unaff_ESI;
          }
        }
        lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4();
        iVar6 = lstrcmpA(lpString1,".chm");
        if (iVar6 != 0) {
          _SfHelp_ContextHelp_20(0,DAT_00647624,*(undefined4 *)(iVar7 + 0x18));
          return;
        }
        if (*(int *)(iVar7 + 0x18) != 0) {
          _SfHelp_ContextHelp_20(1,DAT_00647624,*(int *)(iVar7 + 0x18));
          return;
        }
        _SfHelp_ContextHelp_20(1,DAT_00647624,0);
      }
    }
  }
  return;
}


