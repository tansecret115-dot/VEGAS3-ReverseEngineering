/* Module: pncrt.dll
   Function: _ecvt
   Address: 78017050
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign)

{
  int *piVar1;
  char *pcVar2;
  int local_28 [4];
  char local_18 [24];
  
                    /* 0x17050  205  _ecvt */
  piVar1 = FUN_7802fa20(_Val._0_4_,_Val._4_4_,local_28,local_18);
  pcVar2 = FUN_780170a0(piVar1,_NumOfDigits,_PtDec,(uint *)_PtSign);
  if (pcVar2[_NumOfDigits] != '\0') {
    pcVar2[_NumOfDigits] = '\0';
  }
  return pcVar2;
}


