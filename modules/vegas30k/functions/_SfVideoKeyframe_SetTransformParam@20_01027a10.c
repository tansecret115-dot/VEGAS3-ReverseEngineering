/* Module: vegas30k.dll
   Function: _SfVideoKeyframe_SetTransformParam@20
   Address: 01027a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVideoKeyframe_SetTransformParam_20
               (IStream *param_1,IStreamVtbl *param_2,IStreamVtbl *param_3,undefined4 param_4,
               undefined4 param_5)

{
  IStreamVtbl *pIVar1;
  IStream *pIVar2;
  HRESULT HVar3;
  int iVar4;
  ULARGE_INTEGER *unaff_EDI;
  int *unaff_retaddr;
  
                    /* 0x27a10  1262  _SfVideoKeyframe_SetTransformParam@20 */
  pIVar2 = param_1;
  pIVar1 = param_1[5].lpVtbl;
  if (pIVar1 != (IStreamVtbl *)0x0) {
    param_1[0x1a].lpVtbl = param_2;
    param_1[0x1b].lpVtbl = param_3;
    HVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_1);
    if (-1 < HVar3) {
      iVar4 = _SfVideoKeyframe_GetValueAt_24(pIVar2,param_1,param_2,param_3,param_4,param_5);
      if (-1 < iVar4) {
        (*param_1->lpVtbl->Seek)(param_1,(LARGE_INTEGER)0x0,0,unaff_EDI);
        (**(code **)(pIVar1->QueryInterface + 0x14))(pIVar1,param_2);
        (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
      }
    }
  }
  return;
}


