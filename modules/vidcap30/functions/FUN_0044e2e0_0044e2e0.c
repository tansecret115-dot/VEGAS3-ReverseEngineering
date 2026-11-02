/* Module: vidcap30.exe
   Function: FUN_0044e2e0
   Address: 0044e2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e2e0(undefined4 param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  undefined1 *puVar1;
  CHAR local_104 [259];
  undefined1 local_1;
  
  lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(param_1);
  lstrcpynA(local_104,lpString2,0x104);
  local_1 = 0;
  puVar1 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_104);
  *puVar1 = 0;
  lstrcpynA(param_2,local_104,param_3);
  param_2[param_3 + -1] = '\0';
  lstrlenA(param_2);
  return;
}


