/* Module: vidcap30.exe
   Function: _SfFourCCToString@8
   Address: 00484d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfFourCCToString_8(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
                    /* 0x84d80  387  _SfFourCCToString@8 */
  iVar3 = 4;
  pbVar2 = param_2;
  do {
    bVar1 = pbVar2[(int)((int)&param_1 + -(int)param_2)];
    if ((bVar1 < 0x20) || (0x7e < bVar1)) {
      bVar1 = 0x2e;
    }
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_2[4] = 0;
  return;
}


