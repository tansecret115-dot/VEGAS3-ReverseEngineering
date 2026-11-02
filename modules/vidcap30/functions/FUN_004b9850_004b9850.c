/* Module: vidcap30.exe
   Function: FUN_004b9850
   Address: 004b9850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b9850(uchar *param_1,uint param_2,int param_3,int param_4)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  uchar local_8 [8];
  
  if (0x7f < param_2) {
    puVar1 = (uchar *)_SfGetString2_8(DAT_005c16d8,0x1124);
    _mbscpy(param_1,puVar1);
    return 0x80004005;
  }
  if (param_2 != 0) {
    uVar3 = param_2 % 0xc;
    SfPrintF(local_8,&DAT_00594bbc,(param_2 / 0xc - 5) + DAT_005b7938);
    if (param_4 == 0) {
      iVar2 = lstrcmpiA(&DAT_005c1914,"deu");
      if (iVar2 == 0) {
        puVar1 = (&PTR_DAT_005b793c)[uVar3];
      }
      else {
        puVar1 = (&PTR_DAT_005b799c)[uVar3];
      }
    }
    else {
      iVar2 = lstrcmpiA(&DAT_005c1914,"deu");
      if (iVar2 == 0) {
        puVar1 = (&PTR_DAT_005b796c)[uVar3];
      }
      else {
        puVar1 = (&PTR_DAT_005b79cc)[uVar3];
      }
    }
    _mbscpy(param_1,puVar1);
    if (param_3 != 0) {
      _mbscat(param_1,local_8);
    }
    return 0;
  }
  puVar1 = (uchar *)_SfGetString2_8(DAT_005c16d8,0x1125);
  _mbscpy(param_1,puVar1);
  return 0;
}


