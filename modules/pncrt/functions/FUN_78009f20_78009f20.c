/* Module: pncrt.dll
   Function: FUN_78009f20
   Address: 78009f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78009f20(uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  uchar *_Pos;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  uchar *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uchar *_Count;
  uchar *puVar9;
  int local_4;
  
  _Count = (uchar *)0x0;
  local_4 = 0;
  while ((((_Pos = param_2, _Pos != param_1 && (uVar1 = *_Pos, uVar1 != '\\')) && (uVar1 != '/')) &&
         (uVar1 != ':'))) {
    param_2 = _Pos + -1;
    if (param_1 < _Pos + -1) {
      param_2 = _mbsdec(param_1,_Pos);
    }
  }
  uVar1 = *_Pos;
  if ((uVar1 != ':') || (_Pos == param_1 + 1)) {
    if ((uVar1 == '\\') || ((uVar1 == '/' || (uVar1 == ':')))) {
      _Count = _Pos + (1 - (int)param_1);
    }
    puVar3 = (uchar *)FUN_7800a160((LPCSTR)param_1);
    iVar2 = DAT_78041fb0;
    if (puVar3 != (uchar *)0x0) {
      do {
        iVar4 = _mbscmp(puVar3,".");
        if ((iVar4 != 0) && (iVar4 = _mbscmp(puVar3,".."), iVar4 != 0)) {
          uVar1 = *_Pos;
          if ((uVar1 == '\\') || ((uVar1 == ':' || (uVar1 == '/')))) {
            uVar7 = 0xffffffff;
            puVar5 = puVar3;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              uVar1 = *puVar5;
              puVar5 = puVar5 + 1;
            } while (uVar1 != '\0');
            puVar5 = malloc((size_t)(_Count + ~uVar7));
            if (puVar5 == (uchar *)0x0) {
              return 0xffffffff;
            }
            puVar5 = _mbsnbcpy(puVar5,param_1,(size_t)_Count);
            uVar7 = 0xffffffff;
            do {
              puVar9 = puVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              puVar9 = puVar3 + 1;
              uVar1 = *puVar3;
              puVar3 = puVar9;
            } while (uVar1 != '\0');
            uVar7 = ~uVar7;
            puVar3 = puVar9 + -uVar7;
            puVar9 = puVar5 + (int)_Count;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)puVar9 = *(undefined4 *)puVar3;
              puVar3 = puVar3 + 4;
              puVar9 = puVar9 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar9 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar9 = puVar9 + 1;
            }
            iVar4 = FUN_7800a0d0((int)(puVar5 + (int)_Count) - (int)_Count);
          }
          else {
            param_1 = (uchar *)_mbsdup((char *)puVar3);
            if (param_1 == (uchar *)0x0) {
              return 0xffffffff;
            }
            iVar4 = FUN_7800a0d0(param_1);
          }
          if (iVar4 != 0) {
            return 0xffffffff;
          }
          local_4 = local_4 + 1;
        }
        puVar3 = (uchar *)FUN_7800a160((LPCSTR)0x0);
      } while (puVar3 != (uchar *)0x0);
      if (local_4 != 0) {
        if (iVar2 != 0) {
          FUN_7800a120(*(undefined4 **)(iVar2 + 4));
          return 0;
        }
        FUN_7800a120(DAT_78041fa4);
        return 0;
      }
    }
  }
  uVar6 = FUN_7800a0d0(param_1);
  return uVar6;
}


