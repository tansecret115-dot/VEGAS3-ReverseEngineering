/* Module: sfnetmedia.dll
   Function: FUN_00421690
   Address: 00421690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421690(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t _Size;
  int iVar5;
  CHAR *local_8;
  
  bVar3 = false;
  bVar2 = true;
  iVar4 = _ismbcspace((int)*param_1);
  while (iVar4 != 0) {
    param_1 = CharNextA(param_1);
    iVar4 = _ismbcspace((int)*param_1);
  }
  cVar1 = *param_1;
  local_8 = param_2;
  iVar4 = DAT_00441f34;
  while (DAT_00441f34 = iVar4, cVar1 != '\0') {
    if (bVar2) {
      bVar2 = false;
      if (*param_1 == '(') {
        param_1 = param_1 + 1;
        FUN_004323c0();
        FUN_004323c0();
        lstrcpynA(&stack0xffffffdc,param_1,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        lstrcpynA(&stack0xffffffdc,&DAT_00441f2c,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        iVar4 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
        if (iVar4 == 0) {
          param_1 = param_1 + DAT_00441f34;
        }
        bVar3 = true;
      }
      else {
        FUN_004323c0();
        FUN_004323c0();
        lstrcpynA(&stack0xffffffdc,param_1,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        lstrcpynA(&stack0xffffffdc,&DAT_00441f2c,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        iVar4 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
        if (iVar4 != 0) goto LAB_004217f8;
        bVar3 = true;
        param_1 = param_1 + DAT_00441f34;
      }
    }
    else {
LAB_004217f8:
      iVar4 = DAT_00441f40;
      iVar5 = DAT_00441f40 + 1;
      FUN_004323c0();
      FUN_004323c0();
      lstrcpynA(&stack0xffffffdc,param_1,iVar5);
      (&stack0xffffffdc)[iVar4] = 0;
      (&stack0xffffffdc)[iVar4] = 0;
      lstrcpynA(&stack0xffffffdc,&DAT_00441f38,iVar5);
      (&stack0xffffffdc)[iVar4] = 0;
      (&stack0xffffffdc)[iVar4] = 0;
      iVar5 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
      iVar4 = DAT_00441f4c;
      if (iVar5 == 0) {
        param_1 = param_1 + DAT_00441f40;
      }
      else {
        iVar5 = DAT_00441f4c + 1;
        FUN_004323c0();
        FUN_004323c0();
        lstrcpynA(&stack0xffffffdc,param_1,iVar5);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        lstrcpynA(&stack0xffffffdc,&DAT_00441f44,iVar5);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        iVar4 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
        if (iVar4 == 0) {
          param_1 = param_1 + DAT_00441f4c;
          *local_8 = '.';
          local_8 = local_8 + 1;
        }
        else {
          iVar4 = _ismbcdigit((int)*param_1);
          if (iVar4 == 0) break;
          *local_8 = *param_1;
          local_8 = local_8 + 1;
          param_1 = param_1 + 1;
        }
      }
    }
    iVar4 = DAT_00441f34;
    cVar1 = *param_1;
  }
  *local_8 = '\0';
  if (bVar3) {
    if (param_2 == (LPCSTR)0x0) {
      _Size = 0;
    }
    else {
      iVar4 = lstrlenA(param_2);
      _Size = iVar4 + 1;
    }
    memmove(param_2 + 1,param_2,_Size);
    *param_2 = '-';
  }
  return;
}


