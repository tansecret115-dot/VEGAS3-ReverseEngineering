/* Module: Setup.exe
   Function: _SfTextToNanoTimeTokenEx@40
   Address: 00418ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong _SfTextToNanoTimeTokenEx_40
                   (LPCSTR param_1,_sfposfmt *param_2,int param_3,undefined4 param_4,
                   undefined4 param_5,uint param_6,undefined4 param_7,uint param_8,
                   undefined4 param_9,char **param_10)

{
  longlong lVar1;
  
                    /* 0x18ac0  353  _SfTextToNanoTimeTokenEx@40 */
  lVar1 = _SfTextToNanoTimeToken2_40
                    (param_1,param_2,CONCAT44(param_5,param_4),param_6,param_7,param_8,param_9,
                     param_3 != 0 | 4,param_10);
  return lVar1;
}


