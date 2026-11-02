/* Module: sfpaplug.dll
   Function: FUN_00411b70
   Address: 00411b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

HRESULT FUN_00411b70(int *param_1)

{
  int iVar1;
  HRESULT HVar2;
  int *unaff_ESI;
  int *unaff_EDI;
  void *unaff_retaddr;
  int **ppiVar3;
  IStream *pIVar4;
  IStream *This;
  int *piVar5;
  int *piVar6;
  int *piStack_1c;
  int *piStack_18;
  IStream *pIStack_14;
  IStream local_4;
  
  pIStack_14 = &local_4;
  piStack_18 = &DAT_0044dc80;
  piStack_1c = param_1;
  local_4.lpVtbl = (IStreamVtbl *)0x0;
  iVar1 = (**(code **)*param_1)();
  if (-1 < iVar1) {
    iVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&pIStack_14);
    if (-1 < iVar1) {
      HVar2 = (*pIStack_14->lpVtbl->Write)(pIStack_14,unaff_retaddr,(ULONG)param_1,(ULONG *)0x0);
      if (HVar2 < 0) {
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        (**(code **)(*piStack_18 + 8))(piStack_18);
        return HVar2;
      }
      piVar6 = (int *)0x0;
      piVar5 = (int *)0x0;
      pIVar4 = pIStack_14;
      (*pIStack_14->lpVtbl->Seek)(pIStack_14,0,0,0,0);
      ppiVar3 = &piStack_1c;
      iVar1 = (**(code **)(*piVar6 + 0xc))(piVar6,ppiVar3);
      This = pIVar4;
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*piVar5 + 0x18))(piVar5,piVar6,pIVar4,0x1000000);
        This = pIVar4;
        if (-1 < iVar1) {
          iVar1 = (*pIVar4->lpVtbl[1].UnlockRegion)(pIVar4,ppiVar3);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,pIVar4,0,0);
          }
        }
        (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,ppiVar3);
      }
      (*This->lpVtbl->Release)(This);
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return iVar1;
}


