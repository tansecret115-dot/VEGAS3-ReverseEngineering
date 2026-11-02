/* Module: vegas30k.dll
   Function: SfOem_HasLogo
   Address: 01004340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_HasLogo(void *,int *) */

long SfOem_HasLogo(void *param_1,int *param_2)

{
  long lVar1;
  undefined1 local_104 [260];
  
                    /* 0x4340  467  ?SfOem_HasLogo@@YGJPAXPAH@Z */
  if ((param_2 != (int *)0x0) && (param_1 != (void *)0x0)) {
    lVar1 = FUN_010040c0(param_1,&DAT_011db164,2,local_104,0x104,0);
    *param_2 = (uint)(-1 < lVar1);
    return lVar1;
  }
  return -0x7ff8ffa9;
}


