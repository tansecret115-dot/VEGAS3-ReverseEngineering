/* Module: sfxpfx2.dll
   Function: FUN_5c8cc546
   Address: 5c8cc546
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_5c8cc546(LPWSTR param_1,UINT param_2)

{
  int iVar1;
  CHAR local_104 [256];
  
  *param_1 = L'\0';
  if (DAT_5c8eeb94 == 2) {
    LoadStringW(DAT_5c8eeb90,param_2,param_1,0x100);
  }
  else {
    iVar1 = LoadStringA(DAT_5c8eeb90,param_2,local_104,0x100);
    if (iVar1 != 0) {
      MultiByteToWideChar(0,0,local_104,iVar1 + 1,param_1,0x100);
    }
  }
  return param_1;
}


