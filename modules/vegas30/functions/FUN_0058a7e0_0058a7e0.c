/* Module: vegas30.exe
   Function: FUN_0058a7e0
   Address: 0058a7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058a7e0(int param_1,undefined4 *param_2)

{
  LPCSTR lpString2;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  CHAR *pCVar5;
  CHAR local_30c [259];
  undefined1 local_209;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  lpString2 = (LPCSTR)FUN_005c6890(*param_2);
  lstrcpynA(local_30c,lpString2,0x104);
  local_209 = 0;
  _SfValidateFileName_8(local_30c,1);
  iVar3 = 0;
  do {
    do {
      iVar3 = iVar3 + 1;
      _mbscpy(local_208,(uchar *)(param_1 + 0x480));
      _SfAddSlashToPathName_8(local_208,0x104);
      pCVar5 = local_30c;
      puVar4 = local_208;
      iVar2 = iVar3;
      uVar1 = _SfGetString_8(DAT_00647204,0x5101);
      SfPrintF(param_2 + 2,uVar1,puVar4,pCVar5,iVar2);
      iVar2 = _SfDoesFileExist_4(param_2 + 2);
    } while (iVar2 != 0);
    SfPrintF(local_104,"%s%s Recording $d.w64",local_208,local_30c,iVar3);
    iVar2 = _SfDoesFileExist_4(local_104);
  } while (iVar2 != 0);
  return;
}


