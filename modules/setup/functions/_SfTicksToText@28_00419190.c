/* Module: Setup.exe
   Function: _SfTicksToText@28
   Address: 00419190
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfTicksToText_28(uchar *param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  
                    /* 0x19190  356  _SfTicksToText@28 */
  uVar1 = *(int *)(param_2 + 0x24) * (uint)*(ushort *)(param_2 + 0x22);
  __alldiv(param_3,param_4,uVar1,(int)uVar1 >> 0x1f);
  if (param_6 == 0) {
    SfPrintF(param_1,(BYTE *)"%d$&:%u$&.%03u");
    lstrlenA((LPCSTR)param_1);
    return;
  }
  SfPrintF(param_1,(BYTE *)"%d$&:%1u");
  lstrlenA((LPCSTR)param_1);
  return;
}


