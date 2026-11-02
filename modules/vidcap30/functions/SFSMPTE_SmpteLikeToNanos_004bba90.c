/* Module: vidcap30.exe
   Function: SFSMPTE_SmpteLikeToNanos
   Address: 004bba90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall SFSMPTE_SmpteLikeToNanos(double,struct _smpteval *) */

__int64 SFSMPTE_SmpteLikeToNanos(double param_1,_smpteval *param_2)

{
  __int64 _Var1;
  
                    /* 0xbba90  65  ?SFSMPTE_SmpteLikeToNanos@@YG_JNPAU_smpteval@@@Z */
  _Var1 = ftol(*(undefined4 *)(param_2 + 0x10),0);
  return _Var1;
}


