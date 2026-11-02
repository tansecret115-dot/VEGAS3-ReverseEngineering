/* Module: vegas30k.dll
   Function: _SfVideoKeyframe_InsertSmart@20
   Address: 01027a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * _SfVideoKeyframe_InsertSmart_20
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  HRESULT HVar3;
  int *piVar4;
  ULARGE_INTEGER *unaff_EDI;
  LPSTREAM local_8;
  int *local_4;
  
                    /* 0x27a90  1260  _SfVideoKeyframe_InsertSmart@20 */
  uVar1 = param_5;
  local_8 = (IStream *)0x0;
  local_4 = (int *)0xffffffff;
  piVar4 = (int *)0xffffffff;
  if (((*(int *)(param_1 + 0x14) != 0) &&
      (iVar2 = _SfVideoKeyframe_Find_24(param_1,0,param_2,param_3,param_4,param_5), piVar4 = local_4
      , iVar2 < 0)) &&
     (HVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_8), piVar4 = local_4, -1 < HVar3)) {
    iVar2 = _SfVideoKeyframe_GetValueAt_24(param_1,local_8,param_2,param_3,param_4,uVar1);
    if (-1 < iVar2) {
      param_4 = 0;
      param_5 = 0;
      (*local_8->lpVtbl->Seek)(local_8,(LARGE_INTEGER)0x100000000,(DWORD)&param_4,unaff_EDI);
      (**(code **)(*local_4 + 0x14))(local_4,0,0,0,0);
      iVar2 = _SfVideoKeyframe_Insert_36(param_1,param_2,param_3,7,0,local_8,0,param_4,&local_4);
      if (iVar2 < 0) {
        local_4 = (int *)0xffffffff;
      }
    }
    (*local_8->lpVtbl->Release)(local_8);
    piVar4 = local_4;
  }
  return piVar4;
}


