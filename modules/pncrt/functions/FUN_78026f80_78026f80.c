/* Module: pncrt.dll
   Function: FUN_78026f80
   Address: 78026f80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78026f80(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  FILE *_File;
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FILE *pFVar5;
  FILE *pFVar6;
  char *pcVar7;
  FILE *pFVar8;
  char *pcVar9;
  
  _File = param_4;
  pFVar5 = (FILE *)(param_3 * param_2);
  if (pFVar5 == (FILE *)0x0) {
    return 0;
  }
  pFVar6 = pFVar5;
  if ((param_4->_flag & 0x10cU) == 0) {
    param_4 = (FILE *)0x1000;
    pFVar8 = (FILE *)0x1000;
  }
  else {
    pFVar8 = (FILE *)param_4->_bufsiz;
    param_4 = pFVar8;
  }
  do {
    if (((_File->_flag & 0x10cU) == 0) || (pFVar1 = (FILE *)_File->_cnt, pFVar1 == (FILE *)0x0)) {
      if (pFVar6 < pFVar8) {
        iVar3 = _filbuf(_File);
        if (iVar3 == -1) {
          return (uint)((int)pFVar5 - (int)pFVar6) / param_2;
        }
        *param_1 = (char)iVar3;
        pFVar8 = (FILE *)_File->_bufsiz;
        param_1 = param_1 + 1;
        iVar3 = -1;
        param_4 = pFVar8;
      }
      else {
        pFVar1 = pFVar6;
        if (pFVar8 != (FILE *)0x0) {
          pFVar1 = (FILE *)((int)pFVar6 - (uint)pFVar6 % (uint)pFVar8);
        }
        iVar2 = _read(_File->_file,param_1,(uint)pFVar1);
        if (iVar2 == 0) {
          _File->_flag = _File->_flag | 0x10;
          return (uint)((int)pFVar5 - (int)pFVar6) / param_2;
        }
        if (iVar2 == -1) {
          _File->_flag = _File->_flag | 0x20;
          return (uint)((int)pFVar5 - (int)pFVar6) / param_2;
        }
        iVar3 = -iVar2;
        param_1 = param_1 + iVar2;
      }
    }
    else {
      if (pFVar6 < pFVar1) {
        pFVar1 = pFVar6;
      }
      iVar3 = -(int)pFVar1;
      pcVar7 = _File->_ptr;
      pcVar9 = param_1;
      for (uVar4 = (uint)pFVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = (uint)pFVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      param_1 = param_1 + (int)pFVar1;
      _File->_cnt = _File->_cnt - (int)pFVar1;
      _File->_ptr = (char *)((int)&pFVar1->_ptr + (int)_File->_ptr);
      pFVar8 = param_4;
    }
    pFVar6 = (FILE *)((int)&pFVar6->_ptr + iVar3);
    if (pFVar6 == (FILE *)0x0) {
      return param_3;
    }
  } while( true );
}


