/* Module: pncrt.dll
   Function: FUN_78028fb0
   Address: 78028fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78028fb0(wchar_t *param_1,short *param_2,int param_3,undefined4 *param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint _OpenFlag;
  short *psVar6;
  uint uVar7;
  
  sVar1 = *param_2;
  bVar3 = false;
  bVar4 = false;
  if (sVar1 == 0x61) {
    _OpenFlag = 0x109;
  }
  else {
    if (sVar1 == 0x72) {
      _OpenFlag = 0;
      uVar7 = _commode | 1;
      goto LAB_78028ff3;
    }
    if (sVar1 != 0x77) {
      return (undefined4 *)0x0;
    }
    _OpenFlag = 0x301;
  }
  uVar7 = _commode | 2;
LAB_78028ff3:
  sVar1 = param_2[1];
  psVar6 = param_2 + 1;
  bVar2 = true;
  do {
    if ((sVar1 == 0) || (!bVar2)) {
      iVar5 = _wsopen(param_1,_OpenFlag,param_3,0x1a4);
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
    switch(sVar1) {
    case 0x2b:
      if ((_OpenFlag & 2) != 0) break;
      _OpenFlag = _OpenFlag & 0xfffffffe | 2;
      uVar7 = uVar7 & 0xfffffffc | 0x80;
      goto LAB_780290b2;
    case 0x44:
      if ((_OpenFlag & 0x40) == 0) {
        _OpenFlag = _OpenFlag | 0x40;
        goto LAB_780290b2;
      }
      break;
    case 0x52:
      if (!bVar4) {
        bVar4 = true;
        _OpenFlag = _OpenFlag | 0x10;
        goto LAB_780290b2;
      }
      break;
    case 0x53:
      if (!bVar4) {
        bVar4 = true;
        _OpenFlag = _OpenFlag | 0x20;
        goto LAB_780290b2;
      }
      break;
    case 0x54:
      if ((_OpenFlag & 0x1000) == 0) {
        _OpenFlag = _OpenFlag | 0x1000;
        goto LAB_780290b2;
      }
      break;
    case 0x62:
      if ((_OpenFlag & 0xc000) == 0) {
        _OpenFlag = _OpenFlag | 0x8000;
        goto LAB_780290b2;
      }
      break;
    case 99:
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 | 0x4000;
        goto LAB_780290b2;
      }
      break;
    case 0x6e:
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 & 0xffffbfff;
        goto LAB_780290b2;
      }
      break;
    case 0x74:
      if ((_OpenFlag & 0xc000) == 0) {
        _OpenFlag = _OpenFlag | 0x4000;
        goto LAB_780290b2;
      }
    }
    bVar2 = false;
LAB_780290b2:
    psVar6 = psVar6 + 1;
    sVar1 = *psVar6;
  } while( true );
}


