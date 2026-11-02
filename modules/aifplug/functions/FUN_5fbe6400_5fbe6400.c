/* Module: aifplug.dll
   Function: FUN_5fbe6400
   Address: 5fbe6400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbe6400(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int *_Memory;
  HGLOBAL hMem;
  LPVOID pvVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (param_5 & 8) >> 3;
  if (uVar1 == 0) {
    *param_1 = 0;
    _Memory = param_1;
  }
  else {
    _Memory = (int *)*param_1;
    if ((int *)*param_1 == (int *)0x0) {
      return 0x80004005;
    }
  }
  if (((param_5 & 4) != 0) && ((param_5 & 2) != 0)) {
    return 0x80004005;
  }
  if (uVar1 == 0) {
    _Memory = calloc(1,0x54);
    if (_Memory == (int *)0x0) {
      return 0x8007000e;
    }
  }
  _Memory[9] = 0x54525543;
  if ((param_5 & 4) == 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = param_2 + 3U & 0xfffffffc;
  }
  if (param_3 < 1) {
    param_3 = 0x10;
  }
  if (param_4 < 1) {
    param_4 = 0x10;
  }
  if (param_3 < 4) {
    param_3 = 4;
  }
  else if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  if (param_4 < 4) {
    param_4 = 4;
  }
  else if (0x10400 < param_4) {
    param_4 = 0x10400;
  }
  _Memory[1] = uVar4;
  iVar5 = ((param_3 + -1 + param_4) / param_4) * param_4;
  hMem = GlobalAlloc(0x42,uVar4 * iVar5);
  pvVar2 = GlobalLock(hMem);
  _Memory[2] = (int)pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    _Memory[9] = 0;
    if (uVar1 == 0) {
      free(_Memory);
    }
    return 0x8007000e;
  }
  if ((int)param_5 < 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)(_Memory + 3));
  }
  DVar3 = GetCurrentThreadId();
  _Memory[0xd] = DVar3;
  _Memory[10] = param_5 | 0x40000000;
  _Memory[0xe] = iVar5;
  _Memory[0xf] = param_4;
  if ((param_5 & 2) != 0) {
    iVar5 = FUN_5fbe4b90((int)_Memory,1);
    if (iVar5 != 0) {
      FUN_5fbe6330(_Memory);
      return 0x8007000e;
    }
  }
  *param_1 = (int)_Memory;
  return 0;
}


