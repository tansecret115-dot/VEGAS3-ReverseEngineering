/* Module: vidcap30.exe
   Function: _SfGetMetricBinary@16
   Address: 004869e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfGetMetricBinary_16(undefined4 param_1,DWORD param_2,LPBYTE param_3,uint param_4)

{
  DWORD DVar1;
  HKEY hKey;
  LSTATUS LVar2;
  uint uVar3;
  uint uVar4;
  LPBYTE pBVar5;
  DWORD local_24;
  CHAR local_20 [32];
  
                    /* 0x869e0  406  _SfGetMetricBinary@16 */
  DVar1 = param_2;
  hKey = (HKEY)FUN_004866f0(param_1,param_2,3,local_20);
  uVar3 = param_4;
  pBVar5 = param_3;
  if (hKey != (HKEY)0x0) {
    param_2 = param_4;
    local_24 = 3;
    LVar2 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&local_24,param_3,&param_2);
    if ((LVar2 != 0) || (local_24 != 3)) {
      param_2 = 0;
    }
    if (param_2 < uVar3) {
      uVar3 = uVar3 - param_2;
      pBVar5 = pBVar5 + param_2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pBVar5[0] = '\0';
        pBVar5[1] = '\0';
        pBVar5[2] = '\0';
        pBVar5[3] = '\0';
        pBVar5 = pBVar5 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pBVar5 = '\0';
        pBVar5 = pBVar5 + 1;
      }
    }
    FUN_00486790(param_1,DVar1,3,hKey);
    return param_2;
  }
  for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    param_3[0] = '\0';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
    param_3 = param_3 + 4;
  }
  for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
    *param_3 = '\0';
    param_3 = param_3 + 1;
  }
  return 0;
}


