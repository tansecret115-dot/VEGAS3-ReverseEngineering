/* Module: vegas30k.dll
   Function: SfCDProject_IsProject
   Address: 01014700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDProject_IsProject(void *,unsigned long *) */

long SfCDProject_IsProject(void *param_1,ulong *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong local_c [3];
  
                    /* 0x14700  284  ?SfCDProject_IsProject@@YGJPAXPAK@Z */
  pvVar1 = param_1;
  local_c[1] = 0;
  local_c[2] = 0;
  SetFilePointer(param_1,0,(PLONG)(local_c + 2),0);
  lVar2 = riff_ReadFileID(pvVar1,local_c,&param_1);
  if (-1 < lVar2) {
    if (param_1 != (void *)0x4a504653) {
      return -0x7fffbffb;
    }
    if (param_2 != (ulong *)0x0) {
      *param_2 = local_c[0];
    }
    lVar2 = 0;
  }
  return lVar2;
}


