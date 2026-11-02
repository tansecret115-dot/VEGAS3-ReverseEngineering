/* Module: vegas30k.dll
   Function: _SfEnumResourceLanguages@16
   Address: 010c5980
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfEnumResourceLanguages_16(int param_1,uint param_2,LPSTR param_3,int param_4)

{
  CHAR local_104 [260];
  
                    /* 0xc5980  909  _SfEnumResourceLanguages@16 */
  local_104[0] = '\0';
  if ((*(HMODULE *)(param_1 + 0x138) != (HMODULE)0x0) && (*(int *)(param_1 + 0x134) != 0)) {
    EnumResourceLanguagesA
              (*(HMODULE *)(param_1 + 0x138),&DAT_00000010,(LPCSTR)(param_2 & 0xffff),FUN_010c5900,
               (LONG_PTR)local_104);
  }
  lstrcpynA(param_3,local_104,param_4);
  param_3[param_4 + -1] = '\0';
  lstrlenA(local_104);
  return;
}


