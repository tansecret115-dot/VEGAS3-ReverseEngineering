/* Module: pncrt.dll
   Function: __STRINGTOLD
   Address: 7802f380
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl __STRINGTOLD(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort local_c [6];
  
                    /* 0x2f380  91  __STRINGTOLD */
  uVar2 = FUN_7802ebf0(local_c,(int *)p_end_ptr,(byte *)str,mult12,0,0,0);
  bVar1 = FUN_7802f8e0(local_c,(undefined4 *)pld);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}


