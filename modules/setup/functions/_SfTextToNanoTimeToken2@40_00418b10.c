/* Module: Setup.exe
   Function: _SfTextToNanoTimeToken2@40
   Address: 00418b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00418f69) */
/* WARNING: Removing unreachable block (ram,0x00418c3c) */
/* WARNING: Removing unreachable block (ram,0x00418f7b) */
/* WARNING: Removing unreachable block (ram,0x00418c54) */

longlong _SfTextToNanoTimeToken2_40
                   (LPCSTR param_1,_sfposfmt *param_2,longlong param_3,uint param_4,
                   undefined4 param_5,uint param_6,undefined4 param_7,uint param_8,char **param_9)

{
  char cVar1;
  LPCSTR lpsz;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 *puVar3;
  float10 fVar4;
  longlong lVar5;
  undefined4 local_18 [6];
  
                    /* 0x18b10  351  _SfTextToNanoTimeToken2@40 */
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar5 = 0;
  iVar2 = _ismbcspace((int)*param_1);
  lpsz = param_1;
  while (iVar2 != 0) {
    lpsz = CharNextA(lpsz);
    iVar2 = _ismbcspace((int)*lpsz);
  }
  cVar1 = *lpsz;
  if (cVar1 == '-') {
    param_1 = lpsz + 1;
  }
  if (param_9 != (char **)0x0) {
    iVar2 = lstrlenA(param_1);
    *param_9 = param_1 + iVar2;
  }
  switch(*(undefined4 *)param_2) {
  case 0:
    _SfTextToLongLongToken_8(param_1,param_9);
    iVar2 = *(int *)(param_2 + 4);
    ftol();
    ftol();
    if (iVar2 == 0) {
      lVar5 = 0;
      break;
    }
    goto LAB_00418ee1;
  case 1:
    lVar5 = _SfTextToTimeToken_16(param_1,param_2,param_8 & 1,(int *)param_9);
    lVar5 = __allmul((uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),10000,0);
    break;
  case 2:
    fVar4 = _SfTextToDoubleToken_8(param_1,param_9);
    if ((float10)-0x6b5fca6af2 <= fVar4) {
      lVar5 = ftol();
    }
    else {
      lVar5 = ftol();
    }
    break;
  case 3:
    local_18[0] = 0;
    lVar5 = SfTextToHMSFToken(param_1,param_2,param_8 & 1,param_9);
    break;
  case 4:
    _SfTextToDoubleToken_8(param_1,param_9);
    ftol();
    ftol();
LAB_00418ee1:
    lVar5 = ftol();
    break;
  case 5:
  case 0xd:
    lVar5 = _SfTextToMusicTimeToken_16(param_1,(int *)param_2,param_8);
    break;
  case 6:
    local_18[0] = 5;
    _SFSMPTE_TextToSMPTE_8(param_1,local_18);
    lVar5 = _SFSMPTE_SMPTEToNanos_4(local_18);
    break;
  case 7:
    local_18[0] = 1;
    goto LAB_00418de4;
  case 8:
    local_18[0] = 2;
LAB_00418de4:
    _SFSMPTE_TextToSMPTE_8(param_1,local_18);
    lVar5 = _SFSMPTE_SMPTEToNanos_4(local_18);
    break;
  case 9:
    local_18[0] = 3;
    _SFSMPTE_TextToSMPTE_8(param_1,local_18);
    lVar5 = _SFSMPTE_SMPTEToNanos_4(local_18);
    break;
  case 10:
    local_18[0] = 4;
    _SFSMPTE_TextToSMPTE_8(param_1,local_18);
    lVar5 = _SFSMPTE_SMPTEToNanos_4(local_18);
    break;
  case 0xb:
    lVar5 = _SfTextToLongLongToken_8(param_1,param_9);
    break;
  case 0xc:
    lVar5 = _SfTextToLongLongToken_8(param_1,param_9);
    lVar5 = __allmul((uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),10,0);
    break;
  case 0xf:
    iVar2 = 1;
    goto LAB_00418efa;
  case 0x10:
    iVar2 = 0;
LAB_00418efa:
    lVar5 = SfTextToFeetAndFramesToken(param_1,param_2,iVar2);
    break;
  case 0x11:
    local_18[0] = 0;
    _SFSMPTE_TextToSMPTE_8(param_1,local_18);
    lVar5 = SfHMSFToNanoTime((_smpteval *)local_18,(double)CONCAT44(unaff_EDI,0x4052c000));
  }
  if (cVar1 == '-') {
    lVar5 = CONCAT44(-((int)((ulonglong)lVar5 >> 0x20) + (uint)((int)lVar5 != 0)),-(int)lVar5);
  }
  if ((param_8 >> 1 & 1) == 0) {
    lVar5 = lVar5 + *(longlong *)(param_2 + 0x18);
  }
  if ((param_8 >> 2 & 1) != 0) {
    if (((lVar5 == 0) && (**param_9 != '\0')) && (iVar2 = _ismbcspace((int)**param_9), iVar2 == 0))
    {
      lVar5 = param_3;
    }
    if (lVar5 < CONCAT44(param_5,param_4)) {
      return CONCAT44(param_5,param_4);
    }
    if (CONCAT44(param_7,param_6) < lVar5) {
      return CONCAT44(param_7,param_6);
    }
  }
  return lVar5;
}


