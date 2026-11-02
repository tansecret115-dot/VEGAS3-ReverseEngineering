/* Module: pncrt.dll
   Function: FUN_780178e0
   Address: 780178e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_780178e0(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  byte *pbVar6;
  
  uVar2 = 0;
  if ((param_1 != (LPWSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPWSTR)0x0) {
    if (DAT_78042438 == 0) {
      uVar2 = 0xffffffff;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        bVar1 = *param_2;
        param_2 = param_2 + 1;
      } while (bVar1 != 0);
      return ~uVar2 - 1;
    }
    iVar3 = MultiByteToWideChar(__lc_codepage,9,(LPCSTR)param_2,-1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      piVar5 = _errno();
      *piVar5 = 0x2a;
      return 0xffffffff;
    }
  }
  else {
    if (DAT_78042438 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      do {
        *param_1 = (ushort)param_2[uVar2];
        if (param_2[uVar2] == 0) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        param_1 = param_1 + 1;
      } while (uVar2 < param_3);
      return uVar2;
    }
    iVar3 = MultiByteToWideChar(__lc_codepage,9,(LPCSTR)param_2,-1,param_1,param_3);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      pbVar6 = param_2;
      uVar2 = param_3;
      if (DVar4 != 0x7a) {
        piVar5 = _errno();
        *piVar5 = 0x2a;
        return 0xffffffff;
      }
      while (uVar2 != 0) {
        if (*pbVar6 == 0) break;
        if ((_pctype[(uint)*pbVar6 * 2 + 1] & 0x80) != 0) {
          pbVar6 = pbVar6 + 1;
        }
        pbVar6 = pbVar6 + 1;
        uVar2 = uVar2 - 1;
      }
      uVar2 = MultiByteToWideChar(__lc_codepage,1,(LPCSTR)param_2,(int)pbVar6 - (int)param_2,param_1
                                  ,param_3);
      if (uVar2 != 0) {
        return uVar2;
      }
      piVar5 = _errno();
      *piVar5 = 0x2a;
      return 0xffffffff;
    }
  }
  return iVar3 - 1;
}


