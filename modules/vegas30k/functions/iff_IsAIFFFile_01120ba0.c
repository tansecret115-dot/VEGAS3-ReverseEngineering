/* Module: vegas30k.dll
   Function: iff_IsAIFFFile
   Address: 01120ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_IsAIFFFile,8 */

undefined4 iff_IsAIFFFile(HANDLE param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined1 local_8 [4];
  undefined4 local_4;
  
                    /* 0x120ba0  1372  _iff_IsAIFFFile@8 */
  pvVar1 = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar2 = iff_ReadFormType(pvVar1,local_8,&param_1);
  if ((-1 < iVar2) && (param_1 == (HANDLE)0x41494646)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_4;
    }
    return 1;
  }
  return 0;
}


