/* Module: sctplug.dll
   Function: FUN_004093e0
   Address: 004093e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004093e0(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_ESI;
  uint unaff_EDI;
  int *piVar9;
  int *piStack_290;
  undefined4 uStack_28c;
  uint uStack_288;
  int *piStack_284;
  int iStack_27c;
  undefined1 *puStack_278;
  uint uStack_274;
  uint *puStack_270;
  int *piStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  int *piStack_260;
  uint uStack_25c;
  int *piStack_258;
  undefined1 *puStack_254;
  undefined1 local_244 [580];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return -0x7ff8ffa9;
  }
  puStack_254 = local_244;
  piStack_258 = param_2;
  uStack_25c = 0x40941f;
  iVar5 = (**(code **)(*param_2 + 0x10))();
  if (-1 < iVar5) {
    uStack_25c = 0;
    piStack_260 = (int *)0x0;
    uStack_264 = 0;
    iStack_268 = 0;
    puStack_270 = (uint *)0x409439;
    piStack_26c = unaff_ESI;
    (**(code **)(*unaff_ESI + 0x14))();
    puStack_270 = &uStack_25c;
    puStack_278 = &stack0xfffffdb0;
    uStack_274 = 0xc;
    iVar5 = (**(code **)(*piStack_260 + 0xc))();
    puVar2 = puStack_270;
    if ((-1 < iVar5) && (piStack_258 != (int *)0x0)) {
      if (100 < uStack_25c) {
        piStack_284 = (int *)0x409472;
        (**(code **)(*puStack_270 + 8))();
        return -0x7fffbffb;
      }
      *(undefined4 *)(iVar1 + 0x54) = 0;
      *(undefined2 *)(iVar1 + 0x39) = 0;
      *(undefined2 *)(iVar1 + 0x3b) = 0;
      piStack_284 = (int *)0x0;
      piStack_290 = piStack_260 + -3;
      uStack_288 = 1;
      uStack_28c = 0;
      iVar5 = (**(code **)(*puStack_270 + 0x14))();
      iStack_27c = 0;
      pcVar8 = _wcsicmp_exref;
      if (0 < (int)piStack_26c) {
        do {
          if (iVar5 < 0) break;
          piVar9 = piStack_284;
          (**(code **)(*piStack_284 + 0xc))(piStack_284,&puStack_278,4,&stack0xfffffd80);
          uStack_274 = uStack_288;
          if (0x1b < uStack_288) {
            uStack_288 = 0x1c;
          }
          uStack_288 = uStack_288 - 4;
          (**(code **)(*puVar2 + 0xc))(puVar2,&puStack_270,uStack_288,&piStack_290);
          iVar5 = (**(code **)(*piVar9 + 0x14))(piVar9,piStack_284 + -7,0,1,0);
          if (-1 < iVar5) {
            if (unaff_EDI != 0) {
              uVar7 = unaff_EDI;
              if (0x207 < unaff_EDI) {
                uVar7 = 0x208;
              }
              iVar5 = (**(code **)(*piStack_284 + 0xc))
                                (piStack_284,&stack0xfffffdb8,uVar7,&stack0xfffffd80);
              if (-1 < iVar5) {
                iVar6 = (*pcVar8)(&stack0xfffffdb8,L"SCOTT EOM");
                if (iVar6 == 0) {
                  sVar3 = ftol();
                  *(int *)(iVar1 + 0x54) = (int)sVar3;
                }
                else {
                  iVar6 = (*pcVar8)(&stack0xfffffdb8,L"SCOTT Cue In");
                  if (iVar6 == 0) {
                    sVar3 = ftol();
                    iStack_268 = (int)sVar3;
                    *(short *)(iVar1 + 0x39) = sVar3;
                    uVar4 = ftol();
                    *(undefined2 *)(iVar1 + 0x3b) = uVar4;
                  }
                }
                (**(code **)(*piStack_284 + 0x14))(piStack_284,unaff_EDI - unaff_EBP,0,1,0);
              }
            }
            (**(code **)(*piStack_284 + 0x14))(piStack_284,unaff_ESI,0,1,0);
            pcVar8 = _wcsicmp_exref;
          }
          iStack_27c = iStack_27c + 1;
        } while (iStack_27c < (int)piStack_26c);
      }
      (**(code **)(*piStack_284 + 8))(piStack_284);
      return iVar5;
    }
    piStack_284 = (int *)0x409643;
    (**(code **)(*puStack_270 + 8))();
    iVar5 = 0;
  }
  return iVar5;
}


