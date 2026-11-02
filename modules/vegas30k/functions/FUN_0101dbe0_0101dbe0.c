/* Module: vegas30k.dll
   Function: FUN_0101dbe0
   Address: 0101dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0101dbe0(uchar *param_1,uint param_2,int param_3,int param_4)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  uchar local_8 [8];
  
  if (0x7f < param_2) {
    puVar1 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x1124);
    _mbscpy(param_1,puVar1);
    return 0x80004005;
  }
  if (param_2 != 0) {
    uVar3 = param_2 % 0xc;
    SfPrintF(local_8,&DAT_011db778,(param_2 / 0xc - 5) + DAT_012040c8);
    if (param_4 == 0) {
      iVar2 = lstrcmpiA(&DAT_0120e804,"deu");
      if (iVar2 == 0) {
        puVar1 = (&PTR_DAT_012040cc)[uVar3];
      }
      else {
        puVar1 = (&PTR_DAT_0120412c)[uVar3];
      }
    }
    else {
      iVar2 = lstrcmpiA(&DAT_0120e804,"deu");
      if (iVar2 == 0) {
        puVar1 = (&PTR_DAT_012040fc)[uVar3];
      }
      else {
        puVar1 = (&PTR_DAT_0120415c)[uVar3];
      }
    }
    _mbscpy(param_1,puVar1);
    if (param_3 != 0) {
      _mbscat(param_1,local_8);
    }
    return 0;
  }
  puVar1 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x1125);
  _mbscpy(param_1,puVar1);
  return 0;
}


