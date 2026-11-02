/* Module: pncrt.dll
   Function: FUN_780294b0
   Address: 780294b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_780294b0(uint param_1,int *param_2)

{
  uint _FileHandle;
  void *_Buf;
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int *_MaxCharCount;
  
  piVar1 = param_2;
  uVar4 = param_2[3];
  _FileHandle = param_2[4];
  if (((uVar4 & 0x82) == 0) || ((uVar4 & 0x40) != 0)) {
LAB_780295e8:
    param_2[3] = uVar4 | 0x20;
    return 0xffff;
  }
  if ((uVar4 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar4 & 0x10) == 0) goto LAB_780295e8;
    *param_2 = param_2[2];
    param_2[3] = uVar4 & 0xfffffffe;
  }
  uVar4 = param_2[3];
  param_2[1] = 0;
  param_2 = (int *)0x0;
  piVar1[3] = uVar4 & 0xffffffef | 2;
  if ((uVar4 & 0x10c) == 0) {
    if ((piVar1 == &DAT_7803f818) || (piVar1 == (int *)&DAT_7803f838)) {
      iVar2 = _isatty(_FileHandle);
      if (iVar2 != 0) goto LAB_78029527;
    }
    FUN_7800f630(piVar1);
  }
LAB_78029527:
  uVar4 = param_1;
  if ((piVar1[3] & 0x108U) == 0) {
    _MaxCharCount = (int *)0x2;
    param_2 = (int *)_write(_FileHandle,&param_1,2);
  }
  else {
    _Buf = (void *)piVar1[2];
    _MaxCharCount = (int *)(*piVar1 - (int)_Buf);
    *piVar1 = (int)_Buf + 2;
    piVar1[1] = piVar1[6] + -2;
    if ((int)_MaxCharCount < 1) {
      if (_FileHandle == 0xffffffff) {
        puVar3 = &__badioinfo;
      }
      else {
        puVar3 = (undefined *)((&__pioinfo)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
      }
      if ((puVar3[4] & 0x20) != 0) {
        _lseek(_FileHandle,0,2);
      }
      *(short *)piVar1[2] = (short)param_1;
      uVar4 = param_1;
    }
    else {
      param_2 = (int *)_write(_FileHandle,_Buf,(uint)_MaxCharCount);
      *(short *)piVar1[2] = (short)param_1;
      uVar4 = param_1;
    }
  }
  if (param_2 != _MaxCharCount) {
    piVar1[3] = piVar1[3] | 0x20;
    return 0xffff;
  }
  return uVar4 & 0xffff;
}


