/* Module: pncrt.dll
   Function: _atoldbl
   Address: 7802f9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _atoldbl(_LDOUBLE *_Result,char *_Str)

{
  bool bVar1;
  undefined3 extraout_var;
  ushort local_c [6];
  
                    /* 0x2f9a0  174  _atoldbl */
  FUN_7802ebf0(local_c,(int *)&_Str,(byte *)_Str,1,0,0,0);
  bVar1 = FUN_7802f8e0(local_c,(undefined4 *)_Result);
  return CONCAT31(extraout_var,bVar1);
}


