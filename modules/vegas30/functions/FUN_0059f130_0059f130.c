/* Module: vegas30.exe
   Function: FUN_0059f130
   Address: 0059f130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0059f130(int *param_1)

{
  int iVar1;
  int nNumber;
  int nDenominator;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  _SfDibSet_36(*param_1,param_1[0x10b],0,param_1[0x10c],0,0,0,0,3);
  nNumber = *(int *)(DAT_0064b500 + 4);
  nDenominator = *(int *)(DAT_0064b500 + 8);
  iVar1 = *(int *)(*param_1 + 8) + -5;
  if (iVar1 < nDenominator) {
    nNumber = MulDiv(nNumber,iVar1,nDenominator);
    nDenominator = MulDiv(nDenominator,*(int *)(*param_1 + 8) + -5,nDenominator);
  }
  iVar1 = *(int *)(*param_1 + 4) + -5;
  if (iVar1 < nNumber) {
    nNumber = MulDiv(nNumber,iVar1,nNumber);
    nDenominator = MulDiv(nDenominator,*(int *)(*param_1 + 4) + -5,nNumber);
  }
  iVar1 = *param_1;
  local_c = (*(int *)(iVar1 + 8) - nDenominator) / 2;
  local_4 = local_c + nDenominator;
  local_10 = (*(int *)(iVar1 + 4) - nNumber) / 2;
  local_8 = local_10 + nNumber;
  _SfDibCopy_36(iVar1,0,&local_10,0,DAT_0064b500,0,0,0,3);
  return;
}


