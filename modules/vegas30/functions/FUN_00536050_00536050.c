/* Module: vegas30.exe
   Function: FUN_00536050
   Address: 00536050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00536050(uchar *param_1,uchar *param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  uchar uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uchar *_Source;
  uint iMaxLength;
  CHAR local_50 [79];
  undefined1 local_1;
  
  iVar3 = FUN_004e6c90(0xbd0);
  if (iVar3 == 0) {
    return -0x7ff8fff2;
  }
  *(undefined1 **)(iVar3 + 0x20) = &LAB_00534360;
  *(undefined4 *)(iVar3 + 0x2c) = 0xc3;
  *(code **)(iVar3 + 0x28) = FUN_00534270;
  *(uint *)(iVar3 + 0x24) = ~-(uint)((DAT_0064761c & 0x10) != 0) & 0x5342c0;
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x32;
  *(undefined4 *)(iVar3 + 0x18) = 7;
  _mbscpy((uchar *)(iVar3 + 0x30),param_1);
  _SfSummary_Copy_8(iVar3 + 0x288,param_5);
  _SfSummary_Free_4(param_5);
  iVar4 = _ismbcspace((int)(char)*param_2);
  while (iVar4 != 0) {
    param_2 = (uchar *)CharNextA((LPCSTR)param_2);
    iVar4 = _ismbcspace((int)(char)*param_2);
  }
  if (*param_2 == '.') {
    param_2 = (uchar *)CharNextA((LPCSTR)param_2);
  }
  uVar1 = *param_2;
  _Source = param_2;
  do {
    if (uVar1 == '\0') {
LAB_00536131:
      _mbscpy((uchar *)(iVar3 + 0x174),_Source);
      iMaxLength = (int)_Source - (int)param_2;
      if (0x3f < iMaxLength) {
        iMaxLength = 0x40;
      }
      lstrcpynA((LPSTR)(iVar3 + 0x134),(LPCSTR)param_2,iMaxLength);
      ((LPSTR)(iVar3 + 0x134))[iMaxLength - 1] = '\0';
      *(undefined4 *)(iVar3 + 0x278) = 0;
      *(undefined4 *)(iVar3 + 0x27c) = 0;
      *(undefined4 *)(iVar3 + 0x280) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x284) = 0xffffffff;
      if (param_3 != (LPCSTR)0x0) {
        lstrcpynA(local_50,param_3,0x50);
        local_1 = 0;
        iVar4 = FUN_00536220(local_50,(undefined4 *)(iVar3 + 0x278),(undefined4 *)(iVar3 + 0x280),
                             param_4);
        if (iVar4 < 0) {
          FUN_004e6ce0(iVar3);
          return iVar4;
        }
      }
      *(undefined4 *)(iVar3 + 3000) = param_6;
      uVar2 = DAT_0064b138;
      FUN_005ec620();
      FUN_005b83b0(uVar2,1);
      FUN_005ed570();
      FUN_005b84d0(uVar2,1);
      FUN_004055e0();
      InterlockedIncrement(&DAT_0065e144);
      iVar3 = FUN_004e7190(iVar3);
      return iVar3;
    }
    if (uVar1 == ';') {
      _Source = (uchar *)CharNextA((LPCSTR)_Source);
      goto LAB_00536131;
    }
    _Source = (uchar *)CharNextA((LPCSTR)_Source);
    uVar1 = *_Source;
  } while( true );
}


