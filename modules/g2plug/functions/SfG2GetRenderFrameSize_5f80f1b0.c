/* Module: g2plug.dll
   Function: SfG2GetRenderFrameSize
   Address: 5f80f1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2GetRenderFrameSize(struct _GUID *,int *,int *) */

long SfG2GetRenderFrameSize(_GUID *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  SFG2_PARAMS local_674 [991];
  int local_295;
  int local_28d;
  int local_289;
  
                    /* 0xf1b0  19  ?SfG2GetRenderFrameSize@@YGJPAU_GUID@@PAH1@Z */
  uVar1 = G2LoadRegistryTemplate(param_1,local_674,(SFG2TEMPLATE_DESCRIPTION *)0x0);
  if (-1 < (int)uVar1) {
    if (param_2 != (int *)0x0) {
      *param_2 = local_28d;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_289;
    }
    uVar1 = (uint)(local_295 == 0);
  }
  return uVar1;
}


