/* Module: rmbe3260.dll
   Function: FUN_6604d1e0
   Address: 6604d1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6604d1e0(int param_1,uint param_2,int param_3,short *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  if (param_5 == 0) {
    param_5 = DAT_66075330;
  }
  iVar2 = param_1;
  if ((DAT_66075324 & 0xffff) <= (param_2 & 0xffff)) {
    do {
      iVar1 = FUN_6604dad0(iVar2,param_3,param_5);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      *param_4 = *param_4 + (short)DAT_6606ecb8;
      iVar2 = iVar2 + (DAT_66075324 & 0xffff);
      param_3 = param_3 + (DAT_6606ecb8 & 0xffff);
    } while ((int)(DAT_66075324 & 0xffff) <= (int)((param_1 - iVar2) + (param_2 & 0xffff)));
    return 0;
  }
  return 0;
}


