/* Module: cook3260.dll
   Function: FUN_633a3810
   Address: 633a3810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a3810(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  piVar3 = (int *)(param_1 + 0xeaf0);
  iVar4 = param_1 + 0xcae8;
  puVar6 = (undefined4 *)(param_1 + 0xa950);
  local_8 = 2;
  do {
    iVar1 = 3;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 0x11;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    piVar3[-2] = iVar4 + -0x2000;
    *piVar3 = iVar4;
    iVar1 = 0;
    puVar5 = (undefined4 *)(iVar4 + 0x2010);
    do {
      iVar2 = iVar1 + 4;
      *(undefined4 *)(piVar3[-2] + -4 + iVar2) = 0;
      *(undefined4 *)(iVar1 + *piVar3) = 0;
      *puVar5 = 0;
      iVar1 = iVar2;
      puVar5 = puVar5 + 1;
    } while (iVar2 < 0x1000);
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 0x1000;
    *(undefined4 *)(param_1 + 0x10af8) = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


