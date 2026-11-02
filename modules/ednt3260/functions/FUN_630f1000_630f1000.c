/* Module: ednt3260.dll
   Function: FUN_630f1000
   Address: 630f1000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f1000(void *param_1)

{
  uint uVar1;
  short sVar2;
  short local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  sVar2 = *(short *)((int)param_1 + 0x3fbde);
  if (0xf < sVar2) {
    uVar1 = (uint)(int)sVar2 >> 4;
    do {
      FUN_630f7350(param_1,local_8,1,0x10);
      sVar2 = sVar2 + -0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (0 < sVar2) {
    FUN_630f7350(param_1,local_8,1,sVar2);
  }
  if (*(short *)((int)param_1 + 0x3fbfc) != 0) {
    sVar2 = *(short *)((int)param_1 + 0x3fbfe);
    if (0xf < sVar2) {
      uVar1 = (uint)(int)sVar2 >> 4;
      do {
        FUN_630f7350(param_1,local_8,1,0x10);
        sVar2 = sVar2 + -0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (0 < sVar2) {
      FUN_630f7350(param_1,local_8,1,sVar2);
    }
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x3fbfe),1,0xe);
  }
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x3fbfc),1,1);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x3fc00),1,1);
  if ((*(int *)((int)param_1 + 0x62fa) - *(int *)((int)param_1 + 0x2a) >> 1) * 0x10 +
      (int)*(short *)((int)param_1 + 0x6300) != *(short *)((int)param_1 + 0x3fbae) + -0x10) {
    FUN_630f92d0();
  }
  return;
}


