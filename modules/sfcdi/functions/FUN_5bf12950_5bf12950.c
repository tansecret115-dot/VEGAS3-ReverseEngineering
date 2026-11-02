/* Module: sfcdi.dll
   Function: FUN_5bf12950
   Address: 5bf12950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf12950(LPSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  int iVar1;
  int iVar2;
  int iMaxLength;
  CHAR local_a0 [80];
  CHAR local_50 [80];
  
  iVar1 = lstrlenA(param_2);
  iMaxLength = -iVar1 + 0x4d;
  iVar2 = lstrlenA(param_3);
  while (iMaxLength < iVar2) {
    lstrcpynA(local_50,param_3,iMaxLength);
    wsprintfA(local_a0,"%s%s\r\n",param_2,local_50);
    lstrcatA(param_1,local_a0);
    param_3 = param_3 + -iVar1 + 0x4c;
    iVar2 = lstrlenA(param_3);
  }
  iVar1 = lstrlenA(param_3);
  if (iVar1 != 0) {
    wsprintfA(local_a0,"%s%s\r\n",param_2,param_3);
    lstrcatA(param_1,local_a0);
  }
  return;
}


