/* Module: vegas30.exe
   Function: FUN_0055d9c0
   Address: 0055d9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0055d9c0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  LPSTR lpString1;
  int iVar3;
  int iVar4;
  undefined4 local_110;
  int local_10c;
  int local_108;
  char local_104 [260];
  
  iVar3 = 0;
  iVar1 = _SfMetric_Open_16(&local_110,"Vegas",0x300004c,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = _SfGetMetricEx_20(local_110,100,0,300,0xf);
  local_10c = 0;
  local_108 = iVar1;
  if (0 < iVar1) {
    do {
      iVar4 = local_10c;
      iVar2 = _SfGetMetricStringEx_24(local_110,local_10c + 1000,local_104,0x104,0,1);
      if ((iVar2 != 0) && (local_104[0] != '\0')) {
        iVar1 = lstrlenA(local_104);
        hMem = GlobalAlloc(0x42,iVar1 + 1U);
        lpString1 = GlobalLock(hMem);
        *param_2 = lpString1;
        lstrcpynA(lpString1,local_104,iVar1 + 1U);
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 1;
        lpString1[iVar1] = '\0';
        iVar4 = local_10c;
        iVar1 = local_108;
        if (param_3 <= iVar3) break;
      }
      local_10c = iVar4 + 1;
    } while (local_10c < iVar1);
  }
  _SfMetric_Close_4(local_110);
  return iVar3;
}


