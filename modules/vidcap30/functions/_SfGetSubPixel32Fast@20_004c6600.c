/* Module: vidcap30.exe
   Function: _SfGetSubPixel32Fast@20
   Address: 004c6600
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetSubPixel32Fast_20(undefined1 *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0xc6600  431  _SfGetSubPixel32Fast@20 */
  iVar1 = (0x4000 - param_5) * (0x4000 - param_4);
  iVar2 = (0x4000 - param_5) * param_4;
  iVar3 = (0x4000 - param_4) * param_5;
  iVar4 = (int)(param_4 * param_5 + (param_4 * param_5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  param_1[2] = (char)((uint)param_2[param_3 + 6] * iVar4 + (uint)param_2[param_3 + 2] * iVar3 +
                      (uint)param_2[6] * iVar2 + (uint)param_2[2] * iVar1 >> 0xe);
  param_1[1] = (char)((uint)param_2[param_3 + 5] * iVar4 + (uint)param_2[param_3 + 1] * iVar3 +
                      (uint)param_2[5] * iVar2 + (uint)param_2[1] * iVar1 >> 0xe);
  *param_1 = (char)((uint)param_2[param_3 + 4] * iVar4 + (uint)param_2[4] * iVar2 +
                    (uint)*param_2 * iVar1 + (uint)param_2[param_3] * iVar3 >> 0xe);
  param_1[3] = (char)((uint)param_2[param_3 + 7] * iVar4 + (uint)param_2[param_3 + 3] * iVar3 +
                      (uint)param_2[7] * iVar2 + (uint)param_2[3] * iVar1 >> 0xe);
  return;
}


