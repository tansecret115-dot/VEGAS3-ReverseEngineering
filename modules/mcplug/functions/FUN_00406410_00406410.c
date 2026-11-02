/* Module: mcplug.dll
   Function: FUN_00406410
   Address: 00406410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406410(LPWSTR param_1,int param_2)

{
  LPWSTR pWVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  int unaff_ESI;
  int unaff_retaddr;
  
  pWVar1 = param_1;
  iVar2 = (**(code **)(*(int *)param_1 + 0x38))(param_1,&param_1);
  if (-1 < iVar2) {
    if ((unaff_retaddr < 0) || (unaff_ESI <= unaff_retaddr)) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_00407140((int *)pWVar1);
      if (-1 < iVar2) {
        lpMultiByteStr =
             FUN_00419470(DAT_00487a6c,*(uint *)(*(int *)(pWVar1 + unaff_retaddr * 2 + 0x14) + 0xc))
        ;
        iVar2 = param_2;
        pWVar1 = param_1;
        MultiByteToWideChar(0,1,lpMultiByteStr,-1,param_1,param_2);
        pWVar1[iVar2 + -1] = L'\0';
        return 0;
      }
    }
  }
  return iVar2;
}


