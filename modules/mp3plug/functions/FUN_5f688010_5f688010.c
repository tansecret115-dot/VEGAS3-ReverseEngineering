/* Module: mp3plug.dll
   Function: FUN_5f688010
   Address: 5f688010
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_5f688010(HWND param_1,int param_2,int *param_3)

{
  int iVar1;
  BOOL BVar2;
  UINT uCommand;
  int *piVar3;
  BYTE local_104 [260];
  
  FUN_5f687ed0(local_104,0x104);
  if (param_2 == 0) {
    param_3 = (int *)0x0;
    uCommand = 2;
LAB_5f688088:
    BVar2 = WinHelpA(param_1,(LPCSTR)local_104,uCommand,(ULONG_PTR)param_3);
    return BVar2;
  }
  if ((*(int *)(param_2 + 4) == 1) && (iVar1 = *param_3, iVar1 != 0)) {
    piVar3 = param_3;
    do {
      if (iVar1 == *(int *)(param_2 + 8)) {
        param_1 = *(HWND *)(param_2 + 0xc);
        uCommand = 0xc;
        if (param_3 == (int *)0xffffffff) {
          return 0;
        }
        goto LAB_5f688088;
      }
      iVar1 = piVar3[2];
      piVar3 = piVar3 + 2;
    } while (iVar1 != 0);
  }
  return 0;
}


