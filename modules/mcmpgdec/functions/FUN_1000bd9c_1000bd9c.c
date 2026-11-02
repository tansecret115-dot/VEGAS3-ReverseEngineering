/* Module: mcmpgdec.dll
   Function: FUN_1000bd9c
   Address: 1000bd9c
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_1000bd9c(int param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  uint _Size;
  undefined4 uVar5;
  size_t sVar6;
  void *_Src_00;
  int iVar7;
  uint _Size_00;
  
  iVar2 = *(int *)(param_1 + 0x34);
  pvVar1 = (void *)(*(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x48));
  if (param_2 == (void *)0x0) {
    if (*(int *)(iVar2 + 0x4c) == 0) {
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x3c);
    }
    iVar7 = (*(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x3c)) - *(int *)(iVar2 + 0x48);
    sVar6 = *(int *)(iVar2 + 0x40) -
            ((*(int *)(iVar2 + 0x48) + *(int *)(iVar2 + 0x4c)) - *(int *)(iVar2 + 0x3c));
    *(size_t *)(iVar2 + 0x50) = sVar6;
    memset((void *)(*(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x48)),0,sVar6);
    *(int *)(iVar2 + 0x4c) =
         (*(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x3c)) - *(int *)(iVar2 + 0x48);
    iVar3 = (**(code **)(iVar2 + 0x58))(iVar2 + 0x48);
    iVar4 = (int)*(void **)(iVar2 + 0x48) - (int)*(void **)(iVar2 + 0x3c);
    if (iVar7 < iVar4) {
      iVar4 = iVar7;
    }
    *(int *)(iVar2 + 0x4c) = iVar7 - iVar4;
    if (0 < iVar3) {
      memcpy(*(void **)(iVar2 + 0x3c),*(void **)(iVar2 + 0x48),iVar7 - iVar4);
      *(int *)(iVar2 + 0x38) = iVar3;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x3c);
    }
    param_3 = *(uint *)(iVar2 + 0x4c);
  }
  else {
    *(undefined4 *)(iVar2 + 0x50) = 0;
    _Src_00 = param_2;
    _Size_00 = param_3;
    while (sVar6 = *(size_t *)(iVar2 + 0x4c), sVar6 != 0) {
      if (_Size_00 + sVar6 < *(uint *)(iVar2 + 0x38)) {
        memcpy(*(void **)(iVar2 + 0x3c),*(void **)(iVar2 + 0x48),sVar6);
        iVar4 = *(int *)(iVar2 + 0x4c);
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x3c);
        if (*(uint *)(iVar2 + 0x40) < iVar4 + _Size_00) {
          _Size_00 = *(uint *)(iVar2 + 0x40) - iVar4;
        }
        memcpy((void *)(iVar4 + *(int *)(iVar2 + 0x3c)),_Src_00,_Size_00);
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + _Size_00;
        return (int)_Src_00 + (_Size_00 - (int)param_2);
      }
      _Size = *(uint *)(iVar2 + 0x40) >> 1;
      if (_Size < _Size_00) {
        memcpy((void *)(sVar6 + *(int *)(iVar2 + 0x48)),_Src_00,_Size);
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + (*(uint *)(iVar2 + 0x40) >> 1);
      }
      else {
        memcpy((void *)(sVar6 + *(int *)(iVar2 + 0x48)),_Src_00,_Size_00);
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + _Size_00;
      }
      iVar4 = (**(code **)(iVar2 + 0x58))(iVar2 + 0x48);
      _Src = *(void **)(iVar2 + 0x48);
      if (_Src < pvVar1) {
        if (iVar4 < 1) {
          *(int *)(iVar2 + 0x4c) = (int)pvVar1 - (int)_Src;
          memcpy(*(void **)(iVar2 + 0x3c),_Src,(int)pvVar1 - (int)_Src);
          *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x3c);
          return 0;
        }
        *(int *)(iVar2 + 0x38) = iVar4;
        memcpy(*(void **)(iVar2 + 0x3c),_Src,*(size_t *)(iVar2 + 0x4c));
        uVar5 = *(undefined4 *)(iVar2 + 0x3c);
        goto LAB_1000bfa3;
      }
      _Src_00 = (void *)((int)_Src_00 + ((int)_Src - (int)pvVar1));
      _Size_00 = _Size_00 - ((int)_Src - (int)pvVar1);
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x3c);
      if (iVar4 < 1) {
        return (int)_Src_00 - (int)param_2;
      }
      *(int *)(iVar2 + 0x38) = iVar4;
    }
    *(void **)(iVar2 + 0x48) = _Src_00;
    *(uint *)(iVar2 + 0x4c) = _Size_00;
    iVar4 = (**(code **)(iVar2 + 0x58))(iVar2 + 0x48);
    if (iVar4 < 1) {
      param_3 = *(int *)(iVar2 + 0x48) - (int)param_2;
      *(undefined4 *)(iVar2 + 0x4c) = 0;
    }
    else {
      memcpy(*(void **)(iVar2 + 0x3c),*(void **)(iVar2 + 0x48),*(size_t *)(iVar2 + 0x4c));
      uVar5 = *(undefined4 *)(iVar2 + 0x3c);
      *(int *)(iVar2 + 0x38) = iVar4;
LAB_1000bfa3:
      *(undefined4 *)(iVar2 + 0x48) = uVar5;
    }
  }
  return param_3;
}


