/* Module: pncrt.dll
   Function: FUN_780283d0
   Address: 780283d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_780283d0(char *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint _OpenFlag;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  cVar1 = *param_2;
  bVar3 = false;
  bVar4 = false;
  if (cVar1 == 'a') {
    _OpenFlag = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      _OpenFlag = 0;
      uVar7 = _commode | 1;
      goto LAB_7802840d;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    _OpenFlag = 0x301;
  }
  uVar7 = _commode | 2;
LAB_7802840d:
  pcVar6 = param_2 + 1;
  bVar2 = true;
  cVar1 = *pcVar6;
  do {
    if ((cVar1 == '\0') || (!bVar2)) {
      iVar5 = _sopen(param_1,_OpenFlag,param_3,0x1a4);
      if (-1 < iVar5) {
        param_4[3] = uVar7;
        param_4[1] = 0;
        *param_4 = 0;
        param_4[2] = 0;
        param_4[7] = 0;
        param_4[4] = iVar5;
        return param_4;
      }
      return (undefined4 *)0x0;
    }
    switch(cVar1) {
    case '+':
      if ((_OpenFlag & 2) != 0) break;
      _OpenFlag = _OpenFlag & 0xfffffffe | 2;
      uVar7 = uVar7 & 0xfffffffc | 0x80;
      goto LAB_780284be;
    case 'D':
      if ((_OpenFlag & 0x40) == 0) {
        _OpenFlag = _OpenFlag | 0x40;
        goto LAB_780284be;
      }
      break;
    case 'R':
      if (!bVar4) {
        bVar4 = true;
        _OpenFlag = _OpenFlag | 0x10;
        goto LAB_780284be;
      }
      break;
    case 'S':
      if (!bVar4) {
        bVar4 = true;
        _OpenFlag = _OpenFlag | 0x20;
        goto LAB_780284be;
      }
      break;
    case 'T':
      if ((_OpenFlag & 0x1000) == 0) {
        _OpenFlag = _OpenFlag | 0x1000;
        goto LAB_780284be;
      }
      break;
    case 'b':
      if ((_OpenFlag & 0xc000) == 0) {
        _OpenFlag = _OpenFlag | 0x8000;
        goto LAB_780284be;
      }
      break;
    case 'c':
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 | 0x4000;
        goto LAB_780284be;
      }
      break;
    case 'n':
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 & 0xffffbfff;
        goto LAB_780284be;
      }
      break;
    case 't':
      if ((_OpenFlag & 0xc000) == 0) {
        _OpenFlag = _OpenFlag | 0x4000;
        goto LAB_780284be;
      }
    }
    bVar2 = false;
LAB_780284be:
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  } while( true );
}


