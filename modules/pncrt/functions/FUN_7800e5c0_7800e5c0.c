/* Module: pncrt.dll
   Function: FUN_7800e5c0
   Address: 7800e5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7800e5c0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint _MaxCharCount;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    _MaxCharCount = *param_1 - param_1[2];
    if (0 < (int)_MaxCharCount) {
      uVar2 = _write(param_1[4],(void *)param_1[2],_MaxCharCount);
      uVar1 = param_1[3];
      if (uVar2 == _MaxCharCount) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}


