/* Module: vegas30.exe
   Function: FUN_00419ee0
   Address: 00419ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419ee0(GUID *param_1,LPCWSTR param_2,int param_3)

{
  LSTATUS LVar1;
  undefined1 *puVar2;
  int iVar3;
  LONG local_184;
  HKEY local_180;
  CHAR local_17c [39];
  undefined1 local_155;
  OLECHAR local_154 [40];
  CHAR local_104 [260];
  
  *param_2 = L'\0';
  StringFromGUID2(param_1,local_154,0x28);
  if ((&stack0x00000000 == (undefined1 *)0x154) || (local_154[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_154,-1,local_17c,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x17c) {
    local_17c[0] = '\0';
  }
  local_155 = 0;
  SfPrintF(local_104,"CLSID\\%s",local_17c);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,local_104,0,0x20019,&local_180);
  if (LVar1 != 0) {
    return 0;
  }
  local_184 = 0x104;
  LVar1 = RegQueryValueA(local_180,"HelpDir",local_104,&local_184);
  if (LVar1 != 0) {
    local_184 = 0x104;
    LVar1 = RegQueryValueA(local_180,"InprocServer32",local_104,&local_184);
    if (LVar1 != 0) goto LAB_0041a022;
    puVar2 = (undefined1 *)_SfGetFileNamePtrA_4(local_104);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
  }
  MultiByteToWideChar(0,1,local_104,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
LAB_0041a022:
  RegCloseKey(local_180);
  iVar3 = lstrlenW(param_2);
  return iVar3;
}


