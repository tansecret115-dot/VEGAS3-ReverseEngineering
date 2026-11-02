/* Module: sfcdi.dll
   Function: FUN_5bf06e40
   Address: 5bf06e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf06e40(uchar *param_1,uchar *param_2,int param_3)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(DAT_5bf66058,(LPWIN32_FIND_DATAA)&DAT_5bf66060);
  if (BVar1 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    FUN_5bf23470(param_1,param_2,0x104);
    _mbscat(param_2,&DAT_5bf6608c);
    return 1;
  }
  _mbscpy(param_2,&DAT_5bf6608c);
  return 1;
}


