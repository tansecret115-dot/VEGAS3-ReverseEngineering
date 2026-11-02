/* Module: vidcap30.exe
   Function: FUN_004fb5c0
   Address: 004fb5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004fb5c0(uchar *param_1,uchar *param_2,int param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *local_10c;
  int local_108;
  uchar local_104 [260];
  
  uVar1 = *param_1;
  local_108 = 0;
  puVar3 = param_1;
  puVar2 = param_1;
  while ((((uVar1 != '\0' && (uVar1 = *puVar3, uVar1 != '*')) && (uVar1 != '?')) && (uVar1 != ';')))
  {
    if ((uVar1 == ':') || (uVar1 == '\\')) {
      puVar2 = (uchar *)CharNextA((LPCSTR)puVar3);
    }
    puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
    uVar1 = *puVar3;
  }
  *param_2 = '\0';
  if (puVar2 != param_1) {
    puVar4 = puVar2 + (-1 - (int)param_1);
    if (puVar4 != (uchar *)0x0) {
      puVar7 = param_1;
      puVar8 = param_2;
      for (uVar5 = (uint)puVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
        puVar7 = puVar7 + 4;
        puVar8 = puVar8 + 4;
      }
      for (uVar5 = (uint)puVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    param_2[(int)puVar4] = '\0';
  }
  if ((*puVar3 == '\0') || (local_10c = puVar2, param_3 == 0)) {
    _mbscpy(param_2,param_1);
  }
  else {
    while( true ) {
      for (; (*local_10c != '\0' && (*local_10c != ';'));
          local_10c = (uchar *)CharNextA((LPCSTR)local_10c)) {
      }
      uVar5 = (int)local_10c - (int)puVar2;
      if (uVar5 != 0) {
        puVar3 = local_104;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        local_104[uVar5] = '\0';
        CharLowerA((LPSTR)local_104);
        _SfList_AllocAndInsertItem_20(param_3,local_104,uVar5 + 1,0xffffffff,0);
        local_108 = local_108 + 1;
      }
      if (*local_10c == '\0') break;
      puVar2 = (uchar *)CharNextA((LPCSTR)local_10c);
      local_10c = puVar2;
    }
  }
  return local_108;
}


