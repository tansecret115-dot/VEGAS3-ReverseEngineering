/* Module: tokr3260.dll
   Function: FUN_68058730
   Address: 68058730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_68058730(size_t param_1,char param_2,char param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  undefined4 *_Memory;
  undefined4 *_Memory_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  size_t _Count;
  int iVar4;
  float10 fVar5;
  
  _Count = (int)param_1 / 2;
  _Memory = calloc(_Count,4);
  if (_Memory == (undefined4 *)0x0) {
    return 0xfff0bdc1;
  }
  _Memory_00 = calloc(_Count,4);
  if (_Memory_00 != (undefined4 *)0x0) {
    iVar1 = (int)param_1 / (1 << (param_2 + 1U & 0x1f));
    iVar3 = (int)(_Count - iVar1) / 2;
    iVar4 = iVar3;
    puVar2 = _Memory;
    if (0 < iVar3) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    if (iVar3 < (int)_Count) {
      _param_2 = (float *)(_Memory + iVar3);
      iVar4 = iVar3;
      do {
        fsin((((float10)(iVar4 - iVar3) - (float10)_DAT_6805b1d0) / (float10)iVar1 -
             (float10)_DAT_6805b1d8) * (float10)_DAT_6805b1e0);
        fVar5 = (float10)_CIpow();
        iVar4 = iVar4 + 1;
        *_param_2 = (float)fVar5;
        _param_2 = _param_2 + 1;
      } while (iVar4 < (int)_Count);
    }
    iVar1 = (int)param_1 / (1 << (param_3 + 1U & 0x1f));
    iVar3 = (int)(_Count - iVar1) / 2;
    iVar4 = iVar3;
    puVar2 = _Memory_00;
    if (0 < iVar3) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    if (iVar3 < (int)_Count) {
      _param_2 = (float *)(_Memory_00 + iVar3);
      iVar4 = iVar3;
      do {
        fsin((((float10)(iVar4 - iVar3) - (float10)_DAT_6805b1d0) / (float10)iVar1 -
             (float10)_DAT_6805b1d8) * (float10)_DAT_6805b1e0);
        fVar5 = (float10)_CIpow();
        iVar4 = iVar4 + 1;
        *_param_2 = (float)fVar5;
        _param_2 = _param_2 + 1;
      } while (iVar4 < (int)_Count);
    }
    if (0 < (int)_Count) {
      iVar4 = param_1 << 2;
      puVar2 = param_6;
      param_1 = _Count;
      do {
        iVar4 = iVar4 + -4;
        *puVar2 = *(undefined4 *)(((int)_Memory - (int)param_6) + (int)puVar2);
        *(undefined4 *)((int)param_6 + iVar4) =
             *(undefined4 *)(((int)_Memory_00 - (int)param_6) + (int)puVar2);
        puVar2 = puVar2 + 1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    free(_Memory);
    free(_Memory_00);
    return 0;
  }
  return 0xfff0bdc1;
}


