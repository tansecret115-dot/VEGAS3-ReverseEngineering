/* Module: vegas30k.dll
   Function: FUN_01183b50
   Address: 01183b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01183b50(ISFMixer *param_1)

{
  int iVar1;
  ISFMixer *pIVar2;
  undefined4 uVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  ISFMixerIn *pIStack_348;
  int *piStack_344;
  undefined4 uStack_340;
  int **ppiStack_33c;
  undefined4 *puStack_338;
  int *piStack_334;
  ISFMixer **ppIStack_330;
  int *piStack_32c;
  ISFMixerIn *pIStack_328;
  int *piStack_324;
  undefined4 *puStack_320;
  int **ppiStack_31c;
  ISFMixer **ppIStack_318;
  uint *puStack_314;
  int *piStack_310;
  int *piStack_30c;
  ISFMixer **ppIStack_308;
  ISFMixer *pIStack_304;
  undefined1 *puStack_300;
  ISFMixer *pIStack_2fc;
  int *piStack_2f0;
  ISFMixer *pIStack_2ec;
  uint uStack_2e8;
  ISFMixer *pIStack_2e4;
  ISFMixer *pIStack_2dc;
  undefined4 uStack_2d8;
  undefined *puStack_2d4;
  ISFMixer *pIStack_2d0;
  undefined4 uStack_2cc;
  undefined4 *puStack_2c8;
  ISFMixer *pIStack_2c4;
  undefined4 uStack_2c0;
  undefined4 *puStack_2bc;
  ISFMixer *pIStack_2b8;
  undefined4 uStack_2b4;
  undefined4 *puStack_2b0;
  ISFMixer *pIStack_2ac;
  undefined4 uStack_2a8;
  undefined2 *puStack_2a4;
  ISFMixer *pIStack_2a0;
  undefined4 uStack_29c;
  undefined2 *puStack_298;
  ISFMixer *pIStack_294;
  undefined4 uStack_290;
  undefined4 *puStack_28c;
  ISFMixer *pIStack_288;
  undefined4 uStack_284;
  ISFMixer *pIStack_280;
  int *piStack_27c;
  undefined4 *puStack_278;
  ISFMixer **ppIStack_274;
  int *piStack_270;
  ISFMixer *pIStack_26c;
  undefined1 auStack_234 [84];
  int aiStack_1e0 [119];
  
  uVar3 = 0;
  pIVar2 = (ISFMixer *)0x0;
  if (DAT_012b09c8 != (ISFMixer *)0x0) {
    pIStack_26c = (ISFMixer *)0x1183b74;
    Mixer_Unprepare();
    pIVar2 = DAT_012b09c8;
    if (param_1 == DAT_012b09c8) {
      pIVar2 = (ISFMixer *)0x0;
    }
  }
  DAT_012b09c8 = (ISFMixer *)0x0;
  pIStack_26c = param_1;
  piStack_270 = DAT_012b0b2c;
  ppIStack_274 = (ISFMixer **)0x1183b92;
  (**(code **)(*DAT_012b0b2c + 0x14))();
  ppIStack_274 = &DAT_012b09c8;
  puStack_278 = &DAT_011d9c80;
  piStack_27c = DAT_012b0b2c;
  pIStack_280 = (ISFMixer *)0x1183ba7;
  (**(code **)(*DAT_012b0b2c + 0xc))();
  pIStack_280 = DAT_012b09c8;
  uStack_284 = 0x1183bb2;
  FUN_01183780();
  pIStack_280 = (ISFMixer *)&DAT_012b09a0;
  uStack_284 = 7;
  pIStack_288 = DAT_012b09c8;
  puStack_28c = (undefined4 *)0x1183bc7;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  puStack_28c = &DAT_012b0950;
  uStack_290 = 6;
  pIStack_294 = DAT_012b09c8;
  puStack_298 = (undefined2 *)0x1183bdc;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  puStack_298 = &DAT_012b09b8;
  uStack_29c = 0x10;
  pIStack_2a0 = DAT_012b09c8;
  puStack_2a4 = (undefined2 *)0x1183bf1;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  puStack_2a4 = &DAT_012b09bc;
  uStack_2a8 = 0x11;
  pIStack_2ac = DAT_012b09c8;
  puStack_2b0 = (undefined4 *)0x1183c06;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  puStack_2b0 = &DAT_012b0940;
  uStack_2b4 = 0x70;
  pIStack_2b8 = DAT_012b09c8;
  puStack_2bc = (undefined4 *)0x1183c1b;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  puStack_2bc = &DAT_012b0944;
  uStack_2c0 = 0x71;
  pIStack_2c4 = DAT_012b09c8;
  puStack_2c8 = (undefined4 *)0x1183c30;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  puStack_2c8 = &DAT_012b09a8;
  uStack_2cc = 0x82;
  pIStack_2d0 = DAT_012b09c8;
  puStack_2d4 = (undefined *)0x1183c48;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  puStack_2d4 = &DAT_012b0988;
  uStack_2d8 = 0x84;
  pIStack_2dc = DAT_012b09c8;
  (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
  pIStack_2e4 = DAT_012b09c8;
  uStack_2e8 = 0x1183c70;
  FUN_011833d0();
  pIStack_2e4 = (ISFMixer *)0x1183c7c;
  MIDIMixer_AssignClientIDs(DAT_012b09c8);
  pIStack_2e4 = DAT_012b09c8;
  uStack_2e8 = 0x1183c91;
  (**(code **)(*(int *)DAT_012b09c8 + 0xb0))();
  uStack_2e8 = (uint)(DAT_012b099c == 0);
  pIStack_2ec = DAT_012b09c8;
  piStack_2f0 = (int *)0x1183cad;
  (**(code **)(*(int *)DAT_012b09c8 + 0xb4))();
  piStack_2f0 = (int *)0x1183cb2;
  Mixer_Prepare();
  if (pIVar2 != (ISFMixer *)0x0) {
    piStack_2f0 = (int *)&DAT_00000004;
    iVar1 = (**(code **)(*(int *)pIVar2 + 0x1f0))();
    if (iVar1 != 0) {
      puStack_300 = (undefined1 *)0x1183cd8;
      pIStack_2fc = pIVar2;
      puStack_2d4 = (undefined *)(**(code **)(*(int *)pIVar2 + 0x1f0))();
      piVar4 = (int *)0x0;
      if (0 < (int)puStack_2d4) {
        do {
          puStack_300 = &stack0xfffffd20;
          pIStack_2fc = (ISFMixer *)0x4;
          ppIStack_308 = (ISFMixer **)0x1183cf7;
          pIStack_304 = pIVar2;
          piVar6 = piVar4;
          (**(code **)(*(int *)pIVar2 + 0x1e0))();
          ppIStack_308 = &pIStack_2ec;
          pIStack_2ec = (ISFMixer *)0x0;
          piStack_30c = piStack_2f0;
          piStack_310 = (int *)0x1183d11;
          (**(code **)(*piStack_2f0 + 0xfc))();
          piStack_324 = piVar6;
          piStack_310 = (int *)&stack0xfffffd20;
          puStack_314 = &uStack_2e8;
          ppIStack_318 = &pIStack_2dc;
          ppiStack_31c = &piStack_2f0;
          puStack_320 = &uStack_2d8;
          pIStack_328 = (ISFMixerIn *)0x1183d37;
          (**(code **)(*piStack_324 + 0x80))();
          pIStack_328 = (ISFMixerIn *)&pIStack_2ec;
          piStack_32c = piStack_310;
          ppIStack_330 = (ISFMixer **)0x1183d46;
          (**(code **)(*piStack_310 + 0x5c))();
          ppIStack_330 = ppIStack_318;
          piStack_334 = (int *)0x1183d50;
          iVar1 = (**(code **)(*ppIStack_318 + 0x54))();
          puStack_338 = &uStack_2d8;
          piStack_334 = (int *)&DAT_00000104;
          ppiStack_33c = ppiStack_31c;
          uStack_340 = 0x1183d6b;
          (*(code *)(*ppiStack_31c)[3])();
          piStack_344 = aiStack_1e0;
          uStack_340 = 0x104;
          pIStack_348 = pIStack_328;
          (**(code **)(*(ISFMixer **)pIStack_328 + 0x20))();
          (**(code **)(*piStack_334 + 8))(piStack_334);
          Mixer_GetMixerType((ISFMixer *)0x0);
          piVar7 = (int *)0x0;
          (**(code **)(*(int *)DAT_012b09c8 + 0x94))(DAT_012b09c8,piVar4);
          ppIStack_330 = (ISFMixer **)Mixer_GetDevice(&pIStack_348,4,(ulong)piVar4);
          (**(code **)(*(ISFMixer **)pIStack_348 + 0x108))(pIStack_348,uStack_340);
          piVar6 = piStack_344;
          ppiVar5 = ppiStack_33c;
          (**(code **)(*piVar7 + 0x7c))
                    (piVar7,piStack_32c,piStack_344,ppIStack_330,ppiStack_33c,piStack_334);
          (*(code *)(*ppiVar5)[0x16])(ppiVar5,&uStack_340);
          (**(code **)(*piVar6 + 0x50))(piVar6,iVar1 == 0);
          (**(code **)(*piVar7 + 0x10))(piVar7);
          (*(code *)(*ppiVar5)[9])(ppiVar5,auStack_234);
          (*(code *)(*ppiVar5)[2])(ppiVar5);
          (*(code *)ppIStack_330[2])(&ppIStack_330);
          piVar4 = (int *)((int)piVar4 + 1);
          uVar3 = uStack_2cc;
        } while ((int)piVar4 < (int)puStack_2d4);
      }
      pIStack_2fc = (ISFMixer *)0x1183e50;
      Mixer_RemoveAllFXSends(pIVar2);
    }
    pIStack_2fc = (ISFMixer *)0x1183e56;
    (**(code **)(*(int *)pIVar2 + 8))();
  }
  return uVar3;
}


