/* Module: mp3plug.dll
   Function: FUN_5f6a01a0
   Address: 5f6a01a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6a01a0(void)

{
  int iVar1;
  OLECHAR local_154 [40];
  CHAR local_104 [260];
  
  iVar1 = StringFromGUID2((GUID *)&stack0x00000004,local_154,0x28);
  if (-1 < iVar1) {
    wsprintfA(local_104,"CLSID\\%ls",local_154);
    wsprintfA(local_104,"%s\\%ls","Software\\Sonic Foundry\\File Formats 2",local_154);
    FUN_5f6a00d0((HKEY)0x80000002,local_104);
    return 0;
  }
  return 0;
}


