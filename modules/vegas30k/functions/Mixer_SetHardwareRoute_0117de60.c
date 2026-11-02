/* Module: vegas30k.dll
   Function: Mixer_SetHardwareRoute
   Address: 0117de60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetHardwareRoute(unsigned long,unsigned long) */

long Mixer_SetHardwareRoute(ulong param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  uint unaff_EDI;
  int *piVar3;
  int **ppiVar4;
  int *piVar5;
  undefined4 uVar6;
  int **ppiStack_564;
  int *piStack_560;
  int **ppiStack_55c;
  undefined1 *puStack_558;
  undefined4 uStack_554;
  int *piStack_550;
  undefined4 **ppuStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  int *piStack_538;
  int *piStack_534;
  undefined4 uStack_530;
  int *piStack_52c;
  undefined1 *puStack_528;
  undefined4 *puStack_524;
  undefined4 local_514;
  int aiStack_510 [3];
  undefined1 local_504 [448];
  undefined1 auStack_344 [16];
  undefined1 auStack_334 [212];
  undefined4 auStack_260 [4];
  undefined1 auStack_250 [584];
  uint uStack_8;
  int iStack_4;
  
                    /* 0x17de60  231  ?Mixer_SetHardwareRoute@@YGJKK@Z */
  puStack_524 = &local_514;
  puStack_528 = local_504;
  local_514 = 0;
  piStack_52c = DAT_012b09c8;
  uStack_530 = 0x117de88;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x60))();
  if (((-1 < lVar1) && (uStack_8 < unaff_EDI)) && (iStack_4 != aiStack_510[uStack_8])) {
    uStack_530 = 0x117debb;
    iVar2 = Transport_IsAnyOpen();
    if (iVar2 != 0) {
      uStack_530 = 0x117dec9;
      Transport_Suspend();
    }
    aiStack_510[uStack_8] = iStack_4;
    uStack_530 = 0x117ded2;
    Mixer_Unprepare();
    piStack_534 = aiStack_510;
    piStack_538 = DAT_012b09c8;
    lVar1 = (**(code **)(*DAT_012b09c8 + 100))();
    Mixer_Prepare();
    if (iVar2 != 0) {
      uStack_540 = 0x117def9;
      Transport_Resume(0);
    }
    if (-1 < lVar1) {
      uStack_540 = 0;
      uStack_544 = 0;
      ppuStack_54c = &puStack_524;
      uStack_548 = 0;
      piStack_550 = DAT_012b09c8;
      uStack_554 = 0x117df19;
      (**(code **)(*DAT_012b09c8 + 0x24))();
      puStack_558 = auStack_334;
      uStack_554 = 0x104;
      ppiStack_55c = &piStack_538;
      piStack_560 = DAT_012b09c8;
      ppiStack_564 = (int **)0x117df36;
      (**(code **)(*DAT_012b09c8 + 0x2c))();
      ppiStack_564 = &piStack_550;
      piVar5 = DAT_012b09c4;
      uVar6 = uStack_548;
      (**(code **)(*DAT_012b09c4 + 0x4c))(DAT_012b09c4,uStack_548,auStack_344);
      if (piStack_560 != (int *)0x0) {
        piVar3 = piStack_560;
        ppiVar4 = ppiStack_564;
        (**(code **)(*piStack_560 + 0x1c))(piStack_560,ppiStack_55c,auStack_250,ppiStack_564);
        auStack_260[uStack_8] = (&ppiStack_564)[uStack_8];
        lVar1 = (**(code **)(*piVar5 + 0x20))(piVar5,uVar6,auStack_260,ppiVar4);
        (**(code **)(*piVar3 + 8))(piVar3);
        return lVar1;
      }
    }
  }
  return lVar1;
}


