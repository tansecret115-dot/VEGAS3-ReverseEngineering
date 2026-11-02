/* Module: vegas30.exe
   Function: FUN_005355b0
   Address: 005355b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005355b0(uchar *param_1,LPSTR param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uchar local_208 [260];
  uchar local_104 [260];
  
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    _mbscpy(local_208,param_1);
    _SfAddSlashToPathName_8(local_208,0x104);
    iVar2 = iVar3;
    uVar1 = _SfGetString_8(DAT_00647204,0x55f2);
    SfPrintF(local_104,uVar1,iVar2);
    _mbscat(local_208,local_104);
    iVar2 = FUN_00535660(local_208);
  } while (iVar2 != 0);
  lstrcpynA(param_2,(LPCSTR)local_104,param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


