/* Module: pncrt.dll
   Function: _fcvt
   Address: 78017010
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign)

{
  int *piVar1;
  char *pcVar2;
  int local_28 [4];
  char local_18 [24];
  
                    /* 0x17010  224  _fcvt */
  piVar1 = FUN_7802fa20(_Val._0_4_,_Val._4_4_,local_28,local_18);
  pcVar2 = FUN_780170a0(piVar1,piVar1[1] + _NumOfDec,_PtDec,(uint *)_PtSign);
  return pcVar2;
}


