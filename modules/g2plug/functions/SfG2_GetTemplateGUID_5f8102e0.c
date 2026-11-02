/* Module: g2plug.dll
   Function: SfG2_GetTemplateGUID
   Address: 5f8102e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_GetTemplateGUID(struct HWND__ *,unsigned int,struct _GUID *) */

long SfG2_GetTemplateGUID(HWND__ *param_1,uint param_2,_GUID *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  ulong *puVar3;
  
                    /* 0x102e0  28  ?SfG2_GetTemplateGUID@@YGJPAUHWND__@@IPAU_GUID@@@Z */
  if (param_2 != 0xffffffff) {
    puVar3 = (ulong *)SendMessageA(param_1,0x150,param_2,0);
    if (puVar3 != (ulong *)0x0) {
      param_3->Data1 = *puVar3;
      uVar1 = puVar3[1];
      param_3->Data2 = (short)uVar1;
      param_3->Data3 = (short)(uVar1 >> 0x10);
      *(ulong *)param_3->Data4 = puVar3[2];
      *(ulong *)(param_3->Data4 + 4) = puVar3[3];
      return 0;
    }
  }
  param_3->Data1 = DAT_5f872fe8;
  uVar2 = DAT_5f872fec._2_2_;
  param_3->Data2 = (undefined2)DAT_5f872fec;
  param_3->Data3 = uVar2;
  *(undefined4 *)param_3->Data4 = DAT_5f872ff0;
  *(undefined4 *)(param_3->Data4 + 4) = DAT_5f872ff4;
  return -0x7fffbffb;
}


