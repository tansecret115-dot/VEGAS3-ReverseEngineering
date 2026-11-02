/* Module: pncrt.dll
   Function: _fpieee_flt
   Address: 780326d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int __cdecl
_fpieee_flt(ulong _ExceptionCode,_EXCEPTION_POINTERS *_PtExceptionPtr,_Handler *_Handler)

{
  PCONTEXT pCVar1;
  _FPIEEE_RECORD *p_Var2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  unkbyte10 *pVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  FLOATING_SAVE_AREA *pFVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  _FPIEEE_RECORD local_80;
  float10 local_28;
  undefined4 local_1c [3];
  undefined8 local_10;
  uint *local_8;
  
                    /* 0x326d0  243  _fpieee_flt */
  if ((((_ExceptionCode != 0xc000008e) && (_ExceptionCode != 0xc000008f)) &&
      (_ExceptionCode != 0xc0000090)) &&
     ((_ExceptionCode != 0xc0000091 && (_ExceptionCode != 0xc0000093)))) {
    return 0;
  }
  pCVar1 = _PtExceptionPtr->ContextRecord;
  pFVar11 = &pCVar1->FloatSave;
  p_Var2 = (_FPIEEE_RECORD *)_PtExceptionPtr->ExceptionRecord->ExceptionInformation[0];
  if (p_Var2 != (_FPIEEE_RECORD *)0x0) {
    iVar4 = (*_Handler)(p_Var2);
    if (iVar4 != -1) {
      return iVar4;
    }
    (pCVar1->FloatSave).StatusWord = (pCVar1->FloatSave).StatusWord & 0xffffff00;
    return -1;
  }
  pbVar3 = (byte *)(pCVar1->FloatSave).ErrorOffset;
  if ((*pbVar3 & 0xf8) != 0xd8) {
    return 0;
  }
  local_10._0_6_ = CONCAT24(*(undefined2 *)pbVar3,(ulong)local_10);
  local_8 = (uint *)(&DAT_78041260 +
                    (((uint)((local_10._4_4_ & 0xc000) == 0xc000) | (local_10._4_4_ & 7) << 1) << 3
                    | local_10._4_4_ >> 0xb & 7) * 4);
  uVar9 = (*local_8 & 0xfff) << 5;
  uVar5 = local_80._0_4_ & 0xfffe001f | uVar9;
  uVar10 = pFVar11->ControlWord;
  uVar15 = (pCVar1->FloatSave).StatusWord;
  uVar12 = uVar10 & 0xc00;
  if (uVar12 < 0x401) {
    if (uVar12 == 0x400) {
      uVar5 = local_80._0_4_ & 0xfffe001d | uVar9 | 1;
    }
    else if (uVar12 == 0) {
      uVar5 = local_80._0_4_ & 0xfffe001c | uVar9;
    }
  }
  else if (uVar12 == 0x800) {
    uVar5 = local_80._0_4_ & 0xfffe001e | uVar9 | 2;
  }
  else if (uVar12 == 0xc00) {
    uVar5 = uVar5 | 3;
  }
  local_80._0_4_ = uVar5;
  uVar5 = uVar10 & 0x300;
  if (uVar5 == 0) {
    local_80._0_4_ = local_80._0_4_ & 0xffffffeb | 8;
  }
  else if (uVar5 == 0x200) {
    local_80._0_4_ = local_80._0_4_ & 0xffffffe7 | 4;
  }
  else if (uVar5 == 0x300) {
    local_80._0_4_ = local_80._0_4_ & 0xffffffe3;
  }
  uVar10 = ~uVar10;
  uVar5 = uVar10 >> 2 & 8;
  local_80.Enable =
       (_FPIEEE_EXCEPTION_FLAGS)
       (((uVar10 & 0x10 | uVar5) >> 2 | uVar10 & 8) >> 1 | (uVar10 & 4 | (uVar10 & 1) << 3) << 1 |
       (uint)local_80.Enable & 0xffffffe0);
  uVar9 = uVar15 >> 2 & 8;
  local_80.Status =
       (_FPIEEE_EXCEPTION_FLAGS)
       (((uVar15 & 0x10 | uVar9) >> 2 | uVar15 & 8) >> 1 | (uVar15 & 4 | (uVar15 & 1) << 3) << 1 |
       (uint)local_80.Status & 0xffffffe0);
  if ((uVar5 == 0) || (uVar9 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if (((uVar10 & 0x10) == 0) || ((uVar15 & 0x10) == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  if (((uVar10 & 8) == 0) || ((uVar15 & 8) == 0)) {
    iVar13 = 0;
  }
  else {
    iVar13 = 1;
  }
  if (((uVar10 & 4) == 0) || ((uVar15 & 4) == 0)) {
    iVar14 = 0;
  }
  else {
    iVar14 = 1;
  }
  if (((uVar10 & 1) == 0) || ((uVar15 & 1) == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  local_80.Cause =
       (_FPIEEE_EXCEPTION_FLAGS)
       (((uint)local_80.Cause ^ ((uint)local_80.Cause ^ uVar5) & 1) & 0xffffffe1 | iVar4 << 1 |
        iVar13 << 2 | iVar14 << 3 | iVar6 << 4);
  uVar10 = *local_8;
  if ((uVar10 & 0x1f000) == 0x8000) {
    uVar15 = local_10._4_4_ >> 8 & 7;
  }
  else {
    uVar15 = uVar10 >> 0xc & 0x1f;
  }
  if ((uVar10 & 0x3e0000) == 0x100000) {
    uVar5 = local_10._4_4_ >> 8 & 7;
  }
  else {
    uVar5 = uVar10 >> 0x11 & 0x1f;
  }
  if ((uVar10 & 0x7c00000) == 0x2000000) {
    uVar9 = local_10._4_4_ >> 8 & 7;
  }
  else {
    uVar9 = uVar10 >> 0x16 & 0x1f;
  }
  switch(_ExceptionCode) {
  case 0xc000008e:
  case 0xc0000090:
    FUN_78032c90((undefined4 *)&local_80.Operand1,(int)pFVar11,uVar15);
    FUN_78032c90((undefined4 *)&local_80.Operand2,(int)pFVar11,uVar5);
    FUN_78032c90((undefined4 *)&local_80.Result,(int)pFVar11,uVar9);
    local_80.Result.OperandValid = 0;
    iVar4 = (*_Handler)(&local_80);
    if (iVar4 != -1) {
      return iVar4;
    }
    FUN_78032ea0((int)pFVar11,(int *)&local_80.Result,uVar9,(int)(*local_8 << 2) >> 0x1d);
    _Handler = (_Handler *)0xffffffff;
    break;
  case 0xc0000091:
  case 0xc0000093:
    iVar4 = FUN_780330d0(uVar10 >> 0x16 & 0x1f);
    if (iVar4 != 0) {
      FUN_78032c90((undefined4 *)&local_80.Operand1,(int)pFVar11,uVar15);
      pVar7 = (unkbyte10 *)FUN_780330f0(local_1c,(int)pFVar11,0);
      if (uVar9 == 0xd) {
        local_80.Result._16_4_ = local_80.Result._16_4_ & 0xffffffe1 | 1;
        uVar8 = DAT_78037dc8;
      }
      else {
        local_80.Result._16_4_ = local_80.Result._16_4_ & 0xffffffe3 | 3;
        uVar8 = DAT_78037dcc;
      }
      if (_ExceptionCode == 0xc0000091) {
        uVar8 = -uVar8;
      }
      local_10._4_4_ = uVar8;
      local_28 = (float10)fscale(*pVar7,(float10)(int)uVar8);
      if (uVar9 == 0xd) {
        local_80.Result.Value.Fp32Value = (float)local_28;
      }
      else {
        local_10 = (ulong  [2])(double)local_28;
        local_80.Result.Value.Fp64Value = (_FP64)local_10;
      }
      iVar4 = (*_Handler)(&local_80);
      if (iVar4 != -1) {
        return iVar4;
      }
      FUN_78032ea0((int)pFVar11,(int *)&local_80.Result,uVar9,(int)(*local_8 << 2) >> 0x1d);
      _Handler = (_Handler *)0xffffffff;
      break;
    }
  case 0xc000008f:
    iVar4 = FUN_780330b0(uVar15,(int)(*local_8 << 2) >> 0x1d);
    iVar13 = FUN_780330b0(uVar5,(int)(*local_8 << 2) >> 0x1d);
    iVar14 = FUN_780330b0(uVar9,(int)(*local_8 << 2) >> 0x1d);
    if (iVar4 == iVar14) {
      iVar4 = 0x1f;
    }
    if (iVar13 == iVar14) {
      iVar13 = 0x1f;
    }
    FUN_78032c90((undefined4 *)&local_80.Result,(int)pFVar11,iVar14);
    FUN_78032c90((undefined4 *)&local_80.Operand1,(int)pFVar11,iVar4);
    FUN_78032c90((undefined4 *)&local_80.Operand2,(int)pFVar11,iVar13);
    iVar4 = (*_Handler)(&local_80);
    if (iVar4 != -1) {
      return iVar4;
    }
    FUN_78032ea0((int)pFVar11,(int *)&local_80.Result,iVar14,0);
    _Handler = (_Handler *)0xffffffff;
    break;
  default:
  }
  if (_Handler == (_Handler *)0xffffffff) {
    (pCVar1->FloatSave).StatusWord = (pCVar1->FloatSave).StatusWord & 0xffffff00;
    uVar10 = pFVar11->ControlWord;
    switch(local_80.RoundingMode) {
    case 0:
      uVar10 = uVar10 & 0xfffff3ff;
      break;
    case 1:
      uVar10 = uVar10 & 0xfffff7ff | 0x400;
      break;
    case 2:
      uVar10 = uVar10 & 0xfffffbff | 0x800;
      break;
    case 3:
      uVar10 = uVar10 | 0xc00;
    }
    uVar15 = local_80.Precision;
    if (uVar15 == 0) {
      uVar10 = uVar10 | 0x300;
    }
    else if (uVar15 == 1) {
      uVar10 = uVar10 & 0xfffffeff | 0x200;
    }
    else if (uVar15 == 2) {
      uVar10 = uVar10 & 0xfffffcff;
    }
    if (local_80.Enable.Inexact == 0) {
      uVar10 = uVar10 | 0x20;
    }
    else {
      uVar10 = uVar10 & 0xffffffdf;
    }
    if (local_80.Enable.Underflow == 0) {
      uVar10 = uVar10 | 0x10;
    }
    else {
      uVar10 = uVar10 & 0xffffffef;
    }
    if (local_80.Enable.Overflow == 0) {
      uVar10 = uVar10 | 8;
    }
    else {
      uVar10 = uVar10 & 0xfffffff7;
    }
    if (local_80.Enable.ZeroDivide == 0) {
      uVar10 = uVar10 | 4;
    }
    else {
      uVar10 = uVar10 & 0xfffffffb;
    }
    if (local_80.Enable.InvalidOperation != 0) {
      pFVar11->ControlWord = uVar10 & 0xfffffffe;
      return -1;
    }
    pFVar11->ControlWord = uVar10 | 1;
  }
  return (int)_Handler;
}


