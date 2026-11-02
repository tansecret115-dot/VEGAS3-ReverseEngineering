/* Module: mcplug.dll
   Function: FUN_00437100
   Address: 00437100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00437100(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  LPSTR lpSubKey;
  
  *param_1 = 0;
  lpSubKey = calloc(1,0x210);
  if (lpSubKey == (LPSTR)0x0) {
    return 0x8007000e;
  }
  uVar2 = (undefined1)((uint)param_3 >> 0x18);
  uVar1 = (undefined1)((uint)param_3 >> 0x10);
  if (param_4 == 0) {
    wsprintfA(lpSubKey,"Software\\Sonic Foundry\\%s\\%d.%d\\Metrics",param_2,uVar2,uVar1);
    RegCreateKeyA((HKEY)0x80000002,lpSubKey,(PHKEY)(lpSubKey + 0x104));
    wsprintfA(lpSubKey + 0x108,"Software\\Sonic Foundry\\%s\\%d.%d\\Metrics",param_2,uVar2,uVar1);
  }
  else {
    wsprintfA(lpSubKey,"Software\\Sonic Foundry\\%s\\%d.%d\\Metrics\\%s",param_2,uVar2,uVar1,param_4
             );
    RegCreateKeyA((HKEY)0x80000002,lpSubKey,(PHKEY)(lpSubKey + 0x104));
    wsprintfA(lpSubKey + 0x108,"Software\\Sonic Foundry\\%s\\%d.%d\\Metrics\\%s",param_2,uVar2,uVar1
              ,param_4);
  }
  RegCreateKeyA((HKEY)0x80000001,lpSubKey + 0x108,(PHKEY)(lpSubKey + 0x20c));
  *param_1 = lpSubKey;
  return 0;
}


