/* Module: pncrt.dll
   Function: FUN_78027ec0
   Address: 78027ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78027ec0(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint in_EAX;
  int *piVar3;
  wchar_t *pwVar4;
  undefined *puVar5;
  wchar_t _WCh;
  
  piVar3 = param_2;
  _WCh = (wchar_t)param_1;
  if (_WCh != L'\xffff') {
    in_EAX = param_2[3];
    if (((in_EAX & 1) != 0) || (((in_EAX & 0x80) != 0 && ((in_EAX & 2) == 0)))) {
      if (param_2[2] == 0) {
        FUN_7800f630(param_2);
      }
      in_EAX = piVar3[3];
      if ((in_EAX & 0x40) == 0) {
        uVar1 = piVar3[4];
        if (uVar1 == 0xffffffff) {
          puVar5 = &__badioinfo;
        }
        else {
          puVar5 = (undefined *)((&__pioinfo)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
        }
        if ((puVar5[4] & 0x80) != 0) {
          in_EAX = wctomb((char *)&param_1,_WCh);
          if (in_EAX == 0xffffffff) {
            piVar3 = _errno();
            *piVar3 = 0x2a;
            return CONCAT22((short)((uint)piVar3 >> 0x10),0xffff);
          }
          if (*piVar3 == piVar3[2]) {
            if (piVar3[1] != 0) goto LAB_78027fd6;
            *piVar3 = *piVar3 + in_EAX;
          }
          if (in_EAX != 1) {
            iVar2 = *piVar3;
            *piVar3 = iVar2 + -1;
            *(undefined1 *)(iVar2 + -1) = param_1._1_1_;
          }
          iVar2 = *piVar3;
          *piVar3 = iVar2 + -1;
          *(undefined1 *)(iVar2 + -1) = (undefined1)param_1;
          uVar1 = piVar3[3];
          piVar3[1] = piVar3[1] + in_EAX;
          piVar3[3] = uVar1 & 0xffffffef | 1;
          return CONCAT22((short)((uVar1 & 0xffffffef) >> 0x10),_WCh);
        }
      }
      if (*piVar3 == piVar3[2]) {
        if (piVar3[1] != 0) goto LAB_78027fd6;
        *piVar3 = *piVar3 + 2;
      }
      piVar3[3] = in_EAX & 0xffffffef | 1;
      pwVar4 = (wchar_t *)(*piVar3 + -2);
      piVar3[1] = piVar3[1] + 2;
      *piVar3 = (int)pwVar4;
      *pwVar4 = _WCh;
      return CONCAT22((short)((uint)pwVar4 >> 0x10),*(undefined2 *)*piVar3);
    }
  }
LAB_78027fd6:
  return CONCAT22((short)(in_EAX >> 0x10),0xffff);
}


