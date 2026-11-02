/* Module: vegas30k.dll
   Function: FUN_0119e4f0
   Address: 0119e4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119e4f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  int iVar3;
  HGLOBAL pvVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar3 = (**(code **)(*param_1 + 0x134))(0,param_3);
  if (-1 < iVar3) {
    piVar2 = (int *)param_1[0x182];
    piVar1 = (int *)0x0;
    while (_Memory = piVar2, _Memory != (int *)0x0) {
      if (*_Memory == unaff_EBP) {
        if (piVar1 == (int *)0x0) {
          param_1[0x182] = _Memory[0x5b];
        }
        else {
          piVar1[0x5b] = _Memory[0x5b];
        }
        if ((LPCVOID)_Memory[9] != (LPCVOID)0x0) {
          pvVar4 = GlobalHandle((LPCVOID)_Memory[9]);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle((LPCVOID)_Memory[9]);
          GlobalFree(pvVar4);
        }
        free(_Memory);
        break;
      }
      piVar1 = _Memory;
      piVar2 = (int *)_Memory[0x5b];
    }
    if (param_1[0x185] == 0) {
      FUN_011aaf10(param_1);
      uVar5 = FUN_011aaf10(param_1);
      FUN_011aaee0(param_1,uVar5 & 0xfffffffd);
      param_1[8] = param_1[8] & 0xfffffffd;
    }
  }
  return iVar3;
}


