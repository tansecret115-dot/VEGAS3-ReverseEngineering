/* Module: sfcdi.dll
   Function: ExcludeMiniPorts_Disable
   Address: 5bf0f470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall ExcludeMiniPorts_Disable(void) */

long ExcludeMiniPorts_Disable(void)

{
  LSTATUS LVar1;
  HKEY local_10c;
  HKEY local_108;
  DWORD local_104;
  uchar local_100 [256];
  
                    /* 0xf470  17  ?ExcludeMiniPorts_Disable@@YGJXZ */
  FUN_5bf25750(local_100,(BYTE *)"%s\\%s");
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)local_100,0,2,&local_10c);
  if (LVar1 != 0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SYSTEM_CurrentControlSet_Service_5bf64554,0,2,
                          &local_108);
    if (LVar1 == 0) {
      LVar1 = RegCreateKeyExA(local_108,&DAT_5bf6457c,0,"String",0,0x20006,
                              (LPSECURITY_ATTRIBUTES)0x0,&local_10c,&local_104);
      RegCloseKey(local_108);
      if (LVar1 == 0) goto LAB_5bf0f50c;
    }
    return -0x7fffbffb;
  }
LAB_5bf0f50c:
  LVar1 = RegSetValueExA(local_10c,s_ExcludeMiniPorts_5bf64584,0,1,"",1);
  RegCloseKey(local_10c);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


