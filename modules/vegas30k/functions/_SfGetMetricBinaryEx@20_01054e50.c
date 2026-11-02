/* Module: vegas30k.dll
   Function: _SfGetMetricBinaryEx@20
   Address: 01054e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfGetMetricBinaryEx_20
          (undefined4 param_1,undefined4 param_2,LPBYTE param_3,uint param_4,uint *param_5)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  LPBYTE pBVar5;
  DWORD local_24;
  CHAR local_20 [32];
  
                    /* 0x54e50  959  _SfGetMetricBinaryEx@20 */
  puVar4 = (undefined1 *)0x0;
  if (param_5 == (uint *)0x0) {
    return &DAT_80070057;
  }
  hKey = (HKEY)FUN_01054aa0(param_1,param_2,3,local_20);
  uVar2 = param_4;
  if (hKey != (HKEY)0x0) {
    local_24 = 3;
    LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&local_24,param_3,&param_4);
    if (LVar1 == 0xea) {
      puVar4 = (undefined1 *)0x8004e03c;
    }
    else if ((LVar1 != 0) || (local_24 != 3)) {
      puVar4 = (undefined1 *)0x1;
      param_4 = 0;
    }
    if (param_4 < uVar2) {
      uVar2 = uVar2 - param_4;
      pBVar5 = param_3 + param_4;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        pBVar5[0] = '\0';
        pBVar5[1] = '\0';
        pBVar5[2] = '\0';
        pBVar5[3] = '\0';
        pBVar5 = pBVar5 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pBVar5 = '\0';
        pBVar5 = pBVar5 + 1;
      }
    }
    *param_5 = param_4;
    FUN_01054b40(param_1,param_2,3,hKey);
    return puVar4;
  }
  return (undefined1 *)0x8004e00a;
}


