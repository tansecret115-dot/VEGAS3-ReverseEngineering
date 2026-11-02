/* Module: sfmarket2.dll
   Function: FUN_00418270
   Address: 00418270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00418270(void *this,char *param_1,BYTE *param_2)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_208;
  HKEY local_204;
  CHAR local_200 [512];
  
  uVar2 = 0x80070005;
  if (param_1 == (char *)0x0) {
    param_1 = "keyRegFile";
  }
  wsprintfA(local_200,"%s",param_1);
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,(LPSTR)0x0,0,4,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_208,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_208,"License",0,(LPSTR)0x0,0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_204,(LPDWORD)0x0);
    if (LVar1 == 0) {
      LVar1 = RegSetValueExA(local_204,local_200,0,1,param_2,0x18);
      if (LVar1 == 0) {
        uVar2 = 0;
      }
      RegCloseKey(local_204);
    }
    RegCloseKey(local_208);
  }
  return uVar2;
}


