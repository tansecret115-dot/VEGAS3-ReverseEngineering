/* Module: vidcap30.exe
   Function: SfOem_GetLogoDib
   Address: 004bcc30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetLogoDib(void *,int,struct tagBITMAPINFO * *) */

long SfOem_GetLogoDib(void *param_1,int param_2,tagBITMAPINFO **param_3)

{
  tagBITMAPINFO *ptVar1;
  char *pcVar2;
  
                    /* 0xbcc30  110  ?SfOem_GetLogoDib@@YGJPAXHPAPAUtagBITMAPINFO@@@Z */
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
  ptVar1 = (tagBITMAPINFO *)FUN_004bcc80(pcVar2);
  if (ptVar1 != (tagBITMAPINFO *)0x0) {
    *param_3 = ptVar1;
    return 0;
  }
  return -0x7ffb1ff6;
}


