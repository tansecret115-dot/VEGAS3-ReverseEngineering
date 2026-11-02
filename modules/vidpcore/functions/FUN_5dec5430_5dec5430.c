/* Module: vidpcore.dll
   Function: FUN_5dec5430
   Address: 5dec5430
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_5dec5430(LPCSTR param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = _ismbcspace((int)*param_1);
  while (iVar3 != 0) {
    param_1 = CharNextA(param_1);
    iVar3 = _ismbcspace((int)*param_1);
  }
  lVar6 = 0;
  cVar2 = *param_1;
  iVar3 = DAT_5df430b8;
  while (DAT_5df430b8 = iVar3, cVar2 != '\0') {
    FUN_5df157d0();
    FUN_5df157d0();
    lstrcpynA(&stack0xffffffdc,&DAT_5df430b0,iVar3 + 1);
    (&stack0xffffffdc)[iVar3] = 0;
    (&stack0xffffffdc)[iVar3] = 0;
    lstrcpynA(&stack0xffffffdc,param_1,iVar3 + 1);
    (&stack0xffffffdc)[iVar3] = 0;
    (&stack0xffffffdc)[iVar3] = 0;
    iVar3 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
    if (iVar3 == 0) {
      uVar4 = 0;
      uVar1 = DAT_5df430b8 - 1;
      if (DAT_5df430b8 != 1) {
        do {
          param_1 = CharNextA(param_1);
          bVar5 = 0xfffffffe < uVar4;
          uVar4 = uVar4 + 1;
          if (bVar5) break;
        } while (uVar4 < uVar1);
      }
    }
    else {
      iVar3 = _ismbcdigit((int)*param_1);
      if (iVar3 == 0) break;
      cVar2 = *param_1;
      lVar6 = __allmul(lVar6,10,0);
      lVar6 = lVar6 + (cVar2 + -0x30);
    }
    param_1 = CharNextA(param_1);
    iVar3 = DAT_5df430b8;
    cVar2 = *param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return lVar6;
}


