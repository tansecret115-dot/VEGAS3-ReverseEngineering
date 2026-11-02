/* Module: vidcap30.exe
   Function: FUN_0045253a
   Address: 0045253a
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045253a(undefined4 param_1,DWORD param_2,undefined4 param_3,HINSTANCE param_4,
                _union_1933 param_5,undefined4 param_6,undefined4 param_7,DLGPROC param_8,
                undefined4 *param_9)

{
  HPROPSHEETPAGE p_Var1;
  int iVar2;
  UINT UVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  HWND in_stack_00000038;
  undefined4 in_stack_0000005c;
  int iStack00000060;
  int in_stack_00000130;
  undefined4 in_stack_00000134;
  int in_stack_0000013c;
  DWORD in_stack_00000140;
  DWORD in_stack_00000144;
  HWND in_stack_00000148;
  HINSTANCE in_stack_0000014c;
  LPCSTR in_stack_00000154;
  UINT in_stack_00000158;
  _union_1955 in_stack_0000015c;
  HWND in_stack_0000017c;
  uint in_stack_00000180;
  code *in_stack_00000184;
  undefined4 in_stack_00000188;
  code *in_stack_0000018c;
  int in_stack_00000190;
  
  puVar5 = &stack0x00000038;
  for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iStack00000060 = in_stack_00000190;
  if (in_stack_00000184 != (code *)0x0) {
    (*in_stack_00000184)(&stack0x00000038);
  }
  in_stack_0000005c = in_stack_00000188;
  in_stack_00000038 = in_stack_0000017c;
  in_stack_00000148 = in_stack_0000017c;
  in_stack_00000154 = &stack0x0000003c;
  in_stack_00000134 = 1;
  in_stack_00000140 = 0x34;
  in_stack_00000144 = 0x100;
  in_stack_0000014c = DAT_005ba298;
  ppuVar4 = &PTR_LAB_005b5e9c;
  do {
    puVar5 = &param_2;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    param_5 = (_union_1933)((_union_1933 *)(ppuVar4 + -1))->pszTemplate;
    param_2 = 0x30;
    param_4 = (HINSTANCE)_SfFindResInstance_12(DAT_005ba2a0,param_5.pszTemplate,5);
    param_8 = (DLGPROC)*ppuVar4;
    param_9 = &stack0x00000038;
    p_Var1 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)&param_2);
    UVar3 = in_stack_00000158;
    *(HPROPSHEETPAGE *)(&stack0x00000000 + in_stack_00000158 * 4) = p_Var1;
    if (p_Var1 != (HPROPSHEETPAGE)0x0) {
      UVar3 = UVar3 + 1;
      in_stack_00000158 = UVar3;
    }
    ppuVar4 = ppuVar4 + 2;
  } while (ppuVar4 < &DAT_005b5eac);
  in_stack_0000015c.pStartPage = (LPCSTR)(UVar3 - 1);
  if (in_stack_00000180 <= in_stack_0000015c.nStartPage) {
    in_stack_0000015c.nStartPage = in_stack_00000180;
  }
  DAT_005bc3f4 = 1;
  PropertySheetA((LPCPROPSHEETHEADERA)&stack0x00000140);
  DAT_005bc3f4 = 0;
  if ((in_stack_00000130 != 0) && (in_stack_00000190 == DAT_005bb838)) {
    **(uint **)(DAT_005bb838 + 4) = **(uint **)(DAT_005bb838 + 4) | 0x40000;
  }
  if (in_stack_0000013c != 0) {
    (*in_stack_0000018c)(&stack0x00000038);
  }
  _SfSummary_Free_4(&stack0x00000064);
  return in_stack_00000130;
}


