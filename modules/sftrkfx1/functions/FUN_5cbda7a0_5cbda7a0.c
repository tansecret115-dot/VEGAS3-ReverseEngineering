/* Module: sftrkfx1.dll
   Function: FUN_5cbda7a0
   Address: 5cbda7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbda7a0(LPCSTR param_1,LPCSTR param_2)

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
  iVar4 = DAT_5cc116cc;
  while (DAT_5cc116cc = iVar4, cVar1 != '\0') {
    if (bVar2) {
      bVar2 = false;
      if (*param_1 == '(') {
        param_1 = param_1 + 1;
        FUN_5cc020f0();
        FUN_5cc020f0();
        lstrcpynA(&stack0xffffffdc,param_1,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        lstrcpynA(&stack0xffffffdc,&DAT_5cc116c4,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        iVar4 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
        if (iVar4 == 0) {
          param_1 = param_1 + DAT_5cc116cc;
        }
        bVar3 = true;
      }
      else {
        FUN_5cc020f0();
        FUN_5cc020f0();
        lstrcpynA(&stack0xffffffdc,param_1,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        lstrcpynA(&stack0xffffffdc,&DAT_5cc116c4,iVar4 + 1);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        iVar4 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
        if (iVar4 != 0) goto LAB_5cbda908;
        bVar3 = true;
        param_1 = param_1 + DAT_5cc116cc;
      }
    }
    else {
LAB_5cbda908:
      iVar4 = DAT_5cc116d8;
      iVar5 = DAT_5cc116d8 + 1;
      FUN_5cc020f0();
      FUN_5cc020f0();
      lstrcpynA(&stack0xffffffdc,param_1,iVar5);
      (&stack0xffffffdc)[iVar4] = 0;
      (&stack0xffffffdc)[iVar4] = 0;
      lstrcpynA(&stack0xffffffdc,&DAT_5cc116d0,iVar5);
      (&stack0xffffffdc)[iVar4] = 0;
      (&stack0xffffffdc)[iVar4] = 0;
      iVar5 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
      iVar4 = DAT_5cc116e4;
      if (iVar5 == 0) {
        param_1 = param_1 + DAT_5cc116d8;
      }
      else {
        iVar5 = DAT_5cc116e4 + 1;
        FUN_5cc020f0();
        FUN_5cc020f0();
        lstrcpynA(&stack0xffffffdc,param_1,iVar5);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        lstrcpynA(&stack0xffffffdc,&DAT_5cc116dc,iVar5);
        (&stack0xffffffdc)[iVar4] = 0;
        (&stack0xffffffdc)[iVar4] = 0;
        iVar4 = lstrcmpA(&stack0xffffffdc,&stack0xffffffdc);
        if (iVar4 == 0) {
          param_1 = param_1 + DAT_5cc116e4;
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
    iVar4 = DAT_5cc116cc;
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


