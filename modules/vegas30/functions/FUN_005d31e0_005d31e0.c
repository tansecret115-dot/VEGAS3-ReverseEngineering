/* Module: vegas30.exe
   Function: FUN_005d31e0
   Address: 005d31e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d31e0(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ULARGE_INTEGER *unaff_EDI;
  int *piVar4;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 uStack_8d0;
  int local_8cc [199];
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_574;
  LPSTREAM local_570 [3];
  undefined1 local_564 [276];
  uint local_450;
  uint local_44c;
  undefined4 auStack_43c [128];
  undefined4 auStack_23c [142];
  IStream *local_4;
  
  iVar1 = FUN_005d26e0(param_1,local_564);
  if (-1 < iVar1) {
    iVar1 = 1;
    piVar4 = local_8cc;
    for (iVar2 = 0xda; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_8cc[0] = param_2;
    if (param_2 == 4) {
      if (0x1a < local_450) goto LAB_005d3480;
      local_8cc[2] = 0x80000000;
      auStack_43c[local_450] = 0x80000000;
      uVar3 = 1;
      local_8d8 = 0x90;
      local_8d4 = 0x19;
      local_8cc[1] = local_450;
      local_450 = local_450 + 1;
    }
    else {
      if ((param_2 != 5) || (0x1f < local_44c)) goto LAB_005d3480;
      auStack_23c[local_44c] = 0;
      local_8cc[2] = 0;
      uVar3 = 4;
      local_8d8 = 0x136;
      local_8d4 = 0x1f;
      local_8cc[1] = local_44c;
      local_44c = local_44c + 1;
    }
    local_58c = 0;
    local_588 = 0x3ff00000;
    local_594 = 0;
    local_590 = 0x3ff00000;
    local_59c = 0;
    local_598 = 0x3ff00000;
    local_5a4 = 0;
    local_5a0 = 0x3ff00000;
    local_584 = 0;
    local_580 = 0;
    local_57c = 0;
    local_5b0 = 0;
    local_5ac = 0;
    local_574 = 0;
    local_570[0] = (IStream *)0x0;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x70))(param_3,2,&local_574);
      iVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,local_570);
      if (((iVar1 < 0) || (iVar1 = _SfGraph_SaveToStream_8(param_3,local_570[0]), iVar1 < 0)) ||
         (iVar1 = (*local_570[0]->lpVtbl->Seek)(local_570[0],(LARGE_INTEGER)0x0,0,unaff_EDI),
         iVar1 < 0)) goto LAB_005d3480;
    }
    iVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_4);
    if (-1 < iVar1) {
      uStack_8d0 = 1;
      iVar1 = (*local_4->lpVtbl->Write)(local_4,&uStack_8d0,4,(ULONG *)0x0);
      if ((-1 < iVar1) && (iVar1 = FUN_005e8430(local_4,0,0), -1 < iVar1)) {
        if (param_4 != 0) {
          FUN_004e9f70(param_1,local_8d8,0);
          FUN_004ea590(param_1,uVar3,local_8cc[1],local_8d4);
        }
        iVar1 = FUN_005d2700(param_1,local_564,0,0);
        if (param_4 != 0) {
          if (-1 < iVar1) {
            FUN_004eb2b0(param_1);
          }
          FUN_004ea040(param_1,iVar1 < 0);
        }
      }
    }
  }
LAB_005d3480:
  if (local_570[0] != (IStream *)0x0) {
    (*local_570[0]->lpVtbl->Release)(local_570[0]);
  }
  return iVar1;
}


