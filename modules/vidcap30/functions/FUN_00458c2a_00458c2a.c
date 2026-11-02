/* Module: vidcap30.exe
   Function: FUN_00458c2a
   Address: 00458c2a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00458c2a(undefined4 param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,
            HINSTANCE param_5,_union_1933 param_6,undefined4 param_7,undefined4 param_8,
            DLGPROC param_9,undefined4 *param_10)

{
  HPROPSHEETPAGE p_Var1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  HANDLE in_stack_0000003c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_000004e4;
  UINT in_stack_0000050c;
  code *in_stack_00000538;
  
  puVar4 = &stack0x0000003c;
  for (iVar2 = 0x13c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (in_stack_00000538 != (code *)0x0) {
    (*in_stack_00000538)();
  }
  ppuVar3 = &PTR_FUN_005b615c;
  do {
    puVar4 = &param_3;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    param_6 = *(_union_1933 *)(ppuVar3 + -1);
    param_3 = 0x30;
    param_5 = (HINSTANCE)_SfFindResInstance_12();
    param_9 = (DLGPROC)*ppuVar3;
    param_10 = &stack0x0000003c;
    p_Var1 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)&param_3);
    *(HPROPSHEETPAGE *)(&stack0x00000000 + in_stack_0000050c * 4) = p_Var1;
    if (p_Var1 != (HPROPSHEETPAGE)0x0) {
      in_stack_0000050c = in_stack_0000050c + 1;
    }
    ppuVar3 = ppuVar3 + 2;
  } while (ppuVar3 < &DAT_005b6174);
  DAT_005bc404 = 1;
  PropertySheetA((LPCPROPSHEETHEADERA)&stack0x000004f4);
  DAT_005bc404 = 0;
  FUN_00411120();
  return in_stack_000004e4;
}


