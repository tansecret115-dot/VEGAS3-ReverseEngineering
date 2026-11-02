/* Module: sfnetmedia.dll
   Function: FUN_004226f0
   Address: 004226f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004226f0(uchar *param_1,uint *param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = s__I64d_0043fd30;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
    if ((param_5 & 1) == 0) {
      pcVar2 = (&PTR_s__I64d_0043ac8c)[uVar1];
    }
    else {
      pcVar2 = (&PTR_s__I64d_0043acd4)[uVar1];
    }
  }
  FUN_004221a0(param_1,(int *)param_2,param_3,param_4,pcVar2,param_5);
  return;
}


