/* Module: vegas30.exe
   Function: FUN_0041a040
   Address: 0041a040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a040(int param_1)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  int *piVar2;
  LPCWSTR pWVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  LPCSTR lpString1;
  undefined1 uStack_211;
  WCHAR aWStack_210 [262];
  int iStack_4;
  
  piVar2 = *(int **)(param_1 + 0x23c);
  if (((piVar2 != (int *)0x0) && (*(int *)(param_1 + 0x220) != 0)) &&
     (*(uint *)(param_1 + 0x230) < *(uint *)(param_1 + 0x224))) {
    iVar1 = *(int *)(param_1 + 0x220) + *(uint *)(param_1 + 0x230) * 0x44;
    FUN_00419ee0();
    iVar4 = (**(code **)(*piVar2 + 0x30))();
    if (iVar4 < 0) {
      pWVar3 = *(LPCWSTR *)(iVar1 + 0x14);
      if (pWVar3 == (LPCWSTR)0x0) {
        _SfGetPrintFromWideString_8();
        _SfGetString_8(DAT_00647204);
        SfMsgBox(DAT_00647624,0x30);
        return;
      }
      if ((pWVar3 == (LPCWSTR)0x0) || (*pWVar3 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar3,-1,&stack0xfffffcec,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      uStack_211 = 0;
      puVar5 = (undefined1 *)_SfGetFileNamePtrA_4();
      if (puVar5 == &stack0xfffffcec) {
        if ((&stack0x00000000 == (undefined1 *)0x210) || (aWStack_210[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_210,-1,&stack0xfffffcec,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        uStack_211 = 0;
        _SfAddSlashToPathName_8(&stack0xfffffcec);
        uVar6 = lstrlenA(&stack0xfffffcec);
        if (uVar6 < 0x104) {
          pWVar3 = *(LPCWSTR *)(iVar1 + 0x14);
          lpMultiByteStr = &stack0xfffffcec + uVar6;
          if ((pWVar3 == (LPCWSTR)0x0) || (*pWVar3 != L'\0')) {
            WideCharToMultiByte(0,0,pWVar3,-1,lpMultiByteStr,0x104 - uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (lpMultiByteStr != (LPSTR)0x0) {
            *lpMultiByteStr = '\0';
          }
          (&uStack_211)[(0x104 - uVar6) + uVar6 + -0x104] = 0;
          uStack_211 = 0;
          param_1 = iStack_4;
        }
      }
      if (((*(byte *)(param_1 + 0xc) & 8) != 0) && (*(int *)(param_1 + 0x8c) != 5)) {
        FUN_0041c220();
      }
      lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4();
      iVar4 = lstrcmpiA(lpString1,".chm");
      if (iVar4 != 0) {
        _SfHelp_ContextHelp_20(0,DAT_00647624,*(undefined4 *)(iVar1 + 0x18));
        return;
      }
      _SfHelp_ContextHelp_20(1,DAT_00647624,0);
    }
  }
  return;
}


