/* Module: sfcdi.dll
   Function: FUN_5bf099c0
   Address: 5bf099c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf099c0(int *param_1)

{
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CHAR *pCVar5;
  HKEY local_3c0;
  DWORD local_3bc;
  DWORD local_3b8;
  CHAR local_3b4 [44];
  int local_388 [31];
  uchar local_30c [260];
  BYTE local_208 [260];
  uchar local_104 [260];
  
  iVar3 = 0;
  pcVar4 = "Software\\Adaptec\\Easy CD Engine\\1.0\\Devices";
  pCVar5 = local_3b4;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pCVar5 = pCVar5 + 4;
  }
  local_3c0 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,local_3b4,0,0x20019,&local_3c0);
  if (LVar1 != 0) {
    return -0x7fffbffb;
  }
  FUN_5bf25750(local_30c,(BYTE *)"device%03d");
  local_3bc = 0x104;
  iVar2 = RegQueryValueExA(local_3c0,(LPCSTR)local_30c,(LPDWORD)0x0,&local_3b8,local_208,&local_3bc)
  ;
  while (iVar2 == 0) {
    _mbscpy(local_104,local_208);
    FUN_5bf09860((char *)local_104,(uchar *)local_388);
    iVar3 = FUN_5bf2ade0(param_1,local_388,0x7c,-1,(int *)0x0);
    FUN_5bf25750(local_30c,(BYTE *)"device%03d");
    local_3bc = 0x104;
    iVar2 = RegQueryValueExA(local_3c0,(LPCSTR)local_30c,(LPDWORD)0x0,&local_3b8,local_208,
                             &local_3bc);
  }
  RegCloseKey(local_3c0);
  return iVar3;
}


