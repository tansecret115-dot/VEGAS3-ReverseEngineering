/* Module: pncrt.dll
   Function: qsort
   Address: 780230f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_100;
  int *local_fc;
  undefined4 *local_f8;
  int local_f4;
  int local_f0 [30];
  undefined4 local_78 [30];
  
                    /* 0x230f0  686  qsort */
  if ((_NumOfElements < 2) || (_SizeOfElements == 0)) {
    return;
  }
  local_100 = (undefined1 *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
  local_fc = local_f0;
  local_f8 = local_78;
  local_f4 = 0;
LAB_78023144:
  uVar1 = (uint)((int)local_100 - (int)_Base) / _SizeOfElements + 1;
  if (8 < uVar1) {
    FUN_78023300((undefined1 *)((int)_Base + (uVar1 >> 1) * _SizeOfElements),_Base,_SizeOfElements);
    puVar4 = local_100 + _SizeOfElements;
    puVar3 = _Base;
LAB_780231be:
    puVar3 = puVar3 + _SizeOfElements;
    if (puVar3 <= local_100) goto code_r0x780231c8;
    goto LAB_780231d8;
  }
  FUN_780232a0(_Base,local_100,_SizeOfElements,_PtFuncCompare);
  goto LAB_78023165;
code_r0x780231c8:
  iVar2 = (*_PtFuncCompare)(puVar3,_Base);
  if (iVar2 < 1) goto LAB_780231be;
LAB_780231d8:
  do {
    puVar4 = puVar4 + -_SizeOfElements;
    if (puVar4 <= _Base) break;
    iVar2 = (*_PtFuncCompare)(puVar4,_Base);
  } while (-1 < iVar2);
  if (puVar3 <= puVar4) {
    FUN_78023300(puVar3,puVar4,_SizeOfElements);
    goto LAB_780231be;
  }
  FUN_78023300(_Base,puVar4,_SizeOfElements);
  if ((int)(puVar4 + (-1 - (int)_Base)) < (int)local_100 - (int)puVar3) {
    if (puVar3 < local_100) {
      *local_f8 = puVar3;
      *local_fc = (int)local_100;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    if ((undefined1 *)((int)_Base + _SizeOfElements) < puVar4) {
      local_100 = puVar4 + -_SizeOfElements;
      goto LAB_78023144;
    }
  }
  else {
    if ((undefined1 *)((int)_Base + _SizeOfElements) < puVar4) {
      *local_f8 = _Base;
      *local_fc = (int)puVar4 - _SizeOfElements;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    _Base = puVar3;
    if (puVar3 < local_100) goto LAB_78023144;
  }
LAB_78023165:
  local_f4 = local_f4 + -1;
  local_f8 = local_f8 + -1;
  local_fc = local_fc + -1;
  if (local_f4 < 0) {
    return;
  }
  local_100 = (undefined1 *)*local_fc;
  _Base = (undefined1 *)*local_f8;
  goto LAB_78023144;
}


