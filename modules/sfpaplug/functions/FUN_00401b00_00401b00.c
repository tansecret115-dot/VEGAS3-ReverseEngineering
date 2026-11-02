/* Module: sfpaplug.dll
   Function: FUN_00401b00
   Address: 00401b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401b00(BYTE *param_1,DWORD param_2)

{
  LSTATUS LVar1;
  DWORD DVar2;
  char *lpString1;
  HKEY local_10c;
  DWORD local_108;
  CHAR local_104 [260];
  
  local_108 = 0x104;
  wsprintfA(local_104,"%s\\%s","Software\\Sonic Foundry","Shared Information");
  RegOpenKeyExA((HKEY)0x80000002,local_104,0,0x20019,&local_10c);
  LVar1 = RegQueryValueExA(local_10c,"HelpFolder",(LPDWORD)0x0,(LPDWORD)0x0,param_1,&local_108);
  if (LVar1 == 0) {
    DVar2 = GetFileAttributesA((LPCSTR)param_1);
    if (DVar2 == 0x10) {
      FUN_00413600(param_1,4);
      _mbscat(param_1,(uchar *)"SFPAPLUG.HLP");
      goto LAB_00401bca;
    }
  }
  GetModuleFileNameA(DAT_0045c378,(LPSTR)param_1,param_2);
  lpString1 = FUN_004133f0((LPCSTR)param_1);
  lstrcpynA(lpString1,"SFPAPLUG.HLP",(int)(param_1 + (param_2 - (int)lpString1)));
  lpString1[(int)(param_1 + (param_2 - (int)lpString1) + -1)] = '\0';
LAB_00401bca:
  RegCloseKey(local_10c);
  return;
}


