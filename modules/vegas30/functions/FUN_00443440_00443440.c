/* Module: vegas30.exe
   Function: FUN_00443440
   Address: 00443440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443440(HWND__ *param_1,int *param_2)

{
  uchar *_Source;
  long lVar1;
  int iVar2;
  undefined4 local_188;
  uchar local_184 [128];
  uchar local_104 [260];
  
  iVar2 = DAT_0064b138;
  _Source = (uchar *)_SfGetFileNamePtrA_4(DAT_0064b138 + 0xb8);
  _mbscpy(local_104,_Source);
  _mbscpy(local_184,(uchar *)"CD Project (*.cdp)\t*.cdp\t");
  _SfStringReplaceChars_12(local_184,9,0);
  lVar1 = SfFileSaveAsDlgMRU(param_1,"Save As",(char *)local_104,0x104,(char *)local_184,param_2,
                             DAT_00647200,0x461,0,(char *)0x0,0);
  if (lVar1 != 0) {
    return 0xffffffff;
  }
  if (*param_2 != 1) {
    return 0xffffffff;
  }
  iVar2 = FUN_00442240(iVar2,local_104);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  return local_188;
}


