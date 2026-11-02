/* Module: g2plug.dll
   Function: FUN_5f8112a0
   Address: 5f8112a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8112a0(HWND param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *dwData;
  UINT uCommand;
  BYTE local_104 [260];
  
  FUN_5f811330(local_104,0x104);
  if (param_2 == 0) {
    uCommand = 2;
    dwData = (int *)0x0;
  }
  else {
    uCommand = 1;
    dwData = (int *)0x0;
    if ((*(int *)(param_2 + 4) == 1) && (iVar1 = *param_3, iVar1 != 0)) {
      piVar2 = param_3;
      do {
        if (iVar1 == *(int *)(param_2 + 8)) {
          param_1 = *(HWND *)(param_2 + 0xc);
          uCommand = 0xc;
          dwData = param_3;
          break;
        }
        iVar1 = piVar2[2];
        piVar2 = piVar2 + 2;
      } while (iVar1 != 0);
    }
  }
  WinHelpA(param_1,(LPCSTR)local_104,uCommand,(ULONG_PTR)dwData);
  return;
}


