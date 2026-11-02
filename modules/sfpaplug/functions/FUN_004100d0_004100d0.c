/* Module: sfpaplug.dll
   Function: FUN_004100d0
   Address: 004100d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_004100d0(undefined4 param_1,int param_2)

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
  if ((&DAT_004597d8)[iVar3 * 2] == param_2) {
    return (&PTR_s_Default_Template_004597dc)[iVar3 * 2];
  }
  return (undefined *)0x0;
}


