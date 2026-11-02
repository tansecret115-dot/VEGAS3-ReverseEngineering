/* Module: vidcap30.exe
   Function: FUN_004bad10
   Address: 004bad10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bad10(undefined4 param_1,int *param_2,LPSTR param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  WCHAR local_208 [260];
  
  if (*param_3 == '\0') {
    if (param_2 != (int *)0x0) {
      local_208[0] = L'\0';
      (**(code **)(*param_2 + 0x34))(param_2,local_208,0x104);
      if ((&stack0x00000000 == (undefined1 *)0x208) || (local_208[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_208,-1,param_3,param_4,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (param_3 != (LPSTR)0x0) {
        *param_3 = '\0';
      }
      param_3[param_4 + -1] = '\0';
    }
    if (*param_3 == '\0') {
      return;
    }
  }
  uVar1 = _SfGetFileNamePtrA_4(param_3);
  uVar2 = _SfGetString2_8(DAT_005c16d8,0x1146);
  SfMEditPrintF(param_1,uVar2,uVar1);
  return;
}


