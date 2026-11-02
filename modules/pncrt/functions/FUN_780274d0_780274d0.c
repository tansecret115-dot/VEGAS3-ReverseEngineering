/* Module: pncrt.dll
   Function: FUN_780274d0
   Address: 780274d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_780274d0(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  FILE *_File;
  FILE *pFVar1;
  int iVar2;
  FILE *pFVar3;
  uint uVar4;
  FILE *pFVar5;
  FILE *pFVar6;
  char *pcVar7;
  char *pcVar8;
  
  _File = param_4;
  pFVar5 = (FILE *)(param_3 * param_2);
  if (pFVar5 == (FILE *)0x0) {
    return 0;
  }
  pFVar6 = pFVar5;
  if ((param_4->_flag & 0x10cU) == 0) {
    param_4 = (FILE *)0x1000;
  }
  else {
    param_4 = (FILE *)param_4->_bufsiz;
  }
  do {
    uVar4 = _File->_flag & 0x108;
    if ((uVar4 == 0) || (pFVar1 = (FILE *)_File->_cnt, pFVar1 == (FILE *)0x0)) {
      if (pFVar6 < param_4) {
        iVar2 = _flsbuf((int)*param_1,_File);
        if (iVar2 == -1) goto LAB_78027604;
        param_4 = (FILE *)_File->_bufsiz;
        param_1 = param_1 + 1;
        pFVar6 = (FILE *)((int)&pFVar6[-1]._tmpfname + 3);
        if ((int)param_4 < 1) {
          param_4 = (FILE *)0x1;
        }
      }
      else {
        if ((uVar4 != 0) && (iVar2 = FUN_7800e5c0((int *)_File), iVar2 != 0)) {
LAB_78027604:
          return (uint)((int)pFVar5 - (int)pFVar6) / param_2;
        }
        pFVar1 = pFVar6;
        if (param_4 != (FILE *)0x0) {
          pFVar1 = (FILE *)((int)pFVar6 - (uint)pFVar6 % (uint)param_4);
        }
        pFVar3 = (FILE *)_write(_File->_file,param_1,(uint)pFVar1);
        if (pFVar3 == (FILE *)0xffffffff) {
LAB_780275e9:
          _File->_flag = _File->_flag | 0x20;
          return (uint)((int)pFVar5 - (int)pFVar6) / param_2;
        }
        pFVar6 = (FILE *)((int)pFVar6 - (int)pFVar3);
        param_1 = param_1 + (int)pFVar3;
        if (pFVar3 < pFVar1) goto LAB_780275e9;
      }
    }
    else {
      if (pFVar6 < pFVar1) {
        pFVar1 = pFVar6;
      }
      pFVar6 = (FILE *)((int)pFVar6 - (int)pFVar1);
      pcVar7 = param_1;
      pcVar8 = _File->_ptr;
      for (uVar4 = (uint)pFVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = (uint)pFVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      param_1 = param_1 + (int)pFVar1;
      _File->_cnt = _File->_cnt - (int)pFVar1;
      _File->_ptr = (char *)((int)&pFVar1->_ptr + (int)_File->_ptr);
    }
    if (pFVar6 == (FILE *)0x0) {
      return param_3;
    }
  } while( true );
}


