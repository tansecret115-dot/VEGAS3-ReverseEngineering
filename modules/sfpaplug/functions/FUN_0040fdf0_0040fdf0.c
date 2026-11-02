/* Module: sfpaplug.dll
   Function: FUN_0040fdf0
   Address: 0040fdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040fdf0(undefined4 param_1,int param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_004597d8 != 0) {
    puVar2 = &DAT_004597d8;
    iVar1 = DAT_004597d8;
    do {
      if (iVar1 == param_2) break;
      iVar1 = puVar2[2];
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
  }
  iVar1 = 0;
  if ((&DAT_004597d8)[iVar3 * 2] == param_2) {
    lstrcpynA(param_3,(&PTR_s_Default_Template_004597dc)[iVar3 * 2],param_4);
    param_3[param_4 + -1] = '\0';
    iVar1 = lstrlenA(param_3);
  }
  return iVar1;
}


