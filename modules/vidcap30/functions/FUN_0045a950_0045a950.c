/* Module: vidcap30.exe
   Function: FUN_0045a950
   Address: 0045a950
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0045a950(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0045ba10();
  iVar2 = 1;
  if (*param_2 == '\0') {
    do {
      SfPrintF(param_2,"Tape %d",iVar2);
      iVar1 = FUN_004436d0(*(undefined4 *)(param_2 + 0x104),param_2,0);
      iVar2 = iVar2 + 1;
    } while (iVar1 != 0);
  }
  iVar2 = _SfDialogBoxParam_20(DAT_005ba2a0,0x1ef,param_1,FUN_0045a9c0,param_2);
  return iVar2 == 1;
}


