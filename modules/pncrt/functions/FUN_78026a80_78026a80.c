/* Module: pncrt.dll
   Function: FUN_78026a80
   Address: 78026a80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_78026a80(void *this,FILE *param_1)

{
  FILE *_File;
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined2 extraout_var;
  size_t _SrcSizeInBytes;
  undefined4 local_4;
  
  _File = param_1;
  local_4 = this;
  if ((param_1->_flag & 0x40) == 0) {
    uVar4 = param_1->_file;
    if (uVar4 == 0xffffffff) {
      puVar2 = &__badioinfo;
    }
    else {
      puVar2 = (undefined *)((&__pioinfo)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
    }
    if ((puVar2[4] & 0x80) != 0) {
      _SrcSizeInBytes = 1;
      iVar3 = param_1->_cnt + -1;
      param_1->_cnt = iVar3;
      if (iVar3 < 0) {
        uVar4 = _filbuf(param_1);
      }
      else {
        uVar4 = (uint)(byte)*param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
      }
      if (uVar4 == 0xffffffff) {
        return 0xffffffff;
      }
      local_4 = (void *)CONCAT31(local_4._1_3_,(char)uVar4);
      if ((_pctype[(uVar4 & 0xff) * 2 + 1] & 0x80) != 0) {
        iVar3 = _File->_cnt + -1;
        _File->_cnt = iVar3;
        if (iVar3 < 0) {
          uVar4 = _filbuf(_File);
        }
        else {
          uVar4 = (uint)(byte)*_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
        }
        if (uVar4 == 0xffffffff) {
          iVar3 = ungetc((int)(char)local_4,_File);
          return CONCAT22((short)((uint)iVar3 >> 0x10),0xffff);
        }
        local_4._0_2_ = CONCAT11((char)uVar4,(char)local_4);
        _SrcSizeInBytes = 2;
      }
      iVar3 = mbtowc((wchar_t *)&param_1,(char *)&local_4,_SrcSizeInBytes);
      if (iVar3 == -1) {
        piVar5 = _errno();
        *piVar5 = 0x2a;
        return CONCAT22((short)((uint)piVar5 >> 0x10),0xffff);
      }
      return CONCAT22((short)((uint)iVar3 >> 0x10),param_1._0_2_);
    }
  }
  iVar3 = param_1->_cnt + -2;
  param_1->_cnt = iVar3;
  if (-1 < iVar3) {
    uVar1 = *(undefined2 *)param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 2;
    return CONCAT22((short)((uint)iVar3 >> 0x10),uVar1);
  }
  uVar1 = FUN_780293b0((int *)param_1);
  return CONCAT22(extraout_var,uVar1);
}


