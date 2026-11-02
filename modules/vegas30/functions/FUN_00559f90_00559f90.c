/* Module: vegas30.exe
   Function: FUN_00559f90
   Address: 00559f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00559f90(undefined4 param_1,HWND param_2,int *param_3,int param_4,int param_5,uint param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  CHAR local_28 [40];
  
  iVar2 = *param_3;
  if ((((param_6 & 0xffff) == 9) || ((param_6 & 0xffff) == 8)) &&
     (iVar1 = GetWindowTextA(param_2,local_28,0x28), iVar1 != 0)) {
    iVar2 = _SfTextToLongTokenEx_20(local_28,iVar2,param_4,param_5,0);
    SfSetWindowText(param_2,&DAT_0061052c,iVar2);
  }
  iVar2 = _Spinner_DefScrollProc_24(0x115,param_6,param_7,1,2,iVar2);
  if (iVar2 != *param_3) {
    *param_3 = iVar2;
    if ((param_4 <= iVar2) && (param_4 = iVar2, param_5 < iVar2)) {
      param_4 = param_5;
    }
    *param_3 = param_4;
    SfPrintF(local_28,&DAT_0061052c,param_4);
    SfSetWindowText(param_2,local_28);
  }
  return 1;
}


