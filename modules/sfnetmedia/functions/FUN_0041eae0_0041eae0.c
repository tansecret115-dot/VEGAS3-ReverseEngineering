/* Module: sfnetmedia.dll
   Function: FUN_0041eae0
   Address: 0041eae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041eae0(uchar *param_1,uint param_2,int param_3,int param_4)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  uchar local_8 [8];
  
  if (0x7f < param_2) {
    puVar1 = FUN_00419120(DAT_00441d60,0x1124);
    _mbscpy(param_1,puVar1);
    return 0x80004005;
  }
  if (param_2 != 0) {
    uVar3 = param_2 % 0xc;
    FUN_004156f0(local_8,"%d");
    if (param_4 == 0) {
      iVar2 = lstrcmpiA(&DAT_00441f9c,"deu");
      if (iVar2 == 0) {
        puVar1 = (&PTR_DAT_0043fc2c)[uVar3];
      }
      else {
        puVar1 = (&PTR_DAT_0043fc8c)[uVar3];
      }
    }
    else {
      iVar2 = lstrcmpiA(&DAT_00441f9c,"deu");
      if (iVar2 == 0) {
        puVar1 = (&PTR_DAT_0043fc5c)[uVar3];
      }
      else {
        puVar1 = (&PTR_DAT_0043fcbc)[uVar3];
      }
    }
    _mbscpy(param_1,puVar1);
    if (param_3 != 0) {
      _mbscat(param_1,local_8);
    }
    return 0;
  }
  puVar1 = FUN_00419120(DAT_00441d60,0x1125);
  _mbscpy(param_1,puVar1);
  return 0;
}


