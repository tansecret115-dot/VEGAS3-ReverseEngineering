/* Module: sfcdi.dll
   Function: FUN_5bf0c150
   Address: 5bf0c150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0c150(undefined4 param_1,LPSTR param_2,int param_3)

{
  LSTATUS LVar1;
  HKEY local_210;
  HKEY local_20c;
  DWORD local_208;
  DWORD local_204;
  uchar local_200 [256];
  BYTE local_100 [256];
  
  *param_2 = '\0';
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"HARDWARE\\DEVICEMAP\\Scsi",0,0x20019,&local_20c);
  if (LVar1 == 0) {
    FUN_5bf25750(local_200,(BYTE *)(s__Scsi_Port__d_5bf6309b + 1));
    LVar1 = RegOpenKeyExA(local_20c,(LPCSTR)local_200,0,0x20019,&local_210);
    if (LVar1 == 0) {
      local_208 = 0x100;
      LVar1 = RegQueryValueExA(local_210,s_Driver_5bf630dc,(LPDWORD)0x0,&local_204,local_100,
                               &local_208);
      if (LVar1 == 0) {
        lstrcpynA(param_2,(LPCSTR)local_100,param_3);
        param_2[param_3 + -1] = '\0';
      }
      RegCloseKey(local_210);
    }
    RegCloseKey(local_20c);
    return 0x80004005;
  }
  return 0x80004005;
}


