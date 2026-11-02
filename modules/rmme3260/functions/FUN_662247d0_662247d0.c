/* Module: rmme3260.dll
   Function: FUN_662247d0
   Address: 662247d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662247d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*param_1 + iVar1 * 4);
    FUN_6624ffe0(param_1,iVar1,1);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_6624fd90(param_1);
  return;
}


