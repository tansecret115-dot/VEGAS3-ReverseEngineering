/* Module: ednt3260.dll
   Function: FUN_630f3840
   Address: 630f3840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f3840(void *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  void *local_8;
  
  local_8 = param_1;
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6306),1,5);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6308),1,3);
  psVar1 = (short *)((int)param_1 + 0x630a);
  FUN_630f7350(param_1,psVar1,1,3);
  sVar2 = *psVar1;
  if (((sVar2 == 3) || (sVar2 == 5)) || (sVar2 == 7)) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x630c),1,2);
  }
  sVar2 = *psVar1;
  if (((sVar2 == 4) || (sVar2 == 5)) || ((sVar2 == 6 || (sVar2 == 7)))) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x630e),1,2);
  }
  if (*psVar1 == 2) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x6310),1,2);
  }
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6312),1,1);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6314),1,5);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6316),1,1);
  if (*(short *)((int)param_1 + 0x6316) != 0) {
    FUN_630f72a0(param_1,(ushort *)((int)param_1 + 0x6318),1,8);
  }
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x631a),1,1);
  if (*(short *)((int)param_1 + 0x631a) != 0) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x631c),1,8);
  }
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x631e),1,1);
  if (*(short *)((int)param_1 + 0x631e) != 0) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x6320),1,5);
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x6322),1,2);
  }
  if (*psVar1 == 0) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x6324),1,5);
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x6326),1,1);
    if (*(short *)((int)param_1 + 0x6326) != 0) {
      FUN_630f72a0(param_1,(ushort *)((int)param_1 + 0x6328),1,8);
    }
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x632a),1,1);
    if (*(short *)((int)param_1 + 0x632a) != 0) {
      FUN_630f7350(param_1,(short *)((int)param_1 + 0x632c),1,8);
    }
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x632e),1,1);
    if (*(short *)((int)param_1 + 0x632e) != 0) {
      FUN_630f7350(param_1,(short *)((int)param_1 + 0x6330),1,5);
      FUN_630f7350(param_1,(short *)((int)param_1 + 0x6332),1,2);
    }
  }
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6334),1,1);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6336),1,1);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6338),1,1);
  if (*(short *)((int)param_1 + 0x6338) != 0) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x633a),1,0xe);
  }
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x633c),1,1);
  if (*(short *)((int)param_1 + 0x633c) != 0) {
    FUN_630f7350(param_1,(short *)((int)param_1 + 0x633e),1,0xe);
  }
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6340),1,1);
  if (*(short *)((int)param_1 + 0x6340) != 0) {
    psVar1 = (short *)((int)param_1 + 0x6342);
    FUN_630f7350(param_1,psVar1,1,6);
    iVar3 = 0;
    local_8 = (void *)0x0;
    if (*psVar1 != -1 && -1 < *psVar1 + 1) {
      do {
        FUN_630f7350(param_1,(short *)&local_8,1,8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *psVar1 + 1);
    }
  }
  return;
}


