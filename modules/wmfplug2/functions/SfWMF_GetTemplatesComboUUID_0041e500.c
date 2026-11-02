/* Module: wmfplug2.dll
   Function: SfWMF_GetTemplatesComboUUID
   Address: 0041e500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct _GUID __stdcall SfWMF_GetTemplatesComboUUID(struct HWND__ *,int) */

_GUID * SfWMF_GetTemplatesComboUUID(_GUID *__return_storage_ptr__,HWND__ *param_1,int param_2)

{
  ulong uVar1;
  undefined2 uVar2;
  LRESULT LVar3;
  ulong *puVar4;
  
                    /* 0x1e500  28  ?SfWMF_GetTemplatesComboUUID@@YG?AU_GUID@@PAUHWND__@@H@Z */
  if (-1 < param_2) {
    LVar3 = SendMessageA(param_1,0x146,0,0);
    if (param_2 < LVar3) {
      puVar4 = (ulong *)SendMessageA(param_1,0x150,param_2,0);
      if (puVar4 != (ulong *)0x0) {
        __return_storage_ptr__->Data1 = *puVar4;
        uVar1 = puVar4[1];
        __return_storage_ptr__->Data2 = (short)uVar1;
        __return_storage_ptr__->Data3 = (short)(uVar1 >> 0x10);
        *(ulong *)__return_storage_ptr__->Data4 = puVar4[2];
        *(ulong *)(__return_storage_ptr__->Data4 + 4) = puVar4[3];
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->Data1 = DAT_004851f8;
  uVar2 = DAT_004851fc._2_2_;
  __return_storage_ptr__->Data2 = (undefined2)DAT_004851fc;
  __return_storage_ptr__->Data3 = uVar2;
  *(undefined4 *)__return_storage_ptr__->Data4 = DAT_00485200;
  *(undefined4 *)(__return_storage_ptr__->Data4 + 4) = DAT_00485204;
  return __return_storage_ptr__;
}


