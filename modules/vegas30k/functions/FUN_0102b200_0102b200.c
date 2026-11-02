/* Module: vegas30k.dll
   Function: FUN_0102b200
   Address: 0102b200
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0102b200(HKEY param_1,HKEY param_2)

{
  HKEY lpSubKey;
  int iVar1;
  LSTATUS LVar2;
  HKEY local_4;
  
  lpSubKey = param_2;
  iVar1 = lstrcmpiA(s__73647561_0000_0010_8000_00AA003_01204528,(LPCSTR)param_2);
  if (iVar1 != 0) {
    return false;
  }
  param_2 = (HKEY)0x0;
  LVar2 = RegOpenKeyExA(param_1,(LPCSTR)lpSubKey,0,0x20019,&local_4);
  if (LVar2 != 0) {
    return false;
  }
  LVar2 = RegOpenKeyExA(local_4,s__00000000_0000_0000_0000_0000000_01204550,0,0x20019,&param_2);
  if (LVar2 == 0) {
    RegCloseKey(param_2);
  }
  else {
    param_2 = (HKEY)0x0;
  }
  RegCloseKey(local_4);
  return param_2 != (HKEY)0x0;
}


