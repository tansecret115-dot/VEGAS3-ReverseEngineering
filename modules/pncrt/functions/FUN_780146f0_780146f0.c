/* Module: pncrt.dll
   Function: FUN_780146f0
   Address: 780146f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_780146f0(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  CHAR local_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = __crtGetLocaleInfoW(param_2,param_3,(LPWSTR)&DAT_78042500,4,0);
    if (iVar5 != 0) {
      pbVar7 = &DAT_78042500;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar7;
        if (__mb_cur_max < 2) {
          uVar6 = (byte)_pctype[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar6 = _isctype((uint)bVar1,4);
        }
        if (uVar6 == 0) break;
        pbVar7 = pbVar7 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x78042507 < (int)pbVar7) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  sVar3 = FUN_78012b40(param_2,param_3,local_80,0x80,0);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (sVar3 = FUN_78012b40(param_2,param_3,(LPSTR)0x0,0,0), sVar3 == 0)) ||
       (_Source = malloc(sVar3), _Source == (LPSTR)0x0)) goto LAB_780147a0;
    bVar2 = true;
    sVar3 = FUN_78012b40(param_2,param_3,_Source,sVar3,0);
    if (sVar3 == 0) goto LAB_780147a0;
  }
  _Dest = malloc(sVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    strncpy(_Dest,_Source,sVar3);
    if (!bVar2) {
      return 0;
    }
    free(_Source);
    return 0;
  }
LAB_780147a0:
  if (!bVar2) {
    return 0xffffffff;
  }
  free(_Source);
  return 0xffffffff;
}


