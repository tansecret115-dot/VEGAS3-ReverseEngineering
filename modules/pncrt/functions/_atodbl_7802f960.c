/* Module: pncrt.dll
   Function: _atodbl
   Address: 7802f960
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _atodbl(_CRT_DOUBLE *_Result,char *_Str)

{
  int iVar1;
  ushort local_c [6];
  
                    /* 0x2f960  172  _atodbl */
  FUN_7802ebf0(local_c,(int *)&_Str,(byte *)_Str,0,0,0,0);
  iVar1 = FUN_7802f8a0(local_c,(uint *)_Result);
  return iVar1;
}


