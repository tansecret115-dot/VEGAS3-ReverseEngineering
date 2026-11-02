/* Module: vidcap30.exe
   Function: _SfLoadWindowPlacement@16
   Address: 0047f890
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfLoadWindowPlacement_16
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  LPRECT lprc;
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
                    /* 0x7f890  533  _SfLoadWindowPlacement@16 */
  iVar1 = _SfGetMetricBinary_16(param_1,param_2,param_4,0x2c);
  bVar3 = iVar1 != 0x2c;
  if ((param_3 == 2) &&
     (((bVar3 = false, iVar1 != 0x2c || (-1 < (int)param_4[5])) || (-1 < (int)param_4[6])))) {
    puVar2 = param_4;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    lprc = (LPRECT)(param_4 + 7);
    param_4[3] = 0xffffffff;
    param_4[5] = 0xffffffff;
    *param_4 = 0x2c;
    param_4[1] = 0;
    param_4[2] = 1;
    param_4[4] = 0xffffffff;
    param_4[6] = 0xffffffff;
    SystemParametersInfoA(0x30,0,lprc,0);
    iVar1 = param_4[9] - lprc->left;
    InflateRect(lprc,-((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4),
                -((int)((param_4[10] - param_4[8]) +
                       ((int)(param_4[10] - param_4[8]) >> 0x1f & 0xfU)) >> 4));
    bVar3 = true;
  }
  return bVar3;
}


