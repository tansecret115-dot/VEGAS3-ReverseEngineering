/* Module: vegas30k.dll
   Function: _SfTicksToText@28
   Address: 01096300
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfTicksToText_28(LPCSTR param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                      int param_6,uint param_7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
                    /* 0x96300  1231  _SfTicksToText@28 */
  uVar2 = *(uint *)(param_2 + 0x24);
  uVar1 = *(ushort *)(param_2 + 0x22);
  iVar5 = uVar2 * uVar1;
  iVar3 = __alldiv(param_3,param_4,iVar5,iVar5 >> 0x1f);
  uVar4 = param_3 - iVar3 * iVar5;
  if ((int)uVar4 < 0) {
    iVar3 = iVar3 + -1;
    uVar4 = uVar4 + iVar5;
  }
  iVar5 = (int)(((ulonglong)uVar4 / (ulonglong)uVar2) % (ulonglong)(uint)uVar1);
  if (param_5 == 1) {
    if (iVar3 < 0) {
      iVar3 = iVar3 + -1;
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 1;
  }
  if (param_6 != 0) {
    SfPrintF(param_1,"%d$&:%1u",iVar3,iVar5);
    lstrlenA(param_1);
    return;
  }
  SfPrintF(param_1,"%d$&:%u$&.%03u",iVar3,iVar5,
           (int)(((ulonglong)uVar4 % (ulonglong)uVar2) / (ulonglong)param_7));
  lstrlenA(param_1);
  return;
}


