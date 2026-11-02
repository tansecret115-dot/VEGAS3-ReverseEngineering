/* Module: Setup.exe
   Function: _SfLoadWindowPlacement@16
   Address: 0041b700
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfLoadWindowPlacement_16(int param_1,uint param_2,int param_3,LPBYTE param_4)

{
  LPRECT lprc;
  uint uVar1;
  int iVar2;
  LPBYTE pBVar3;
  bool bVar4;
  
                    /* 0x1b700  262  _SfLoadWindowPlacement@16 */
  uVar1 = _SfGetMetricBinary_16(param_1,param_2,param_4,0x2c);
  bVar4 = uVar1 != 0x2c;
  if ((param_3 == 2) &&
     (((bVar4 = false, uVar1 != 0x2c || (-1 < *(int *)(param_4 + 0x14))) ||
      (-1 < *(int *)(param_4 + 0x18))))) {
    pBVar3 = param_4;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      pBVar3[0] = '\0';
      pBVar3[1] = '\0';
      pBVar3[2] = '\0';
      pBVar3[3] = '\0';
      pBVar3 = pBVar3 + 4;
    }
    lprc = (LPRECT)(param_4 + 0x1c);
    param_4[0xc] = 0xff;
    param_4[0xd] = 0xff;
    param_4[0xe] = 0xff;
    param_4[0xf] = 0xff;
    param_4[0x14] = 0xff;
    param_4[0x15] = 0xff;
    param_4[0x16] = 0xff;
    param_4[0x17] = 0xff;
    param_4[0] = ',';
    param_4[1] = '\0';
    param_4[2] = '\0';
    param_4[3] = '\0';
    param_4[4] = '\0';
    param_4[5] = '\0';
    param_4[6] = '\0';
    param_4[7] = '\0';
    param_4[8] = '\x01';
    param_4[9] = '\0';
    param_4[10] = '\0';
    param_4[0xb] = '\0';
    param_4[0x10] = 0xff;
    param_4[0x11] = 0xff;
    param_4[0x12] = 0xff;
    param_4[0x13] = 0xff;
    param_4[0x18] = 0xff;
    param_4[0x19] = 0xff;
    param_4[0x1a] = 0xff;
    param_4[0x1b] = 0xff;
    SystemParametersInfoA(0x30,0,lprc,0);
    iVar2 = *(int *)(param_4 + 0x24) - lprc->left;
    InflateRect(lprc,-((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4),
                -((int)((*(int *)(param_4 + 0x28) - *(int *)(param_4 + 0x20)) +
                       (*(int *)(param_4 + 0x28) - *(int *)(param_4 + 0x20) >> 0x1f & 0xfU)) >> 4));
    bVar4 = true;
  }
  return bVar4;
}


