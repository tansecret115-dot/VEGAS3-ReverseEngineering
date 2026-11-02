/* Module: wavplug.dll
   Function: FUN_5f381390
   Address: 5f381390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f381390(HMODULE param_1,undefined4 param_2,LPCSTR param_3)

{
  LSTATUS LVar1;
  DWORD DVar2;
  int iVar3;
  HKEY local_108;
  CHAR local_104 [260];
  
  LVar1 = RegCreateKeyA((HKEY)0x80000000,param_3,&local_108);
  if (LVar1 != 0) {
    return 0;
  }
  RegSetValueA(local_108,"",1,param_3 + 0x28,0x27);
  RegSetValueExA(local_108,"ContentType",0,1,(BYTE *)(param_3 + 0x50),0x103);
  RegCloseKey(local_108);
  LVar1 = RegCreateKeyA((HKEY)0x80000000,param_3 + 0x28,&local_108);
  if (LVar1 != 0) {
    return 0;
  }
  RegSetValueA(local_108,"",1,param_3 + 0x154,0x103);
  DVar2 = GetModuleFileNameA(param_1,local_104,0x104);
  iVar3 = wsprintfA(local_104 + DVar2,",%u",param_2);
  RegSetValueA(local_108,"DefaultIcon",1,local_104,DVar2 + iVar3);
  RegCloseKey(local_108);
  return 1;
}


