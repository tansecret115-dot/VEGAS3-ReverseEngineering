/* Module: sfppack1.dll
   Function: FUN_5ce01ac0
   Address: 5ce01ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_5ce01ac0(LPWSTR param_1,UINT param_2)

{
  int iVar1;
  CHAR local_104 [256];
  
  *param_1 = L'\0';
  if (DAT_5ce28fc4 == 2) {
    LoadStringW(DAT_5ce28fc0,param_2,param_1,0x100);
  }
  else {
    iVar1 = LoadStringA(DAT_5ce28fc0,param_2,local_104,0x100);
    if (iVar1 != 0) {
      MultiByteToWideChar(0,0,local_104,iVar1 + 1,param_1,0x100);
    }
  }
  return param_1;
}


