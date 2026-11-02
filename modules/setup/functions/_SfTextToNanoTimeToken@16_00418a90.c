/* Module: Setup.exe
   Function: _SfTextToNanoTimeToken@16
   Address: 00418a90
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong _SfTextToNanoTimeToken_16(LPCSTR param_1,_sfposfmt *param_2,int param_3,char **param_4)

{
  longlong lVar1;
  
                    /* 0x18a90  352  _SfTextToNanoTimeToken@16 */
  lVar1 = _SfTextToNanoTimeToken2_40(param_1,param_2,0,0,0,0,0,(uint)(param_3 != 0),param_4);
  return lVar1;
}


