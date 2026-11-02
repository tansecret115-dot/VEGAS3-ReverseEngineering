/* Module: sfpaplug.dll
   Function: FUN_0042c340
   Address: 0042c340
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042c340(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *_Src;
  
  if (param_5 != (int *)0x0) {
    *(undefined1 *)param_5 = 0;
  }
  if (param_2 < 9) {
    return 0xffffffff;
  }
  do {
    uVar3 = param_1[1];
    _Src = param_1 + 2;
    if (*param_1 == param_3) {
      if ((param_3 == 0x6c62616c) || (param_3 == 0x65746f6e)) {
        if (uVar3 < 4) {
          return 0xffffffff;
        }
        iVar1 = *_Src;
        _Src = param_1 + 3;
        uVar3 = uVar3 - 4;
        param_2 = param_2 + -4;
        if (iVar1 == param_4) {
          if (param_6 < (int)uVar3) {
            return uVar3;
          }
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *param_5 = *_Src;
            _Src = _Src + 1;
            param_5 = param_5 + 1;
          }
          for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(char *)param_5 = (char)*_Src;
            _Src = (int *)((int)_Src + 1);
            param_5 = (int *)((int)param_5 + 1);
          }
          return uVar3;
        }
      }
      else if ((param_3 == 0x7478746c) && (param_7 != (int *)0x0)) {
        if (uVar3 < 0x14) {
          return 0xffffffff;
        }
        memmove(param_7,_Src,0x14);
        _Src = param_1 + 7;
        uVar3 = uVar3 - 0x14;
        param_2 = param_2 + -0x14;
        if (*param_7 == param_4) {
          return 0;
        }
      }
    }
    param_2 = param_2 + (-8 - uVar3);
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 + 1;
      param_2 = param_2 + -1;
    }
    param_1 = (int *)((int)_Src + uVar3);
    if (param_2 < 9) {
      return 0xffffffff;
    }
  } while( true );
}


