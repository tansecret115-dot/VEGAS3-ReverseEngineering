/* Module: oggplug.dll
   Function: FUN_00401160
   Address: 00401160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401160(HMODULE param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  DWORD DVar2;
  int iVar3;
  HKEY local_108;
  CHAR local_104 [260];
  
  LVar1 = RegOpenKeyA((HKEY)0x80000000,".ogg",&local_108);
  if (LVar1 == 0) {
    RegCloseKey(local_108);
    return 1;
  }
  LVar1 = RegCreateKeyA((HKEY)0x80000000,".ogg",&local_108);
  if (LVar1 != 0) {
    return 0;
  }
  RegSetValueA(local_108,"",1,"oggfile",7);
  RegSetValueExA(local_108,"ContentType",0,1,(BYTE *)"audio/OggVorbis",0xf);
  RegCloseKey(local_108);
  LVar1 = RegCreateKeyA((HKEY)0x80000000,"oggfile",&local_108);
  if (LVar1 != 0) {
    return 0;
  }
  RegSetValueA(local_108,"",1,"Ogg Vorbis Audio",0x10);
  DVar2 = GetModuleFileNameA(param_1,local_104,0x104);
  iVar3 = wsprintfA(local_104 + DVar2,",%u",param_2);
  RegSetValueA(local_108,"DefaultIcon",1,local_104,DVar2 + iVar3);
  RegCloseKey(local_108);
  return 1;
}


