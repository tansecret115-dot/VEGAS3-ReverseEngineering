/* Module: vegas30k.dll
   Function: SfOem_GetLogoDib
   Address: 01004570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetLogoDib(void *,int,struct tagBITMAPINFO * *) */

long SfOem_GetLogoDib(void *param_1,int param_2,tagBITMAPINFO **param_3)

{
  tagBITMAPINFO *ptVar1;
  char *pcVar2;
  
                    /* 0x4570  458  ?SfOem_GetLogoDib@@YGJPAXHPAPAUtagBITMAPINFO@@@Z */
  if ((param_3 == (tagBITMAPINFO **)0x0) || (param_1 == (void *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_3 = (tagBITMAPINFO *)0x0;
  if (param_2 == 0) {
    pcVar2 = "logo";
  }
  else {
    pcVar2 = "logohot";
  }
  ptVar1 = (tagBITMAPINFO *)FUN_010045c0(pcVar2);
  if (ptVar1 != (tagBITMAPINFO *)0x0) {
    *param_3 = ptVar1;
    return 0;
  }
  return -0x7ffb1ff6;
}


