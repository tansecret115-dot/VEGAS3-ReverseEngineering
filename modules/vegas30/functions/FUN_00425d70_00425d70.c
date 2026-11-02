/* Module: vegas30.exe
   Function: FUN_00425d70
   Address: 00425d70
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00425d70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ISfAXVideoPreview *pIVar3;
  uint uVar4;
  ISfAXVideoPreview **ppIVar5;
  long lVar6;
  undefined1 **ppuVar7;
  float10 fVar8;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined1 *local_498 [4];
  undefined4 local_488;
  code *local_484;
  code *local_480;
  uint local_47c;
  undefined1 local_470 [64];
  undefined1 local_430 [1068];
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  FUN_00425cf0(param_1);
  iVar2 = FUN_005ba4b0(uVar1,0);
  if (iVar2 < 0) {
    return 1;
  }
  uVar4 = 0;
  ppIVar5 = (ISfAXVideoPreview **)(param_1 + 0x94);
  do {
    pIVar3 = (ISfAXVideoPreview *)FUN_0059e0f0(uVar4);
    ppIVar5[1] = pIVar3;
    if (pIVar3 == (ISfAXVideoPreview *)0x0) {
      lVar6 = -0x7fffbffb;
    }
    else {
      if (*ppIVar5 == (ISfAXVideoPreview *)0x0) {
        lVar6 = SfAXFunc_GetVideoPreviewClass2(ppIVar5);
        if (lVar6 < 0) goto LAB_00425ea1;
      }
      ppuVar7 = local_498;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppuVar7 = (undefined1 *)0x0;
        ppuVar7 = ppuVar7 + 1;
      }
      fVar8 = (float10)FUN_004231f0(uVar1,uVar4,&local_4ac,local_470,&local_4a0,0);
      local_4a8 = (double)fVar8;
      _SfVideo_InitBitmapInfo_28(local_430,local_4ac,local_4a0,local_49c,0,0,0);
      local_498[0] = local_430;
      local_498[3] = (undefined1 *)local_4a8._4_4_;
      local_498[1] = local_470;
      local_498[2] = (undefined1 *)(undefined4)local_4a8;
      local_488 = 0;
      local_484 = FUN_005a0cf0;
      local_480 = FUN_005a0d50;
      local_47c = uVar4;
      lVar6 = (**(code **)(*(int *)ppIVar5[1] + 0x20))
                        (ppIVar5[1],*(undefined4 *)(param_1 + 0xfc),*ppIVar5,local_498);
      FUN_00427b60();
    }
LAB_00425ea1:
    uVar4 = uVar4 + 1;
    ppIVar5 = ppIVar5 + 2;
    if (1 < uVar4) {
      return lVar6;
    }
  } while( true );
}


