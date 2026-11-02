/* Module: vegas30k.dll
   Function: FUN_011c7990
   Address: 011c7990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_011c7990(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar1 = *param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (*(double *)(param_1 + 0x220) <= _DAT_011dad58) {
    dVar2 = (_DAT_011dad58 - *(double *)(param_1 + 0x220)) + _DAT_011dad58;
  }
  else {
    dVar2 = _DAT_011dad58 - (*(double *)(param_1 + 0x220) - _DAT_011dad58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (_DAT_011dad58 <= dVar2) {
    if (dVar2 <= _DAT_011dad58) {
      uVar3 = uVar4;
      if (uVar1 <= uVar4) {
        uVar3 = uVar1;
        uVar4 = uVar1;
      }
    }
    else {
      uVar3 = ftol();
      if (uVar1 < uVar3) {
        uVar4 = (uVar1 * uVar4 + (uVar3 >> 1)) / uVar3;
        uVar3 = uVar1;
        if (*param_2 < uVar4) {
          uVar4 = *param_2;
        }
      }
    }
  }
  else {
    if (uVar1 <= uVar4) {
      uVar4 = uVar1;
    }
    uVar3 = ftol();
    if (uVar3 < 2) {
      uVar3 = 1;
    }
  }
  *param_2 = uVar4;
  *param_3 = uVar3;
  return;
}


