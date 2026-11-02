/* Module: vegas30k.dll
   Function: SfOverlay_GetCompositorGUID
   Address: 0100cd60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfOverlay_GetCompositorGUID(int,struct _GUID *) */

int SfOverlay_GetCompositorGUID(int param_1,_GUID *param_2)

{
  int iVar1;
  
                    /* 0xcd60  473  ?SfOverlay_GetCompositorGUID@@YGHHPAU_GUID@@@Z */
  if ((-1 < param_1) && ((uint)param_1 < 10)) {
    iVar1 = (*(code *)(&PTR_FUN_01204028)[param_1 * 3])(0,0,param_2);
    return (uint)(-1 < iVar1);
  }
  return 0;
}


