/* Module: vegas30k.dll
   Function: GetCExpStorageFS
   Address: 01023a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct IExpStorage * __stdcall GetCExpStorageFS(int (__stdcall*)(class CExpStorageFS *,struct
   _EXPMSG *,unsigned long,long *),unsigned long,struct _initexpstorage *) */

IExpStorage *
GetCExpStorageFS(_func_int_CExpStorageFS_ptr__EXPMSG_ptr_ulong_long_ptr *param_1,ulong param_2,
                _initexpstorage *param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  IExpStorage *pIVar2;
  
                    /* 0x23a50  77
                       ?GetCExpStorageFS@@YGPAUIExpStorage@@P6GHPAVCExpStorageFS@@PAU_EXPMSG@@KPAJ@ZKPAU_initexpstorage@@@Z
                        */
  hMem = GlobalAlloc(0x40,0x3a8);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    pIVar2 = (IExpStorage *)FUN_01020860(param_1,param_2,param_3);
    return pIVar2;
  }
  return (IExpStorage *)0x0;
}


