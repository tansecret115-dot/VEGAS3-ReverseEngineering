/* Module: vegas30k.dll
   Function: SfColorPickTerminate
   Address: 01093410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfColorPickTerminate(struct HINSTANCE__ *,char const *) */

int SfColorPickTerminate(HINSTANCE__ *param_1,char *param_2)

{
  int iVar1;
  
                    /* 0x93410  362  ?SfColorPickTerminate@@YGHPAUHINSTANCE__@@PBD@Z */
  iVar1 = _SfUnregisterClass_8(param_2,param_1);
  return iVar1;
}


