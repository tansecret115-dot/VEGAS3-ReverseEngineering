/* Module: encn3260.dll
   Function: FUN_664a0430
   Address: 664a0430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_664a0430(DWORD param_1,HWND param_2)

{
  HINSTANCE hInstance;
  HWND pHVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  LPVOID lpParam;
  
  FUN_664a1d20();
  lpParam = (LPVOID)0x0;
  hInstance = (HINSTANCE)FUN_664b0670();
  pHVar1 = CreateWindowExA(0,s_CPNSiteWindowed_664e32b0,&DAT_664f05c4,param_1,0,0,0,0,param_2,
                           (HMENU)0x0,hInstance,lpParam);
  puVar2 = operator_new(0x24);
  puVar4 = puVar2;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar2 = pHVar1;
  return puVar2;
}


