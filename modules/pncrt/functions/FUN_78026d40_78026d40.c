/* Module: pncrt.dll
   Function: FUN_78026d40
   Address: 78026d40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78026d40(uint param_1,FILE *param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  wchar_t _WCh;
  char local_8;
  byte bStack_7;
  
  _WCh = (wchar_t)param_1;
  if ((param_2->_flag & 0x40) == 0) {
    uVar4 = param_2->_file;
    if (uVar4 == 0xffffffff) {
      puVar1 = &__badioinfo;
    }
    else {
      puVar1 = (undefined *)((&__pioinfo)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
    }
    if ((puVar1[4] & 0x80) != 0) {
      iVar2 = wctomb(&local_8,_WCh);
      if (iVar2 == -1) {
        piVar3 = _errno();
        *piVar3 = 0x2a;
        return CONCAT22((short)((uint)piVar3 >> 0x10),0xffff);
      }
      if (iVar2 == 1) {
        iVar2 = param_2->_cnt + -1;
        param_2->_cnt = iVar2;
        if (iVar2 < 0) {
          uVar4 = _flsbuf((int)local_8,param_2);
        }
        else {
          *param_2->_ptr = local_8;
          uVar4 = CONCAT11(bStack_7,local_8) & 0xff;
          param_2->_ptr = param_2->_ptr + 1;
        }
        if (uVar4 == 0xffffffff) {
          return 0xffffffff;
        }
LAB_78026e58:
        return CONCAT22((short)(uVar4 >> 0x10),_WCh);
      }
      iVar2 = param_2->_cnt + -1;
      param_2->_cnt = iVar2;
      if (iVar2 < 0) {
        uVar4 = _flsbuf((int)local_8,param_2);
      }
      else {
        *param_2->_ptr = local_8;
        uVar4 = CONCAT11(bStack_7,local_8) & 0xff;
        param_2->_ptr = param_2->_ptr + 1;
      }
      if (uVar4 != 0xffffffff) {
        iVar2 = param_2->_cnt + -1;
        param_2->_cnt = iVar2;
        if (iVar2 < 0) {
          uVar4 = _flsbuf((int)(char)bStack_7,param_2);
        }
        else {
          *param_2->_ptr = bStack_7;
          uVar4 = (uint)bStack_7;
          param_2->_ptr = param_2->_ptr + 1;
        }
        if (uVar4 != 0xffffffff) goto LAB_78026e58;
      }
      return CONCAT22((short)(uVar4 >> 0x10),0xffff);
    }
  }
  iVar2 = param_2->_cnt + -2;
  param_2->_cnt = iVar2;
  if (-1 < iVar2) {
    *(wchar_t *)param_2->_ptr = _WCh;
    param_2->_ptr = param_2->_ptr + 2;
    return param_1;
  }
  uVar4 = FUN_780294b0(param_1 & 0xffff,(int *)param_2);
  return uVar4;
}


