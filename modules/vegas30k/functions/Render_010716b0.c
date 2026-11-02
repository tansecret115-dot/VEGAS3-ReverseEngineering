/* Module: vegas30k.dll
   Function: Render
   Address: 010716b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CMeshWarp::Render(struct tagBITMAPINFOHEADER const *,void *,struct tagRECT
   const *,struct tagBITMAPINFOHEADER const *,void const *,struct tagRECT const *,unsigned
   long,double) */

int __thiscall
CMeshWarp::Render(CMeshWarp *this,tagBITMAPINFOHEADER *param_1,void *param_2,tagRECT *param_3,
                 tagBITMAPINFOHEADER *param_4,void *param_5,tagRECT *param_6,ulong param_7,
                 double param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  CMeshWarp *this_00;
  tWARP_MESH *ptVar4;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  int in_stack_000080a8;
  undefined4 in_stack_000080ac;
  undefined4 in_stack_000080b0;
  undefined4 in_stack_000080b4;
  undefined4 in_stack_000080b8;
  undefined4 in_stack_000080bc;
  undefined4 in_stack_000080c0;
  undefined4 in_stack_000080c8;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
                    /* 0x716b0  262
                       ?Render@CMeshWarp@@QAEHPBUtagBITMAPINFOHEADER@@PAXPBUtagRECT@@0PBX2KN@Z */
  FUN_01002100();
  piVar1 = *(int **)(this_00 + 8);
  if (*piVar1 < 1) {
    return 0;
  }
  if (*piVar1 == 1) {
    ptVar4 = (tWARP_MESH *)piVar1[2];
  }
  else {
    InterpolateMesh(this_00,(tWARP_MESH *)&stack0x00000094,(tWARP_MESH *)piVar1[2],
                    (tWARP_MESH *)(piVar1[2] + piVar1[1]),
                    (double)CONCAT44(unaff_EDI,in_stack_000080c8));
    ptVar4 = (tWARP_MESH *)&stack0x00000094;
  }
  uVar9 = 1;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = *(undefined4 *)(in_stack_000080a8 + 8);
  uVar5 = *(undefined4 *)(in_stack_000080a8 + 4);
  uVar2 = _SfGetPixelType_4(in_stack_000080a8);
  iVar3 = _SfDibAlloc_28(&stack0x00000000,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9);
  if (-1 < iVar3) {
    iVar3 = FUN_01050ec0(&param_1,unaff_retaddr,0,in_stack_000080b0,0,in_stack_000080b4,
                         in_stack_000080b8,in_stack_000080bc,0,in_stack_000080c0);
    if (iVar3 != 0) {
      HorizontalPass(this_00,ptVar4,(tSFDIBGENERICPARAMS *)&param_1);
      FUN_01051260(&param_1);
      iVar3 = FUN_01050ec0(&param_1,in_stack_000080a8,in_stack_000080ac,in_stack_000080b0,0,
                           unaff_retaddr,0,in_stack_000080b0,0,in_stack_000080c0);
      if (iVar3 != 0) {
        VerticalPass(this_00,ptVar4,(tSFDIBGENERICPARAMS *)&param_1);
        FUN_01051260(&param_1);
      }
    }
    _SfDibFree_8(unaff_retaddr,0);
    iVar3 = 1;
  }
  return iVar3;
}


