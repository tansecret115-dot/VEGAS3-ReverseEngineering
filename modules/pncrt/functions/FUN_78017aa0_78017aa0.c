/* Module: pncrt.dll
   Function: FUN_78017aa0
   Address: 78017aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78017aa0(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_78042438 == 0) {
        if (param_1 == (LPWSTR)0x0) {
          return 1;
        }
        *param_1 = (ushort)bVar1;
        return 1;
      }
      if ((_pctype[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(__lc_codepage,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (((1 < (int)__mb_cur_max) && ((int)__mb_cur_max <= (int)param_3)) &&
           (iVar2 = MultiByteToWideChar(__lc_codepage,9,(LPCSTR)param_2,__mb_cur_max,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
          return __mb_cur_max;
        }
        if (__mb_cur_max <= param_3) {
          if (param_2[1] != 0) {
            return __mb_cur_max;
          }
          piVar3 = _errno();
          *piVar3 = 0x2a;
          return 0xffffffff;
        }
      }
      piVar3 = _errno();
      *piVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
      return 0;
    }
  }
  return 0;
}


