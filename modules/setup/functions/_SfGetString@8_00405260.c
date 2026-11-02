/* Module: Setup.exe
   Function: _SfGetString@8
   Address: 00405260
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR _SfGetString_8(undefined4 *param_1,uint param_2)

{
  SIZE_T SVar1;
  int iVar2;
  LPSTR pCVar3;
  
                    /* 0x5260  173  _SfGetString@8 */
  if (param_1[0x4c] == 0) {
    return &DAT_004490e8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  SVar1 = param_1[0x49];
  if (SVar1 - param_1[0x4a] < (uint)param_1[0x4b]) {
    param_1[0x4b] = 0;
  }
  else {
    SVar1 = SVar1 - param_1[0x4b];
  }
  pCVar3 = (LPSTR)(param_1[0x4b] + param_1[0x4c]);
  iVar2 = _SfLoadString_16(param_1,param_2,pCVar3,SVar1);
  if (iVar2 == 0) {
    *pCVar3 = '\0';
  }
  param_1[0x4b] = param_1[0x4b] + 4 + iVar2 & 0xfffffffc;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  return pCVar3;
}


