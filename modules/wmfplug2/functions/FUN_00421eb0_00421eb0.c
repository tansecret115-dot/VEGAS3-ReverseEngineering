/* Module: wmfplug2.dll
   Function: FUN_00421eb0
   Address: 00421eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00421eb0(void)

{
  int iVar1;
  OLECHAR local_154 [40];
  CHAR local_104 [260];
  
  iVar1 = StringFromGUID2((GUID *)&stack0x00000004,local_154,0x28);
  if (-1 < iVar1) {
    wsprintfA(local_104,"CLSID\\%ls",local_154);
    wsprintfA(local_104,"%s\\%ls","Software\\Sonic Foundry\\File Formats 2",local_154);
    FUN_00421de0((HKEY)0x80000002,local_104);
    return 0;
  }
  return 0;
}


