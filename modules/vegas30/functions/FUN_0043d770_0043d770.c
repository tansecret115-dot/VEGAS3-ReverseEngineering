/* Module: vegas30.exe
   Function: FUN_0043d770
   Address: 0043d770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043d770(undefined4 param_1,int param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  int iVar2;
  CHAR local_208 [260];
  undefined1 local_104 [260];
  
  SfPrintF(local_104,"Track%02lu",*(int *)(param_2 + 0x1c) + 1);
  iVar2 = 1;
  SfPrintF(local_208,"%lu-%s-%d",*(undefined4 *)(param_2 + 0x18),local_104,1);
  _SfAddExtensionToPathName_12(local_208,0x104,&DAT_00611e04);
  iVar1 = _SfDoesFileExist_4(local_208);
  while (iVar1 != 0) {
    iVar2 = iVar2 + 1;
    SfPrintF(local_208,"%lu-%s-%d",*(undefined4 *)(param_2 + 0x18),local_104,iVar2);
    _SfAddExtensionToPathName_12(local_208,0x104,&DAT_00611e04);
    iVar1 = _SfDoesFileExist_4(local_208);
  }
  lstrcpynA(param_3,local_208,param_4);
  param_3[param_4 + -1] = '\0';
  return 0;
}


