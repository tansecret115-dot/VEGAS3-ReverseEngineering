/* Module: rmme3260.dll
   Function: FUN_66236110
   Address: 66236110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_66236110(DWORD param_1,HWND param_2)

{
  HINSTANCE hInstance;
  HWND pHVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  LPVOID lpParam;
  
  FUN_662379f0();
  lpParam = (LPVOID)0x0;
  hInstance = (HINSTANCE)FUN_662379e0();
  pHVar1 = CreateWindowExA(0,s_CPNSiteWindowed_6626fd90,&DAT_6627cf3c,param_1,0,0,0,0,param_2,
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


