/* Module: sfpaplug.dll
   Function: FUN_00401260
   Address: 00401260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401260(HMODULE param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  DWORD DVar2;
  int iVar3;
  HKEY local_108;
  CHAR local_104 [260];
  
  LVar1 = RegCreateKeyA((HKEY)0x80000000,".pca",&local_108);
  if (LVar1 != 0) {
    return 0;
  }
  RegSetValueA(local_108,"",1,"pcafile",7);
  RegSetValueExA(local_108,"ContentType",0,1,(BYTE *)"audio/pca",9);
  RegCloseKey(local_108);
  LVar1 = RegCreateKeyA((HKEY)0x80000000,"pcafile",&local_108);
  if (LVar1 != 0) {
    return 0;
  }
  RegSetValueA(local_108,"",1,"Sonic Foundry Perfect Clarity Audio",0x23);
  DVar2 = GetModuleFileNameA(param_1,local_104,0x104);
  iVar3 = wsprintfA(local_104 + DVar2,",%u",param_2);
  RegSetValueA(local_108,"DefaultIcon",1,local_104,DVar2 + iVar3);
  RegCloseKey(local_108);
  return 1;
}


