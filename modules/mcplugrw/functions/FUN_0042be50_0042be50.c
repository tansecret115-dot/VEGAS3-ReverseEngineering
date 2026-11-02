/* Module: mcplugrw.dll
   Function: FUN_0042be50
   Address: 0042be50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0042be50(LPCSTR param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iMaxLength;
  uint uVar4;
  bool bVar5;
  undefined8 local_10;
  
  iVar3 = _ismbcspace((int)*param_1);
  while (iVar3 != 0) {
    param_1 = CharNextA(param_1);
    iVar3 = _ismbcspace((int)*param_1);
  }
  local_10._0_4_ = 0;
  local_10._4_4_ = 0;
  local_10 = 0;
  if (*param_1 != '\0') {
    do {
      iVar3 = DAT_004a9ad8;
      iMaxLength = DAT_004a9ad8 + 1;
      FUN_0048b360();
      FUN_0048b360();
      lstrcpynA(&stack0xffffffdc,&DAT_004a9ad0,iMaxLength);
      (&stack0xffffffdc)[iVar3] = 0;
      (&stack0xffffffdc)[iVar3] = 0;
      lstrcpynA(&stack0xffffffdc,param_1,iMaxLength);
      (&stack0xffffffdc)[iVar3] = 0;
      (&stack0xffffffdc)[iVar3] = 0;
      iVar3 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
      if (iVar3 == 0) {
        uVar4 = 0;
        uVar1 = DAT_004a9ad8 - 1;
        if (DAT_004a9ad8 != 1) {
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
        local_10 = __allmul((uint)local_10,local_10._4_4_,10,0);
        local_10 = local_10 + (cVar2 + -0x30);
      }
      param_1 = CharNextA(param_1);
    } while (*param_1 != '\0');
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return CONCAT44(local_10._4_4_,(uint)local_10);
}


