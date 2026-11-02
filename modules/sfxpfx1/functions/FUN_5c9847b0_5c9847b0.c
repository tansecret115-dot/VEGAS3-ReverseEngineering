/* Module: sfxpfx1.dll
   Function: FUN_5c9847b0
   Address: 5c9847b0
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_5c9847b0(HKEY param_1,LPCSTR param_2,int *param_3)

{
  LSTATUS LVar1;
  DWORD local_130;
  HKEY local_12c;
  DWORD local_128 [3];
  DWORD local_11c;
  DWORD local_118;
  DWORD local_114;
  DWORD local_110;
  _FILETIME local_10c;
  CHAR local_104 [260];
  
  local_130 = 0xffffffff;
  local_128[0] = 0;
  LVar1 = RegOpenKeyExA(param_1,param_2,0,0x20019,&local_12c);
  if (LVar1 == 0) {
    local_128[1] = 0x104;
    RegQueryInfoKeyA(local_12c,local_104,local_128 + 1,(LPDWORD)0x0,&local_130,local_128,&local_118,
                     &local_11c,&local_114,local_128 + 2,&local_110,&local_10c);
    RegCloseKey(local_12c);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_128[0] + 1;
  }
  return local_130;
}


